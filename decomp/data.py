from itertools import imap, izip
from decomp import ida, utils
from decomp.c import cpp, decl as cdecl, types as ep_ct

class UnknownDataTypeError(Exception): pass

def get_literals(segs, fn, pred):
    '''[str] -> fn -> fn -> {str : <dyn>}'''
    return {name : fn(ea)
            for (name, ea) in ida.ea_list_from_segs(segs)
            if pred(ea)}

def get_one_item(ea, ti, sz):
    '''ea_t -> tinfo_t -> int -> c.types obj | int | long?'''
    if ti.is_float():
        return ep_ct.cfloat(ida.get_float(ea))
    elif ti.is_double():
        return ep_ct.cdouble(ida.get_double(ea))
    else:
        try:
            # NOTE this gets the SOURCE'S size for a given type, which may not
            # match the target's
            size_to_fn = {
                1 : ida.byte, 2 : ida.word, 4 : ida.dword, 8 : ida.qword}
            fn = size_to_fn[sz]
        except KeyError:
            raise UnknownDataTypeError('unknown data type at %s' % ida.atoa(ea))
    return fn(ea)

def get_item(ea, ti):
    '''ea_t -> tinfo_t -> c.types obj | int | str'''
    if ti.is_array():
        ai = ida.array_details(ti)
        if ai.elem_type.is_char():
            return ida.get_string(ea)
        else:
            sz = ai.elem_type.get_size()
            ret = get_one_item(ea, ai.elem_type, sz)
            return ret
    else:
        sz = ida.size_of(ti)
        return get_one_item(ea, ti, sz)

def get_num_literals(segs):
    '''[str] -> {str : c.types obj}'''
    def get_num(ea):
        ti = ida.get_or_guess_tinfo(ea)
        return get_item(ea, ti)

    return get_literals(segs, get_num, lambda x: True)

def get_str_literals(segs):
    '''[str] -> {str : str}'''
    # XXX making a bad assumption that we only need a string if it's referred to
    # in .text, but this avoids some junk in .rodata (e.g. jump tables)
    return get_literals(segs, ida.get_string,
                        lambda x: cdecl.is_c_str(ida.guess_type(x)) and
                        '.text' in list(ida.seg_name(y) for y in
                                        (ida.data_refs_to(x))))

def get_type_for_c_ast_constant(ti):
    '''tinfo_t -> str'''
    if ti.is_floating():
        return 'float'
    elif ti.is_char():
        return 'string'
    else:
        return 'int'

def get_data(segs, cpp_in):
    '''[str] -> str -> [c_ast]'''
    def gen(((ti, ea, declstr), node)):
        '''(tinfo_t, ea_t) -> c_ast'''
        # NOTE mutates node
        has_data = ida.seg_name(ea) != '.bss'
        ptr = ida.can_be_off32(ea)
        if ptr not in [ida.BADADDR, 0]:
            ptr_ti = ida.get_or_guess_tinfo(ptr)
            ti_node = cdecl.get_decls(declstr).decls[utils.cpp_decomp_tag][0]
            return gen(((ptr_ti, ptr, ''), ti_node))
        # XXX our data segment has no strings, but that's probably specific to
        # the one binary we're dealing with
        elif ti.is_array():
            ai = ida.array_type_data_t()
            ti.get_array_details(ai)
            item_size = ai.elem_type.get_size()
            typename = get_type_for_c_ast_constant(ai.elem_type)
            length = (ida.item_end(ea) - ida.item_head(ea)) / item_size
            if has_data is True:
                if ai.elem_type.is_char():
                    node.init = ep_ct.constant(typename, c_stringify(
                        ida.get_string(ea)))
                else:
                    items = list(get_item(ea + j * item_size, ti)
                                 for j in xrange(0, length))
                    node.init = ep_ct.initlist(
                        [ep_ct.constant(typename, str(x)) for x in items])
        else:
            if has_data is True:
                typename = get_type_for_c_ast_constant(ti)
                node.init = ep_ct.constant(typename,
                                           str(get_item(ea, ti)))
        return node

    def get_tinfo_and_declstr(ea):
        ti = ida.get_or_guess_tinfo(ea)
        return (ti, ea, ida.print_tinfo(ida.name(ea), ti))

    def has_got_seg_in_data_refs(refs):
        # filter out data not referenced by GOT
        return '.got' in [ida.seg_name(x) for x in refs]

    def get_refs_and_ea((_, ea)):
        return (ida.data_refs_to(ea), ea)

    refs_eas = imap(get_refs_and_ea,
                    ida.ea_list_from_segs(segs))
    data = list(get_tinfo_and_declstr(ea)
                for (refs, ea) in refs_eas
                if has_got_seg_in_data_refs(refs))
    declstrs = '\n'.join([x[2] for x in data])
    decls = izip(data,
                 cdecl.get_decls(declstrs, cpp_in).decls[utils.cpp_decomp_tag])
    return map(gen, decls)

def get_fns_and_types(segs, wanted_fns, cpp_in):
    '''[str] -> [str] -> str -> ([c_ast], [c_ast])'''
    # NOTE mutates, because...
    #
    # IDA will always give us demangled names in type signatures, so we have to
    # replace the name in the returned decl with the mangled name
    def get_wanted(l, (name, decl)):
        return l + [decl] if name in wanted_fns else l

    def get_name_type((name, ea)):
        return (name, ida.print_type2(ea))

    fns = reduce(get_wanted,
                 imap(get_name_type, ida.ea_list_from_segs(segs)),
                 [])

    (decls, typedefs) = cdecl.get_decls('\n'.join(fns), cpp_in)
    name_to_decl = {x.name : x for x in decls[utils.cpp_decomp_tag]}
    for (decl, mangled) in utils.zip_prefixes(name_to_decl.keys(),
                                              wanted_fns):
        name_to_decl[decl].name = mangled

    return decls[utils.cpp_decomp_tag], typedefs

def get_segs(segs):
    '''[str] -> [(str, ea_t)]'''
    def get_name_base(seg):
        return (seg, ida.seg_by_name(seg))

    return list((name, ida.seg_by_base(idx)) for (name, idx) in
                imap(get_name_base, segs) if idx != ida.BADADDR)

def get_fn_arg_map(decls, typedefs):
    '''[c_ast] -> {(strs) : (strs)} -> {str : reg_sig}'''
    return {x.name : cdecl.get_fn_sig(x, typedefs) for x in decls}

def get_stkvars(fns):
    '''frozenset(str) -> {str : {int : tinfo_t}}'''
    def make_input(d, fn):
        # NOTE mutates d
        var_map = ida.get_stkvar_map(ida.loc_by_name(fn))
        if var_map == {}:
            pass
        else:
            d[fn] = var_map
        return d

    return reduce(make_input, fns, {})

def make_stkvar_txt(fns, stkvar_map, cpp_filter):
    '''frozenset(str) -> {str : {int : tinfo_t}} -> str -> {str : c_ast}'''
    def make_decls(acc, (fn, items)):
        txt = '\n'.join(ida.print_tinfo(name, ti)
                        for (name, ti) in items.itervalues())
        return acc + cpp.make_cpp_input(fn, txt)

    cpp_in = reduce(make_decls, stkvar_map.iteritems(), cpp_filter)
    # force preprocessing by passing as cpp_in instead of decls
    vardecls = cdecl.get_decls('', cpp_in, fns).decls
    return {fn : vardecls[fn] for fn in vardecls.iterkeys()}

def c_stringify(s):
    r = s.replace('"', r'\"')
    return '"%s"' % repr(r).rstrip("'").lstrip("'").replace(r'\\', '\\')
