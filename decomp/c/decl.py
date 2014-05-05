from collections import namedtuple
from cStringIO import StringIO
import re, struct
from pycparser import c_parser, c_ast
from decomp import utils
from decomp.c import cpp
from decomp.cpu import ida

class ComplicatedDeclError(Exception): pass
class EmptyArgListError(Exception): pass
class UnwantedNodeError(Exception): pass

# instantiate a parser here so we can reuse it
parser = c_parser.CParser()

decls_and_types = namedtuple('decls_and_types', ['decls', 'typedefs'])
resolved_types = namedtuple('resolved_types', ['no_tag', 'tag'])

###
### Functions for parsing C declarations and argument to register mapping
###

def node_fail(exc, msg, node):
    '''exc -> str -> c_ast -> unit'''
    out = StringIO()
    node.show(nodenames=True, attrnames=True, buf=out)
    raise exc(msg % out.getvalue)

def get_decl_type_and_names(node):
    '''c_ast -> (c_ast, (str*))'''
    def fail(node):
        node_fail(ComplicatedDeclError,
                  'not a typedef or data declaration:\n%s',
                  node)

    sw = {
        c_ast.Decl : lambda x: get_decl_type_and_names(x.decl),
        c_ast.TypeDecl : lambda x: get_decl_type_and_names(x.type),
        c_ast.Typename : lambda x: get_decl_type_and_names(x.names),
        c_ast.Struct : lambda x: (c_ast.Struct, (x.name,)),
        c_ast.Union : lambda x: (c_ast.Union, (x.name,)),
        c_ast.Enum : lambda x: (c_ast.Decl, (x.name,)),
        c_ast.ArrayDecl : lambda x: get_decl_type_and_names(x.type),
        c_ast.PtrDecl : lambda x: get_decl_type_and_names(x.type),
        c_ast.IdentifierType : lambda x: (c_ast.Decl, tuple(x.names))
    }

    return utils.dictswitch(type(node), sw, node, fail, node)

def process_ast(ast, wanted):
    '''c_ast -> [str] -> ({str : [c_ast]}, [c_ast])'''
    # NOTE mutates typedefs, decls
    def get_decls_and_typedefs((decls, typedefs), (_, node)):
        nodety = type(node)
        if nodety not in (c_ast.Decl, c_ast.Typedef):
            node_fail(UnwantedNodeError, 'unwanted node:\n%s', node)

        if nodety is c_ast.Typedef:
            typedefs.append(node)
        elif node.coord.file in all_wanted and node:
            # retrieve user-provided decls, but skip any from user's #includes
            try:
                decls[node.coord.file].append(node)
            except KeyError:
                decls[node.coord.file] = [node]

        return decls_and_types(decls, typedefs)

    all_wanted = wanted.union([utils.cpp_decomp_tag])
    return reduce(get_decls_and_typedefs, ast.children(), ({}, []))

def make_internal_fn_decl(name):
    '''str -> c_ast'''
    # don't you wish python had a macro system?
    return c_ast.Decl(
        name, [], [], [],
        c_ast.FuncDecl(
            c_ast.ParamList(
                [c_ast.Decl(
                    utils.args_tag, [], [], [],
                    c_ast.PtrDecl(
                        [],
                        c_ast.TypeDecl(
                            utils.args_tag, [],
                            c_ast.IdentifierType(['%s%s'
                                                  % (utils.decomp_tag,
                                                     utils.args_tag)]))),
                    None, None)]),
            c_ast.TypeDecl(
                name, [],
                c_ast.IdentifierType(['void']))),
        None, None)

def get_decls(decls, cpp_in='', wanted=frozenset()):
    '''str -> opt:str -> opt:frozenset([str]) ->
    ({str : [c_ast]}, [c_ast])'''
    if cpp_in != '':
        decls = cpp.preprocess('%s\n%s' % (cpp_in, decls))
    return process_ast(parser.parse(decls, filename=utils.cpp_decomp_tag),
                       wanted)

def resolve_typedefs(nodes):
    '''[c_ast()] -> {(str*) : (str*)}'''
    # NOTE mutates: modifies d
    def resolve_type_name(typename, d):
        try:
            return resolve_type_name(d[typename], d)
        except KeyError:
            return typename

    def resolve(d, (name, node)):
        try:
            (tag, typenames) = get_decl_type_and_names(node.type)
            if tag is c_ast.Decl:
                which = d.no_tag
            elif tag in [c_ast.Struct, c_ast.Union, c_ast.Enum]:
                which = d.tag
            which[name] = resolve_type_name(typenames, which)
        except ComplicatedDeclError:
            pass
        return d

    return reduce(resolve, nodes.iteritems(),
                  resolved_types({}, {}))

def find_node(node, wanted):
    '''c_ast -> ty -> c_ast'''
    if type(node) is wanted:
        return node
    else:
        return find_node(node.type, wanted)

def get_fn_sig(node, typedefs):
    '''c_ast -> {str : {str : (str*)}} -> fn_sig'''
    def resolve_types(node, typedefs):
        def resolve_one_type(node, typedefs):
            # NOTE mutates: modifies n.names (changes ast)
            try:
                n = find_node(node, c_ast.IdentifierType)
                n.names = list(typedefs.no_tag[' '.join(n.names)])
            except (AttributeError, KeyError):
                # AttributeError: will happen on e.g. structs; ignore
                # KeyError: type not in the typedef dict
                pass

        if node.args is not None:
            for (_, x) in node.args.children():
                resolve_one_type(x, typedefs)
        resolve_one_type(node.type, typedefs)

    def get_sig(node, typedefs):
        resolve_types(node, typedefs)
        if node.args is not None:
            return ida.ida_current_cpu().get_abi_fn_arg_map(node)
        else:
            raise EmptyArgListError(
                "use (void) if %s takes no arguments" % node.name)

    return get_sig(find_node(node, c_ast.FuncDecl), typedefs)

def is_c_str(string):
    '''str -> bool'''
    # XXX this is for the benefit of get_str_literals to avoid using pycparser
    # for a very simple type--IDA will always(?) return char[size] for
    # GuessType() on a C string.  this will probably break on other string
    # types, or if we change get_str_literals to use get_or_guess_type and a
    # user provides their own type that doesn't match this.
    return re.search(r'^char\[(?:\d+)?\]$', string) is not None

def castify(node):
    '''c_ast -> c_ast'''
    # NOTE mutates declname (changes ast)
    #
    # in order to make extern calls without warnings, we must cast our register
    # arguments (which are just ints) to the argument types.  this function
    # takes ast nodes like these:
    #
    #  ArrayDecl <type>: dim_quals=[]
    #    PtrDecl <type>: quals=[]
    #      TypeDecl <type>: declname=argv, quals=[]
    #        IdentifierType <type>: names=['char']
    #
    #  TypeDecl <type>: declname=main, quals=[]
    #    IdentifierType <type>: names=['int']
    #
    # and produces these:
    #
    # Typename <params[1]>: quals=[]
    #   ArrayDecl <type>: dim_quals=[]
    #     PtrDecl <type>: quals=[]
    #       TypeDecl <type>: declname=None, quals=[]
    #         IdentifierType <type>: names=['char']
    #
    #  Typename <to_type>: quals=[]
    #    TypeDecl <type>: declname=None, quals=[]
    #      IdentifierType <type>: names=['int']
    #
    # which are suitable for use with c_ast.Cast.  (we have to make declname
    # None or CGenerator().visit will include the name--bogus in a cast)
    find_node(node, c_ast.TypeDecl).declname = None
    return c_ast.Typename(node.quals, node)
