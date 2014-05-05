from functools import partial
from itertools import chain, izip
from pycparser import c_ast
from pyc_fmtstr_parser.printf_parse import printf_parse, Arg_type as p_Arg_type
from pyc_fmtstr_parser.scanf_parse import scanf_parse, Arg_type as s_Arg_type
from decomp import ida, utils
from decomp.c import decl as cdecl, types as ep_ct
from decomp.cpu import ida as cpu_ida, regs

flatten = chain.from_iterable

# MIPS N32
# $v0,$v1, $a0..$a7 for return/args
# $f0,$f2 and $f12..f19 for fp return/args

class RegSpillError(Exception): pass
class StructByValueError(Exception): pass

# WARNING: this must be in the same order as c.types.ep_ctypes!
# (pointer is intentionally missing)
c_type_to_slot = zip(
    iter(ep_ct.ep_ctypes),
    [ep_ct.slot_to_typename[x] for x in
     [ep_ct.slot_types[y] for y in
      ['i8',  # signed char
       'u8',  # unsigned char
       'i16', # short
       'u16', # unsigned short
       'i32', # int
       'u32', # unsigned int
       'i32', # long
       'u32', # unsigned long
       'i64', # long long
       'u64', # unsigned long long
       's',   # float
       'd',   # double
       'i8'   # char
       ]]])

def make_stdio_sw(fmt_type, types, pointerize):
    '''enum -> [str] -> bool -> dict'''
    # the printf/scanf parsers can parse nearly all format string types, but we
    # do not handle all of them here
    fmt_to_type = izip([fmt_type[x] for x in types],
                       c_type_to_slot)

    return {ty : (ep_ct.ptr(val)
                  if pointerize is True
                  else val)
            for (ty, (_, val)) in fmt_to_type}

printf_types = [
    'TYPE_SCHAR', 'TYPE_UCHAR', 'TYPE_SHORT', 'TYPE_USHORT',
    'TYPE_INT', 'TYPE_UINT', 'TYPE_LONGINT', 'TYPE_ULONGINT',
    'TYPE_LONGLONGINT', 'TYPE_ULONGLONGINT', 'TYPE_DOUBLE',
    'TYPE_DOUBLE', 'TYPE_CHAR'
]

scanf_types = [
    'TYPE_SCHAR', 'TYPE_UCHAR', 'TYPE_SHORT', 'TYPE_USHORT',
    'TYPE_INT', 'TYPE_UINT', 'TYPE_LONGINT', 'TYPE_ULONGINT',
    'TYPE_LONGLONGINT', 'TYPE_ULONGLONGINT', 'TYPE_FLOAT',
    'TYPE_DOUBLE', 'TYPE_CHAR'
]

printf_sw = make_stdio_sw(p_Arg_type, printf_types, pointerize=False)
printf_sw[p_Arg_type.TYPE_POINTER] = ep_ct.ptr(
    ep_ct.simple_typename(['void']))
printf_sw[p_Arg_type.TYPE_STRING] = ep_ct.ptr(
    ep_ct.simple_typename(['char']))

scanf_sw = make_stdio_sw(s_Arg_type, scanf_types, pointerize=True)
scanf_sw[s_Arg_type.TYPE_POINTER] = ep_ct.ptr(ep_ct.ptr(
    ep_ct.simple_typename(['void'])))
scanf_sw[s_Arg_type.TYPE_STRING] = ep_ct.ptr(
    ep_ct.simple_typename(['char']))
scanf_sw[s_Arg_type.TYPE_CHARSEQ] = scanf_sw[s_Arg_type.TYPE_STRING]

def n32ify_regs(regs):
    '''[str] -> [str]'''
    n32_map = {'$t0' : '$a4', '$t1' : '$a5', '$t2' : '$a6', '$t3' : '$a7'}
    r = enumerate(regs)

    return list(n32_map[reg] if reg in n32_map else regs[i] for (i, reg) in r)

# fix up IDA's register list for N32
reg_list = n32ify_regs(cpu_ida.ida_reg_list())
# offset of beginning of FPR regs in IDA's list
fpr_off = reg_list.index('$f0')
# callee-saved registers
saveregs = frozenset(flatten([
    xrange(16, 24), # $s0..$s7
    xrange(28, 31), # $gp, $sp, $fp
    xrange(fpr_off + 20, fpr_off + 32, 2) # $f20..$f31, evens
]))

# gpr and fpr argument and return registers
arg_regs = list(xrange(4, 12)) # $a0..$a7
fp_arg_regs = list(xrange(fpr_off + 12, fpr_off + 20)) # $f12..$f19
ret_regs = list([2, 3]) # $v0..$v1
fp_ret_regs = list([fpr_off, fpr_off + 2]) # $f0,$f2

# registers that we pass via the ARGS struct
regs_by_reference = frozenset(arg_regs + fp_arg_regs + ret_regs + fp_ret_regs)

def type_to_reg_and_slot(node, chooser, i):
    '''c_ast -> fn -> int -> (reg_type, slot_type) | None'''
    def yield_void():
        # return an empty list for (void) arglists
        raise StopIteration

    def maybe_fail(node):
        if type(node) is c_ast.Struct:
            raise StructByValueError('structs by value not yet supported')
        return type_to_reg_and_slot(node.type, chooser, i)

    def get(names):
        '''[str] -> (gpr|fpr, slot_ty)'''
        if 'void' in names:
            return yield_void()

        ti = ida.parse_decl(' '.join(names))
        (ty, base, slot) = chooser(ti)
        return (ty(base + i), slot)

    sw = {
        c_ast.Decl : lambda x: type_to_reg_and_slot(x.type, chooser, i),
        c_ast.TypeDecl : lambda x: type_to_reg_and_slot(x.type, chooser, i),
        c_ast.Typename : lambda x: type_to_reg_and_slot(x.type, chooser, i),
        c_ast.IdentifierType : lambda x: get(x.names)
    }

    if i > 7:
        raise RegSpillError('spilling registers to stack not yet supported')

    # in order to use chooser we need a tinfo_t--make one suitable for an
    # an int (which is also suitable for a pointer on N32)
    dummy_ti = ida.parse_decl('int')

    (_, base, _) = chooser(dummy_ti)
    node_ty = type(node)

    if node_ty in [c_ast.ArrayDecl, c_ast.PtrDecl]:
        return (regs.gpr(base + i), ep_ct.slot_types.u64)
    elif node_ty is c_ast.Enum:
        return (regs.gpr(base + i), ep_ct.slot_types.i64)
    else:
        return utils.dictswitch(node_ty, sw, node, maybe_fail, node)

def get_info_for_types(nodes, caster, chooser, pos=0, handle_va=False):
    '''[c_ast] -> fn -> fn -> int -> bool ->
    (reg_type, slot_type) | c_ast.EllipsisParam | None'''
    # nodes: a list of Decls from a FuncDecl
    # caster: use this function to produce casts to arg types (see 'castify' in
    #         c.decl)
    # chooser: a function that will determine the register number for a return
    #          value or argument
    # pos: number of a positional argument (0-indexed)
    # handle_va: pass False if making the initial list of function signatures
    #            from; pass True if we want variable arguments to be processed
    return [c_ast.EllipsisParam
            if (handle_va is False and
                type(node) is c_ast.EllipsisParam)
            else
            type_to_reg_and_slot(node, chooser, i) + (caster(node),)
            for (i, node) in enumerate(nodes, pos)]

def va_chooser(gpr_base, _, ti):
    '''int -> int -> tinfo_t -> (type, int, slot_ty)'''
    if ti.is_float():
        slot = ep_ct.slot_types.s
    elif ti.is_double():
        slot = ep_ct.slot_types.d
    else:
        slot = ep_ct.slot_types.u64
    return (regs.gpr, gpr_base, slot)

def pos_chooser(gpr_base, fpr_base, ti):
    '''int -> int -> tinfo_t -> (type, int, slot_ty)'''
    if ti.is_float():
        return (regs.fpr, fpr_base, ep_ct.slot_types.s)
    elif ti.is_double():
        return (regs.fpr, fpr_base, ep_ct.slot_types.d)
    else:
        return (regs.gpr, gpr_base, ep_ct.slot_types.u64)

pos_wrap = partial(pos_chooser, 4, 12)
# varargs of *any* type are passed in $a0..$a7 on N32 (the second argument to
# the partially-applied va_chooser is unused)
va_wrap = partial(va_chooser, 4, 12)

def get_abi_fn_arg_map(node):
    '''c_ast -> fn_sig'''
    # non-fp args are returned in $2..$3, fp-args in $f0,$f2
    # XXX multi-reg returns are not supported, but this is rare
    ret_chooser = partial(pos_chooser, 2, 0)
    caster = lambda x: cdecl.castify(x.type)
    rtype = utils.items_or_default(
        lambda: get_info_for_types([node], caster, ret_chooser)[0],
        None) # if void return type, return None

    args = [x for (_, x) in node.args.children()]
    arg_types = utils.items_or_default(
        lambda: list(get_info_for_types(args, caster, pos_wrap)),
        []) # if function takes no args, return empty list

    return ep_ct.fn_sig(rtype, arg_types)

def get_args_for_va_function(callee, pos_arg):
    '''str -> str -> [(reg_type, slot_type) | None]'''
    def get_convs(acc, va_arg):
        return acc + [sw[va_arg.type]]

    pos_sw = {'printf' : (1, printf_sw, printf_parse, va_wrap),
              'scanf' : (1, scanf_sw, scanf_parse, pos_wrap),
              'sscanf' : (2, scanf_sw, scanf_parse, pos_wrap)}
    try:
        (pos, sw, fn, chooser) = pos_sw[callee]
    except KeyError:
        raise utils.BugError('unrecognized callee %s' % callee)

    (_, args) = fn(pos_arg)
    convs = reduce(get_convs, args.arg, [])

    return list(get_info_for_types(
        convs, lambda x: x, chooser, pos=pos, handle_va=True))
