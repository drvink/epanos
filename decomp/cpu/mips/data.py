import ctypes
from decomp import ida, utils
from decomp.cpu import regs
from decomp.cpu.mips import abi, insns

class SwitchTroubleError(Exception): pass
class UnsupportedInstructionError(Exception): pass
class FunctionPointerError(Exception): pass
class VarargsError(Exception): pass

def immval(arg):
    '''int -> int'''
    return ctypes.c_int16(arg & 0xffff).value

def interpret_li_arg(arg):
    # XXX IDA's li simplification is not so good for printing in C, e.g.:
    #
    #   addiu $t0, $zero, -1
    #
    # becomes li $t0, 0xFFFFFFFF -- this will cause trouble with promotions.
    # need to report this
    return ctypes.c_int32(arg).value

def get_op_addrmode(ea, op, cmd):
    '''ea_t -> int -> insn_t -> op_ret'''
    # the ida module calls back into this module to deal with some MIPS-specific
    # operand handling here
    mnem = ida.get_mnem(ea)
    op = ida.mips_op_hack(cmd, op)

    if cmd[op].type == ida.o_imm:
        val = cmd[op].value
    elif cmd[op].type == ida.o_displ:
        val = cmd[op].addr
    else:
        raise utils.BugError('neither imm nor displ passed to get_op_addrmode')

    if mnem in insns.has_special_opnd:
        target = val
        return ida.resolve_opnd(target, val)
    # addiu is often used for address calculation, which IDA will resolve to a
    # name, so handle addiu's immval only if we fail to resolve it later
    elif mnem != 'addiu' and mnem in insns.has_imm:
        return ida.op_ret(ida.op_ty.value, immval(val), 0)
    else:
        target = ida.calc_target(ea, ea, op, immval(val))
        if target == ida.BADADDR and cmd[op].type == ida.o_displ:
            reg = cmd[op].reg
            if reg >= 0 and reg <= 31:
                reg = regs.gpr(reg)
            elif reg >= 32 and reg <= 63:
                reg = regs.fpr(reg)
            else:
                raise utils.BugError('bogus register %u' % reg)
            return ida.op_ret(ida.op_ty.displ,
                              ida.displ(reg=reg,
                                        displ=immval(val)),
                              0)
        else:
            opnd = ida.resolve_opnd(target, val)
            if mnem == 'addiu' and opnd.ty == ida.op_ty.value:
                # addiu is being used for regular addition; handle its third
                # operand as an immediate value
                return ida.op_ret(ida.op_ty.value, immval(opnd.val), 0)
            else:
                return opnd

def get_arg_for_va_function(callee, start_ea):
    '''str -> ea_t -> str'''
    # XXX hacky; not a very general function
    # XXX imperative
    # get a relevant item needed for processing a variadic function
    sw = {
        'printf' : regs.gpr(abi.arg_regs[0]),
        'scanf' : regs.gpr(abi.arg_regs[0]),
        'sscanf' : regs.gpr(abi.arg_regs[1])
    }
    try:
        wanted_reg = sw[callee]
    except KeyError:
        raise utils.BugError('unrecognized callee %s' % callee)

    distance = 0
    fn = ida.get_func(start_ea)
    # first, look at the delay slot
    ea = ida.next_head(start_ea, fn.endEA)

    while True:
        if distance > 10:
            raise VarargsError(
                'gave up looking for needed varargs argument for %s between ' +
                '%s..%s' % (ida.atoa(ea), ida.atoa(start_ea)))

        if ea == start_ea:
            ea = ida.prev_head(ea)
            continue # skip the call insn
        elif list(ida.code_refs_from(ea, 0)) != []:
            raise VarargsError(
                'encountered branch/jump while looking for varargs argument ' +
                'between %s..%s' % (ida.atoa(ea), ida.atoa(start_ea)))

        rd = ida.get_op(ea, 0)
        if rd.val == wanted_reg:
            opvals = ida.get_opvals(ea) # XXX should try to track stkvar values
            s = ida.get_string(opvals[-1].target)
            if s is not None:
                return s

        ea = ida.prev_head(ea)
        distance += 1

def get_swval(start_ea):
    '''ea_t -> (str, op_ty, int)'''
    # XXX imperative
    ida.get_switch_info(start_ea) # confirm this insn has switch info

    distance = 0
    ea = ida.prev_head(start_ea)

    while True:
        if distance > 10:
            raise SwitchTroubleError(
                'gave up looking for switch value between %s..%s'
                % (ida.atoa(ea), ida.atoa(start_ea)))

        if ida.is_switch_insn(ea):
            mnem = ida.get_mnem(ea)
            # dunno if there are other common switch idioms
            if mnem == 'sltiu':
                return (mnem, ida.get_op(ea, 1), 1)
        elif list(ida.code_refs_from(ea, 0)) != []:
            raise SwitchTroubleError(
                'encountered branch/jump while looking for switch value ' +
                'between %s..%s' % (ida.atoa(ea), ida.atoa(start_ea)))

        ea = ida.prev_head(ea)
        distance += 1

def get_callee(ea, mnem, args):
    '''ea_t -> str -> formatter_args -> str'''
    # XXX we don't handle function pointers yet, but it should be easy now that
    # we handle all internal functions as having the same signature...i think
    if mnem == 'jalr':
        nn = ida.netnode('$ mips')
        fun = nn.altval(ea) - 1
        if fun == -1:
            raise FunctionPointerError(
                'unknown target for function pointer at %s'
                % ida.atoa(ea))
        return ida.name(fun)
    elif mnem == 'jal':
        return args['rs'].name
    else:
        raise utils.BugError('unhandled call insn: %s' % mnem)
