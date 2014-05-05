from collections import namedtuple
import itertools, re, sys
from flufl.enum import Enum

try:
    import idaapi, idautils, idc
except ImportError:
    pass
else:
    from idaapi import (get_func,
                        o_imm,
                        o_displ,
                        BADADDR,
                        get_func_name,
                        is_ret_insn,
                        netnode,
                        is_ret_insn,
                        next_head,
                        tinfo_t,
                        parse_decl2,
                        cvar,
                        array_type_data_t,
                        can_be_off32)
    from idautils import (DataRefsTo as data_refs_to,
                          DecodeInstruction as decode_instruction,
                          Heads as heads,
                          CodeRefsFrom as code_refs_from)
    from idc import (Name as name,
                     SegByBase as seg_by_base,
                     GetType as get_type,
                     SegName as seg_name,
                     Byte as byte,
                     Word as word,
                     Dword as dword,
                     Qword as qword,
                     GetFloat as get_float,
                     GetDouble as get_double,
                     GetString as get_string,
                     GuessType as guess_type,
                     ItemEnd as item_end,
                     ItemHead as item_head,
                     LocByName as loc_by_name,
                     PrevHead as prev_head,
                     atoa,
                     SegByName as seg_by_name)

from decomp import utils
from decomp.c import decl as cdecl
from decomp.cpu import ida as cpu_ida, regs

class OperandUnresolvableError(Exception): pass
class NoSwitchError(Exception): pass
class NoInsnError(Exception): pass
class ParseDeclError(Exception): pass
class NotArrayError(Exception): pass

###
### Functions for dealing with data from IDA
###

flatten = itertools.chain.from_iterable

sw_cases = namedtuple('sw_cases', ['default', 'cases'])

discardable = namedtuple('discardable', ['addr'])
displ = namedtuple('displ', ['reg', 'displ'])
op_ret = namedtuple('op_ret', ['ty', 'val', 'target'])
# XXX name types are awful!  see fmt_op in decomp.cpu.mips.gen for more info.
# actually, op_ty is a bug too; we should just be using IDA's tinfo_t as it
# carries much more information.
op_ty = Enum('op_ty', ['displ', 'value', 'name', 'reg', 'ptr', 'array', 'func'])

def size_of(ti):
    '''tinfo_t -> int'''
    if ti.is_ptr():
        ptr_ti = parse_decl('void *')
        size = ptr_ti.get_size()
        return size
    else:
        return ti.get_size()

def print_tinfo(name, ti):
    '''str -> tinfo_t -> str'''
    return idaapi.print_tinfo('', 0, 0, idaapi.PRTYPE_1LINE | idaapi.PRTYPE_SEMI,
                              ti, name, '')

def print_type2(ea):
    '''ea_t -> str'''
    return idaapi.print_type2(ea, idaapi.PRTYPE_1LINE | idaapi.PRTYPE_SEMI)

def parse_decl(arg):
    '''str -> tinfo_t'''
    ti = idaapi.tinfo_t()
    success = idaapi.parse_decl2(idaapi.cvar.idati, arg + ';', '', ti, 0)
    if success is False:
        raise ParseDeclError("%s: couldn't parse type" % arg)
    return ti

def ea_list_from_segs(segs):
    '''[str] -> [(str, ea_t)]'''
    name_addr = [(idc.Name(addr), addr) for addr in
                 flatten((idautils.Heads(addr, idc.SegEnd(addr)))
                         for (_, addr) in segs)]

    return list(x for x in name_addr if x[0] != '')

def get_or_guess_tinfo(ea):
    '''ea_t -> tinfo_t'''
    # XXX mutates (blah_tinfo2, unavoidable)
    ti = idaapi.tinfo_t()
    idaapi.get_tinfo2(ea, ti) or idaapi.guess_tinfo2(ea, ti)

    return ti

def name_of_head(ea):
    '''ea -> str'''
    return idc.Name(idc.ItemHead(ea))

def mips_op_hack(cmd, op):
    '''insn_t -> int'''
    # see note for get_operands
    if cpu_ida.ida_current_cpu_name() == 'mips':
        mnem = get_mnem(cmd.ea)
        if (len(cpu_ida.ida_current_cpu().insns.insns[mnem].opfs) !=
            len(ida_operands(cmd))):
            if op > 0:
                return op - 1
            else:
                return op
        else:
            return op
    else:
        return op

def ida_operands(cmd):
    '''insn_t -> [op_t]'''
    return list(x for x in cmd.Operands if x.type != idaapi.o_void)

def get_operands(cmd):
    '''insn_t -> [op_t]'''
    opnds = ida_operands(cmd)

    if cpu_ida.ida_current_cpu_name() == 'mips':
        # IDA returns "simplified" instructions with only two operands when the
        # first and second operands are the same register, but this forces you
        # to handle multiple formats for a single instruction, so here we
        # transform them into their canonical form
        mnem = get_mnem(cmd.ea)

        if len(cpu_ida.ida_current_cpu().insns.insns[mnem].opfs) != len(opnds):
            return [opnds[0], opnds[0], opnds[1]]
        else:
            return opnds
    else:
        return opnds

def get_stkvar_map(ea):
    '''ea_t -> {int : (str, tinfo_t)}'''
    # NOTE mutates d
    frame = idaapi.get_frame(ea)

    def make_map(d, (off, name, _)):
        mem = idaapi.get_member(frame, off)
        ti = idaapi.tinfo_t()
        idaapi.get_or_guess_member_tinfo2(mem, ti)
        d[off] = (name, ti)
        return d

    return reduce(make_map, idautils.StructMembers(frame.id), {})

def get_mnem(ea):
    '''ea -> str'''
    mnem = re.search(r'^([a-zA-Z0-9.]+)', idc.GetDisasm(ea))
    if mnem is None:
        raise NoInsnError("can't get insn at %s" % ida.atoa(ea))
    else:
        return mnem.groups()[0]

def array_details(ti):
    if ti.is_array() is False:
        raise NotArrayError('ti is not an array')
    ai = idaapi.array_type_data_t()
    ti.get_array_details(ai)
    return ai

def array_elem_size(ti):
    '''tinfo_t -> int'''
    ai = array_details(ti)
    size = ai.elem_type.get_size()
    return size

def item_off(ea):
    '''ea_t -> (int, int)'''
    head = idc.ItemHead(ea)
    end = idc.ItemEnd(head)
    ti = get_or_guess_tinfo(head)
    try:
        size = array_elem_size(ti)
    except NotArrayError:
        size = ti.get_size()
    diff = ea - head
    idx = diff / size
    rem = diff % size

    return (idx, rem)

def op_ret_for_ti(ti, name, target, val):
    '''tinfo_t -> str -> int -> int -> op_ret'''
    if ti.is_array():
        return op_ret(op_ty.array, name, target)
    elif ti.is_ptr():
        return op_ret(op_ty.ptr, name, target)
    elif ti.is_func():
        return op_ret(op_ty.func, name, target)
    elif name != '': # XXX name types are a misfeature, see mips/gen.py
        return op_ret(op_ty.name, name, target)
    else:
        if cpu_ida.ida_current_cpu_name() == 'mips':
            return op_ret(op_ty.value,
                          cpu_ida.ida_current_cpu().data.interpret_li_arg(val),
                          0)
        else:
            return op_ret(op_ty.value, val, 0)

def resolve_opnd(target, val):
    '''ea_t -> str | int -> op_ret''' # XXX probably wrong
    head = idc.ItemHead(target)
    name = idc.Name(head)
    ti = get_or_guess_tinfo(head)
    return op_ret_for_ti(ti, name, target, val)

def get_op(ea, op, stkvars=None):
    '''ea_t -> int -> opt:{int : tinfo_t} -> op_ret'''
    cmd = idautils.DecodeInstruction(ea)
    cmd.Operands = get_operands(cmd) # for mips_op_hack
    op = mips_op_hack(cmd, op)
    opd = cmd[op]

    if opd.type == idaapi.o_reg: # gpr, XXX sorta MIPS-specific
        return op_ret(op_ty.reg, regs.gpr(opd.reg), 0)
    elif opd.type == idaapi.o_idpspec1: # fpr, XXX sorta MIPS-specific
        return op_ret(op_ty.reg, regs.fpr(opd.reg), 0)
    elif opd.type in [idaapi.o_near, idaapi.o_mem]:
        return op_ret(op_ty.name, idc.Name(opd.addr), 0)
    elif idc.isStkvar1(idc.GetFlags(ea)):
        # IDA seems to set this flag even for operands beyond the second,
        # i.e. both of these are true for isStkvar1:
        # .text:10003A84                 sd      $a1, 0x2E0+var_58($sp)
        # .text:10003A68                 addiu   $a1, $sp, 0x2E0+var_2D8
        try:
            func = idaapi.get_func(ea)
            off = idaapi.calc_stkvar_struc_offset(func, ea, op)
            (name, ti) = stkvars[off]

            return op_ret_for_ti(ti, name, off, off)
        except KeyError:
            raise OperandUnresolvableError(
                'unable to get operand %u at %s' % (op, idc.atoa(ea)))
    elif opd.type in [idaapi.o_imm, idaapi.o_displ]:
        return cpu_ida.ida_current_cpu().data.get_op_addrmode(ea, op, cmd)
    else:
        raise OperandUnresolvableError(
            'unable to get operand %u at %s' % (op, idc.atoa(ea)))

def calc_target(from_, ea, n, opval):
    '''ea_t -> ea_t -> int -> int -> ea_t'''
    return idaapi.calc_target(
        from_, ea, mips_op_hack(idautils.DecodeInstruction(ea), n), opval)

def get_switch_info(ea):
    '''ea_t -> switch_info_ex_t'''
    sw = idaapi.get_switch_info_ex(ea)
    if sw is None:
        raise NoSwitchError('ea at %s has no switch info' % atoa(ea))
    else:
        return sw

def switch_cases(ea):
    '''ea_t -> {int : ea_t}'''
    # NOTE mutates d
    sw = get_switch_info(ea)
    ct = idaapi.calc_switch_cases(ea, sw)

    def make_cases(d, (case, target)):
        # this is lame, but the only way IDA marks the default case other than
        # by adding a comment like "jumptable ADDR default case"
        if idc.Name(target).startswith('def_'):
            d['default'] = target
        else:
            d['cases'][case] = target
        return d

    cases = reduce(make_cases,
                   ((ct.cases[idx][cidx], ct.targets[idx])
                    for idx in xrange(len(ct.cases))
                    for cidx in xrange(len(ct.cases[idx]))),
                   {'cases' : {}})
    return sw_cases(cases['default'], cases['cases'])

def is_switch_insn(ea):
    '''ea_t -> bool'''
    IM_SWITCH = 3 # IDA doesn't export this to python; hope it doesn't change!
    nn = idaapi.netnode('$ ignore micro')
    return nn.charval(ea, 0) == IM_SWITCH

def get_opvals(ea, stkvars=None):
    '''ea_t -> stkvar_dict -> [op_ret]'''
    cmd = decode_instruction(ea)
    return list(get_op(ea, n, stkvars) for (n, _) in
                enumerate(get_operands(cmd)))
