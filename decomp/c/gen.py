from itertools import imap, chain
from pycparser import c_generator, c_ast
from decomp import data, ida
from decomp.c import decl as cdecl, types as ep_ct
from decomp.cpu import ida as cpu_ida

XXX_INTRO_HACK = cpu_ida.ida_current_cpu().insns.support_header + '''
#include <stdint.h>
typedef union EPANOS_REG {
    uint8_t u8;
    int32_t i32;
    uint32_t u32;
    int64_t i64;
    uint64_t u64;
    float s;
    double d;
} EPANOS_REG;

typedef struct EPANOS_ARGS {
    EPANOS_REG v0;
    EPANOS_REG v1;
    EPANOS_REG a0;
    EPANOS_REG a1;
    EPANOS_REG a2;
    EPANOS_REG a3;
    EPANOS_REG a4;
    EPANOS_REG a5;
    EPANOS_REG a6;
    EPANOS_REG a7;
    EPANOS_REG f0;
    EPANOS_REG f2;
    EPANOS_REG f12;
    EPANOS_REG f13;
    EPANOS_REG f14;
    EPANOS_REG f15;
    EPANOS_REG f16;
    EPANOS_REG f17;
    EPANOS_REG f18;
    EPANOS_REG f19;
} EPANOS_ARGS;
'''

gen_from_node = c_generator.CGenerator().visit
flatten = chain.from_iterable

def c_for_insn(ea, our_fns, extern_reg_map, stkvars):
    while True:
        (ea, c) = cpu_ida.ida_current_cpu().gen.fmt_insn(
            ea, our_fns, extern_reg_map, stkvars, from_delay=False)
        yield c
        if ea == ida.BADADDR:
            break

def generate(ea, decl, our_fns, extern_reg_map, stkvar_map, stkvar_decls):
    '''ea_t -> c_ast() -> frozenset(str) -> {str : reg_sig} ->
    {str : {int : tinfo_t}} {str : [c_ast]} -> c_ast'''
    try:
        stkvars = stkvar_map[decl.name]
        var_decls = stkvar_decls[decl.name]
    except KeyError:
        stkvars = {}
        var_decls = []

    start_ea = ida.get_func(ea).startEA
    body = [XXX_STACKVAR_HACK()] + [var_decls] + [x for x in
        c_for_insn(start_ea, our_fns, extern_reg_map, stkvars)]
    funcdef = c_ast.FuncDef(decl, None, c_ast.Compound(flatten(body)))

    return funcdef

def XXX_STACKVAR_HACK():
    # XXX FIXME this will be going away once we've added elision of unnecessary
    # stack variables (probably will just stick declarations into the AST)
    regs = list(
        c_ast.Decl(
            x, [], [], [],
            c_ast.TypeDecl(
                x, [],
                c_ast.IdentifierType(
                    ['EPANOS_REG'])),
            None, None)
        for x in
        list('t%s' % str(n) for n in range(4, 8))
        + list('s%s' % str(n) for n in range(0, 8))
        + ['at', 't8', 't9', 'gp', 'sp', 'ra', 'fp', 'f1']
        + list('f%s' % str(n) for n in range(3, 12))
        + list('f%s' % str(n) for n in range(20, 32)))
    regs += [
        c_ast.Decl(
            'EPANOS_fp_cond', [], [], [],
            c_ast.TypeDecl(
                'EPANOS_fp_cond', [],
                c_ast.IdentifierType(
                    ['int'])),
            None, None)]
    return regs

def run(externs, our_fns, cpp_filter, cpp_all, decompile=True):
    '''frozenset(str) -> frozenset(str) -> str -> str -> opt:bool -> [c_ast]'''
    global OUR_FNS, EXTERN_REG_MAP, STKVAR_MAP # for repl convenience
    OUR_FNS = our_fns

    fn_segs = data.get_segs(['extern', '.text'])
    rodata_segs = data.get_segs(['.rodata', '.srdata'])
    data_segs = data.get_segs(['.data', '.bss'])
    lit_segs = data.get_segs(['.lit4', '.lit8'])

    num_lits = data.get_num_literals(lit_segs)
    str_lits = data.get_str_literals(rodata_segs)
    data_txt = data.get_data(data_segs, cpp_filter)

    # XXX FIXME this will be going away once we've added emitting numeric and
    # string constants directly at their site of use
    if decompile is True:
        for (k, v) in num_lits.iteritems():
            ty = type(v)
            if ty is ep_ct.cfloat:
                print 'float %s = %s;' % (k, v)
            elif ty is ep_ct.cdouble:
                print 'double %s = %s;' % (k, v)
            else:
                raise Exception('o no')
        for (k, v) in str_lits.iteritems():
            print 'const char *%s = %s;' % (k, data.c_stringify(v))

    protos = map(cdecl.make_internal_fn_decl, our_fns)

    (lib_fns, tds) = data.get_fns_and_types(fn_segs, externs, cpp_all)
    all_tds = {x.name : x for x in tds}
    typedefs = cdecl.resolve_typedefs(all_tds)
    EXTERN_REG_MAP = data.get_fn_arg_map(lib_fns, typedefs)
    STKVAR_MAP = data.get_stkvars(our_fns)
    stkvar_decls = data.make_stkvar_txt(our_fns, STKVAR_MAP, cpp_filter)

    if decompile is True:
        print XXX_INTRO_HACK
        return gen_from_node(c_ast.FileAST(
            data_txt +
            protos +
            list(generate(ida.loc_by_name(decl.name), decl, our_fns,
                          EXTERN_REG_MAP, STKVAR_MAP, stkvar_decls)
                 for decl in protos)))
    else:
        return

def repl_make_insn(ea, from_delay):
    # for testing: print the C that will be generated from a line of assembly.
    # note that if you ask for the ea of an insn in a delay slot, you get only
    # that instruction; if you ask for a delayed instruction, you get both
    try:
        stkvars = STKVAR_MAP[ida.get_func_name(ea)]
    except KeyError:
        stkvars = {}

    return list(gen_from_node(x) for x in
                cpu_ida.ida_current_cpu().gen.fmt_insn(
                    ea, OUR_FNS, EXTERN_REG_MAP, stkvars, from_delay).c)
