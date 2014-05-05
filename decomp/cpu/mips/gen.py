from collections import namedtuple
from itertools import chain, izip
import re
from pycparser import c_ast
from decomp import ida, utils
from decomp.c import types as ep_ct
from decomp.cpu import regs
from decomp.cpu.mips import abi, data, insns

next_ea_and_c = namedtuple('next_ea_and_c', ['next_ea', 'c'])

def reg_strip(arg):
    # generally here the "arg" is a register object whose __str__ will be called
    return re.sub(r'^\$', '', str(arg))

def fmt_reg(mnem, arg, slot=None):
    '''str -> int -> reg -> opt:slot_types -> str'''
    if arg == regs.gpr(0):
        return c_ast.Constant('int', '0')
    else:
        insn = insns.insns[mnem]
        stripped = reg_strip(arg)
        # XXX FIXME: we store the register gpr/fpr register number, but
        # regs_by_reference is offsets into IDA's register list
        regnum = arg.reg + (abi.fpr_off if type(arg) is regs.fpr else 0)
        if regnum in abi.regs_by_reference:
            # refer to argument via ARGS->
            r = c_ast.StructRef(c_ast.ID(utils.args_tag), '->',
                                c_ast.ID(stripped))
        else:
            r = c_ast.ID(stripped)

        if slot is not None and slot != ep_ct.slot_types._:
            # use a union slot
            return c_ast.StructRef(r, '.', c_ast.ID(slot.name))
        else:
            return r

def fmt_op(arg, mnem, op=None):
    '''op_ty -> str -> opt:int -> c_ast()'''
    insn = insns.insns[mnem]

    def addrof_or_deref(arg):
        # since addiu cannot touch memory, it must be calculating an address
        if mnem == 'addiu' or (insn.ty == insns.types.usefn and
                               insn.subst == 'memcpy'):
            return c_ast.UnaryOp('&', arg)
        else:
            return arg

    if arg.ty == ida.op_ty.reg:
        try:
            slot = insn.slots[op]
        except IndexError:
            slot = None
        reg = fmt_reg(mnem, arg.val, slot)
        if insn.ty == insns.types.usefn and insn.subst == 'memcpy':
            return c_ast.UnaryOp('&', reg)
        else:
            return reg

    if mnem == 'la':
        # XXX the "name" type is neither suitable for a decompiler nor a
        # braindead static translator such as this one.  i.e., in order to
        # translate to C, we have no choice but to deal with C's type system,
        # because things like "la ptr" should be translated as "reg = ptr", but
        # "la not_ptr" should be translated as "reg = &not_ptr"
        if arg.ty in [ida.op_ty.array, ida.op_ty.ptr]:
            return c_ast.ID(arg.val)
        elif arg.ty == ida.op_ty.name:
            return c_ast.UnaryOp('&', c_ast.ID(arg.val))
        else: # an address
            return c_ast.Constant('int', str(arg.val))
    elif arg.ty == ida.op_ty.array:
        (idx, rem) = ida.item_off(arg.target)
        arr = c_ast.ArrayRef(c_ast.ID(arg.val), c_ast.Constant('int',
                                                               str(idx)))

        return addrof_or_deref(arr)
        # retained in case we ever come across some strange pointer math.  this
        # will generate a nonsense lvalue anyway, so we'd need to handle it some
        # other way
        #left = addrof_or_deref(arr)
        #return c_ast.BinaryOp('+', left, c_ast.Constant('int', str(rem)))
    elif arg.ty == ida.op_ty.ptr:
        # dereferencing of pointers is handled by the "displ" case, so just
        # return an address here too
        (_, rem) = ida.item_off(arg.target)

        return c_ast.ID(arg.val)
        # same as above
        #return c_ast.BinaryOp('+',
        #                      c_ast.ID(arg.val),
        #                      c_ast.Constant('int', str(rem)))
    elif arg.ty == ida.op_ty.name:
        nameval = c_ast.ID(arg.val)
        return addrof_or_deref(nameval)
    elif arg.ty == ida.op_ty.displ:
        r = fmt_reg(mnem, arg.val.reg, ep_ct.slot_types.u32)
        off = c_ast.BinaryOp(
            '+', r, c_ast.Constant('int', str(arg.val.displ)))
        tyns = ['char' if insns.types.usefn and insn.subst == 'memcpy'
                else insn.subst]
        cast = ep_ct.simple_cast(ep_ct.ptr(ep_ct.simple_typename(tyns)), off)

        if insn.ty == insns.types.usefn and insn.subst == 'memcpy':
            return cast
        else:
            return c_ast.UnaryOp('*', cast)
    else:
        return c_ast.Constant('int', str(arg.val))

def do_fbranch(**kw):
    return c_ast.If(c_ast.ID(kw['subst']), ep_ct.do_jump(**kw), None)

def do_fcmp(**kw):
    #if ({rs} {subst} {rt}) fp_cond = 1; else fp_cond = 0
    fragment = ep_ct.do_branch(**kw)
    fragment.iftrue = ep_ct.do_assign(
        rt=c_ast.ID('%sfp_cond' % utils.decomp_tag),
        op=c_ast.Constant('int', '1'))
    fragment.iffalse = ep_ct.do_assign(
        rt=c_ast.ID('%sfp_cond' % utils.decomp_tag),
        op=c_ast.Constant('int', '0'))
    return fragment

def do_slt(**kw):
    #if (({subst}){rs} < ({subst}){rt}) {rd} = 1; else {rd} = 0;
    def cast(which):
        return ep_ct.simple_cast(ep_ct.simple_typename([kw['subst']]),
                                 which)

    def assign(to):
        return ep_ct.do_assign(rt=kw['rd'],
                                op=c_ast.Constant('int', to))

    br = ep_ct.do_branch(subst='<', rs=cast(kw['rs']), rt=cast(kw['rt']))
    br.iftrue = assign('1')
    br.iffalse = assign('0')

    return br

def do_store(**kw):
    #{op} = {rt}
    return ep_ct.do_assign(rt=kw['op'], op=kw['rt'])

def do_lui(**kw):
    #{rt} = {op} << 16
    return ep_ct.do_assign(rt=kw['rt'], op=ep_ct.simple_cast(
        ep_ct.slot_to_typename[kw['result']],
        c_ast.BinaryOp(
            '<<', kw['op'], c_ast.Constant('int', '16'))))

def create_insn_to_c_table(tbl):
    '''{str : mips_insn} -> {str : fun}'''
    insn_tmpls = {
        insns.types.op : ep_ct.do_op,
        insns.types.jump : ep_ct.do_jump,
        insns.types.fbranch : do_fbranch,
        # as branch likely complicates things, "branch" is a partial template
        insns.types.branch : ep_ct.do_branch, #'if ({rs} {subst} {rt})',
        insns.types.fcmp : do_fcmp,
        insns.types.load : ep_ct.do_assign,
        insns.types.store : do_store,
        insns.types.nop : ep_ct.do_nop,
        insns.types.slt : do_slt,
        insns.types.la : ep_ct.do_assign,
        insns.types.li : ep_ct.do_assign,
        insns.types.lui : do_lui
    }

    return {x.insn : insn_tmpls[x.ty] for x in tbl.itervalues()
            if x.ty not in [insns.types.usefn, insns.types.call,
                            insns.types.jr]}

insns_c = create_insn_to_c_table(insns.insns)

def extern_call(callee, sig, mnem, ea):
    '''str -> fn_sig -> str -> ea_t -> c_ast'''
    # generate an ast node for a call to an external function
    def fmt_reg_for_call(reg, slot, node):
        '''reg -> slot_ty -> c_ast -> c_ast'''
        reg_ast = fmt_reg(mnem, reg, slot)
        return ep_ct.simple_cast(node, reg_ast)

    if sig.arg_regs == []:
        fn_args = None
    else:
        if sig.arg_regs[-1] is c_ast.EllipsisParam:
            va_arg = data.get_arg_for_va_function(callee, ea)
            params = (list(utils.init(sig.arg_regs))
                      + abi.get_args_for_va_function(callee, va_arg))
        else:
            params = sig.arg_regs

        fn_args = ep_ct.args_for_call(
            list(fmt_reg_for_call(reg, slot, node)
                 for (reg, slot, node) in params))

    if sig.return_type is None:
        return ep_ct.make_call(callee, args=fn_args)
    else:
        (reg, slot, rtype) = sig.return_type
        ret_reg = fmt_reg(mnem, reg, slot)
        return ep_ct.make_call(callee, ret_reg=ret_reg, args=fn_args,
                               for_extern=rtype)

def do_switch_or_return(ea):
    if ida.is_ret_insn(ea):
        return c_ast.Return(None)
    else: # switch
        try:
            sw = ida.switch_cases(ea)
        except ida.NoSwitchError:
            raise utils.BugError('unhandled jr at ea %s' % ida.atoa(ea))

        default = sw.default
        defexpr = [c_ast.Default([c_ast.Goto(ida.name(default))])]
        cases = list(c_ast.Case(c_ast.Constant('int', str(addr)),
                                [c_ast.Goto(ida.name(loc))])
                     for (addr, loc) in sw.cases.iteritems())
        (mnem, opnd, opn) = data.get_swval(ea)
        swval = fmt_op(opnd, mnem, opn)
        return c_ast.Switch(swval,
                            c_ast.Compound(
                                cases + defexpr))

def get_formatter(mnem):
    '''str -> fn'''
    try:
        return insns_c[mnem]
    except KeyError:
        raise utils.BugError("%s: couldn't find formatter" % mnem)

def make_args_for_formatter(insn, vals):
    '''mips_insn -> <dyn> -> [<dyn>]'''
    # takes list of values from fmt_op for the formatter's consumption
    def simple_2op(insn, opvals):
        # cast the rvalue to the lvalue's type to avoid a warning for la
        # XXX do lw too?
        #
        # XXX we should also handle sw here, but op_ty doesn't carry enough
        # information to be able to do this.  see decomp.ida for why op_ty
        # sucks.  we need to be able to cast to the type of the lvalue, but
        # op_ty's knowledge of types isn't expressive enough
        op = (ep_ct.cast_to_dest_reg(insn, opvals[1])
              if insn.insn == 'la'
              else opvals[1])
        return dict(izip(['result', 'rt', 'op'],
                         [insn.result, opvals[0], op]))

    def subst_rs_rt(insn, opvals):
        rt = (c_ast.Constant('int', '0')
              if insns.subtypes.zero in insn.subty # for beqz, bgez, etc.
              else opvals[1])
        return dict(izip(['subst', 'rs', 'rt'],
                         [insn.subst, opvals[0], rt]))

    subst_3op = lambda insn, opvals: dict(
        izip(['subst', 'result', 'rd', 'rs', 'rt'],
             [insn.subst, insn.result] + opvals))
    sw = {
        insns.types.op : subst_3op,
        insns.types.jump : lambda insn, opvals: dict(
            izip(['loc'], opvals)),
        insns.types.fbranch : lambda insn, opvals: dict(
            izip(['subst', 'loc'],
                 [insn.subst] + opvals)),
        insns.types.branch : subst_rs_rt,
        insns.types.fcmp : subst_rs_rt,
        insns.types.load : simple_2op,
        insns.types.store : simple_2op,
        insns.types.slt : subst_3op,
        insns.types.la : simple_2op,
        insns.types.li : simple_2op,
        insns.types.lui : simple_2op,
        insns.types.call : lambda insn, opvals: dict(
            izip(['rs'], opvals))
    }
    try:
        return sw[insn.ty](insn, vals)
    except KeyError:
        return {}

def fmt_insn(ea, our_fns, extern_reg_map, stkvars, from_delay):
    '''ea_t -> frozenset(str) -> {str : reg_sig} -> {int : c_ast()} ->
    (ea_t, str)'''
    # XXX this function is too long and its interaction with the formatter steps
    # is not very clear
    # NOTE mutation in a few places
    #
    # we cannot rely simply on IDA's disassembly when generating C.  e.g.:
    #
    # .text:100052F4                 lwc1    $f12, (square - 0x10008E50)($s1)
    #
    # THIS means f12 = square[0] (square is declared as an array).  but...
    #
    # .text:100041A4                 lw      $a1, (seqList - 0x1000BF78)($a1)
    #
    # THIS means a1 = seqList--NOT *seqList or seqList[0].  GetOperand and
    # similar functions are thus useless for our purposes.  unfortunately, we
    # have no choice but to handle C's type system in order to emit C from
    # disassembly.  we don't COMPLETELY handle it (patches welcome!!!1), but we
    # do achieve enough that with minor database annotations we have a POC in
    # our chosen target.
    def labelize(ea, stmt):
        if from_delay is False:
            label = ida.name(ea)
            if label != '':
                return c_ast.Label(label, stmt)
            else:
                return stmt
        else:
            return stmt

    fn = ida.get_func(ea)
    fn_name = ida.get_func_name(ea)
    fn_end = fn.endEA
    mnem = ida.get_mnem(ea)
    insn = insns.insns[mnem]
    is_delayed = mnem in insns.delayed
    delay_ea = ida.next_head(ea, fn_end)
    next_ea = (delay_ea
               if is_delayed is False
               else ida.next_head(delay_ea, fn_end))

    if ida.is_switch_insn(ea) is True:
        # don't emit stmts that IDA marks as being part of a switch idiom
        #
        # pass delay_ea as the next ea to check, because we may have a case in
        # which a non-switch insn follows a delayed switch insn
        return next_ea_and_c(delay_ea, [labelize(ea, c_ast.EmptyStatement())])

    opvals = ida.get_opvals(ea, stkvars)

    # addiu has many forms, some of which require transformation into
    # two-operand statements, others which need to be kept as three-operand
    # statements, so we have to handle it here, not fmt_op
    #
    # we can elide a previous modification to that register within a basic
    # block if it has no uses between a modification and the addiu, though we
    # don't yet do this
    if mnem == 'addiu' and opvals[-1].ty != ida.op_ty.value:
        # handles cases where addiu is effectively an assignment (e.g. when
        # used for address calculation)

        # first op is always a register
        reg = fmt_op(opvals[0], mnem, 0)
        # any non-number as the final operand should be handled according to
        # fmt_op's usual rules
        arg = fmt_op(opvals[-1], mnem)
        assign = labelize(
            ea,
            ep_ct.do_assign(rt=reg, op=ep_ct.cast_to_dest_reg(insn, arg)))
        return next_ea_and_c(next_ea, [assign])

    if mnem == 'trunc.w.d':
        # emulate trunc.w.d with our function
        vals = [fmt_reg(mnem, opvals[0].val, insn.result),
                fmt_reg(mnem, opvals[1].val, insn.slots[0])]
        return next_ea_and_c(
            next_ea,
            [labelize(
                ea,
                ep_ct.make_call(insn.subst, ret_reg=vals[0],
                                args=ep_ct.args_for_call([vals[1]])))])
    elif mnem in ['jalr', 'jr']:
        # jalr and jr need special handling
        vals = []
    else:
        vals = list(fmt_op(x, mnem, op) for (op, x) in enumerate(opvals))

    if insn.ty == insns.types.usefn:
        if insn.subst == 'memcpy':
            # this should be redesigned to not use memcpy just to make the
            # generated code a little nicer, but the complexity hasn't been
            # worth it.  the issue is: the fact that [ls][dw]c1 move data
            # between the fpu and memory is no guarantee that the data held in
            # an fpu register is actually a float or a double, which complicates
            # the logic a little bit.  fortunately, we can just use memcpy
            # instead, and modern compilers will inline it so that it's
            # equivalent to a load/store for small sizes.
            if mnem in ['ldc1', 'sdc1']:
                size = 8
            elif mnem in ['lwc1', 'swc1']:
                size = 4
            else:
                raise utils.BugError('unhandled usefn insn %s' % mnem)

            # need to swap the order of arguments for a store, since loads and
            # stores are written in the same direction, but they aren't in C!
            args = list(reversed(vals) if mnem.startswith('s') else vals)
            return next_ea_and_c(
                next_ea,
                [labelize(
                    ea,
                    ep_ct.make_call(
                        insn.subst, args=ep_ct.args_for_call(
                            [args[0],
                             args[1],
                             c_ast.Constant('int', str(size))])))])
        else:
            raise utils.BugError('unhandled usefn instruction %s' % mnem)
    else:
        args = make_args_for_formatter(insn, vals)

    if is_delayed is True:
        # format our delayed instruction before processing this instruction--but
        # see below for an important note about the case of branch likely
        (_, delay_slot) = fmt_insn(delay_ea, our_fns, extern_reg_map, stkvars,
                                   from_delay=True)
        # branch target
        loc = opvals[-1].val

        if mnem == 'jr':
            delayed = do_switch_or_return(ea)
        elif insn.ty == insns.types.call:
            callee = data.get_callee(ea, mnem, args)

            if callee in our_fns:
                delayed = ep_ct.internal_call(callee)
            else: # external function call
                try:
                    sig = extern_reg_map[callee]
                except KeyError:
                    # XXX we should really modify pycparser to allow insertion
                    # of comments, as it would make the emitted codemuch easier
                    # to follow.  just alert the user that we couldn't make some
                    # calls for now
                    print ('/* %s: no regmap info, emitting empty stmt at %s */'
                           % (callee, ida.atoa(ea)))
                    delayed = ep_ct.do_nop()
                else:
                    delayed = extern_call(callee, sig, mnem, ea)
        else: # some other sort of delayed insn
            delayed = get_formatter(mnem)(**args)

        goto = c_ast.Goto(loc)
        if insns.subtypes.likely in insn.subty:
            # for branch likely, the delay slot is NOT executed if the branch is
            # not taken
            delayed.iftrue = c_ast.Compound(delay_slot +
                                            [goto,
                                             labelize(delay_ea, delay_slot[0])])
            ret = labelize(ea, delayed)
        else:
            if insn.ty in [insns.types.branch, insns.types.fbranch]:
                delayed.iftrue = c_ast.Compound(delay_slot + [goto])
                delayed.iffalse = labelize(delay_ea, delay_slot[0])
                ret = labelize(ea, delayed)
            else:
                ret = labelize(ea,
                               c_ast.Compound([labelize(delay_ea, delay_slot[0]),
                                               delayed]))
        return next_ea_and_c(next_ea, [ret])

    return next_ea_and_c(next_ea, [labelize(ea, get_formatter(mnem)(**args))])
