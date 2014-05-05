import re
from collections import namedtuple
from flufl.enum import Enum
from decomp import utils
from decomp.c import types as ep_ct

## Instruction format table
# XXX the fp rounding mode is currently NOT tracked!  if the rounding mode is
# changed in the program, the emitted code will NOT be accurate to the original!
#
# commas delimit fields, non-leading spaces delimit arguments, _ is n/a or none
#
# insn: mnemonic
# union slot: union field to use for each operand
# opfs: controls handling of operand (see mips.gen)
# insn types: controls handling of insn (see mips.gen)
# subst: an argument for the function that handles this insn
# result: cast rvalue to this or use this slot for lvalue
#
#insn       opslots      opfs          type      subtypes      subst       result
insn_fmts='''
add.d,      d d d,       fpr fpr fpr,  op,       _,            +,          _
add.s,      s s s,       fpr fpr fpr,  op,       _,            +,          _
addiu,      u64 u32 _,   gpr gpr imm,  op,       _,            +,          i32
addu,       u64 u32 u32, gpr gpr gpr,  op,       _,            +,          i32
andi,       u64 u64 _,   gpr gpr imm,  op,       zimm,         &,          _
b,          _,           loc,          jump,     _,            _,          _
bc1f,       _,           loc,          fbranch,  _,            !%sfp_cond, _
bc1t,       _,           loc,          fbranch,  _,            %sfp_cond,  _
beq,        u64 u64 _,   gpr gpr loc,  branch,   _,            ==,         _
beqz,       u64 _,       gpr loc,      branch,   zero,         ==,         _
bgez,       i64 _,       gpr loc,      branch,   zero,         >=,         _
blez,       i64 _,       gpr loc,      branch,   zero,         <=,         _
bne,        u64 u64 _,   gpr gpr loc,  branch,   _,            !=,         _
bnez,       u64 _,       gpr loc,      branch,   zero,         !=,         _
bnezl,      u64 _,       gpr loc,      branch,   zero likely,  !=,         _
c.eq.s,     s s,         fpr fpr,      fcmp,     _,            ==,         _
c.le.d,     d d,         fpr fpr,      fcmp,     _,            <=,         _
c.le.s,     s s,         fpr fpr,      fcmp,     _,            <=,         _
c.lt.d,     d d,         fpr fpr,      fcmp,     _,            <,          _
c.lt.s,     s s,         fpr fpr,      fcmp,     _,            <,          _
cvt.d.s,    d s,         fpr fpr,      load,     _,            _,          _
cvt.s.d,    s d,         fpr fpr,      load,     _,            _,          _
cvt.s.w,    s i32,       fpr fpr,      load,     _,            _,          _
div.d,      d d d,       fpr fpr fpr,  op,       _,            /,          _
div.s,      s s s,       fpr fpr fpr,  op,       _,            /,          _
dmfc1,      u64 u64,     gpr fpr,      load,     _,            _,          _
dmtc1,      u64 u64,     gpr fpr,      store,    _,            _,          _
jal,        _,           loc,          call,     _,            _,          _
jalr,       _,           gpr,          call,     _,            _,          _
jr,         _,           gpr,          jr,       _,            _,          _
la,         u64 _,       gpr spec,     la,       _,            _,          _
lbu,        u64 _,       gpr addr,     load,     _,            int8_t,     _
ld,         u64 _,       gpr addr,     load,     _,            uint64_t,   _
ldc1,       _,           addr addr,    usefn,    _,            memcpy,     _
li,         u64 _,       gpr spec,     li,       _,            _,          _
lui,        u64 _,       gpr spec,     lui,      _,            _,          i32
lw,         u64 _,       gpr addr,     load,     _,            int32_t,    _
lwc1,       _,           addr addr,    usefn,    _,            memcpy,     _
mov.d,      d d,         fpr fpr,      load,     _,            _,          _
mov.s,      s s,         fpr fpr,      load,     _,            _,          _
move,       u64 u64,     gpr gpr,      load,     _,            _,          _
mtc1,       u32 u32,     gpr fpr,      store,    _,            _,          _
mul.d,      d d d,       fpr fpr fpr,  op,       _,            *,          _
mul.s,      s s s,       fpr fpr fpr,  op,       _,            *,          _
nop,        _,           _,            nop,      _,            _,          _
sb,         u8 _,        gpr addr,     store,    _,            uint8_t,    _
sd,         u64 _,       gpr addr,     store,    _,            uint64_t,   _
sdc1,       _,           addr addr,    usefn,    _,            memcpy,     _
sll,        u64 u32 _,   gpr gpr spec, op,       _,            <<,         i32
slt,        u64 i64 i64, gpr gpr gpr,  slt,      _,            signed,     _
slti,       u64 i64 _,   gpr gpr imm,  slt,      _,            signed,     _
sltiu,      u64 u64 _,   gpr gpr imm,  slt,      _,            unsigned,   _
sra,        u64 i32 _,   gpr gpr spec, op,       _,            >>,         i32
sub.s,      s s s,       fpr fpr fpr,  op,       _,            -,          _
subu,       u64 u32 u32, gpr gpr gpr,  op,       _,            -,          i32
sw,         u32 _,       gpr addr,     store,    _,            uint32_t,   _
swc1,       _,           addr addr,    usefn,    _,            memcpy,     _
trunc.w.d,  d,           fpr fpr,      usefn,    _,            trunc_w_d,  i32
xor,        u64 u64 u64, gpr gpr gpr,  op,       _,            ^,          _
''' % (utils.decomp_tag, utils.decomp_tag)

# stuff to support emulation of some MIPS instructions
support_header = '''
#include <math.h> /* for trunc */
#include <stdint.h> /* for INT32_MIN/MAX */
#include <string.h> /* for memcpy */

int32_t
trunc_w_d(double x)
{
    double r = trunc(x);
    if (r > INT32_MAX || r < INT32_MIN)
        return INT32_MAX;
    else
        return r;
}
'''

mips_insn = namedtuple('mips_insn', ['insn', 'slots', 'opfs', 'ty', 'subty',
                                     'subst', 'result'])
types = Enum('insn_ty',
             ['op', 'load', 'store', 'jump', 'fbranch', 'branch', 'slt',
              'call', 'jr', 'delay', 'fcmp', 'nop', 'la', 'li', 'lui',
              'usefn'])
subtypes = Enum('subtypes', ['zero', 'likely', 'zimm', '_'])
opnd_types = Enum('opnd_types', ['fpr', 'gpr', 'imm', 'loc', 'spec', 'addr'])

def create_insn_table():
    '''unit -> {str : mips_insn}'''
    def make_insn(fmt):
        '''[str] -> (str, mips_insn)'''
        def split(arg, ty):
            fields = re.split(r'\s+', arg)
            return list(ty[x] for x in fields)

        (insn, slots, opfs, ty, subty, subst, result) = list(
            x.strip() for x in fmt.split(','))
        slots = split(slots, ep_ct.slot_types) if slots != '_' else []
        opfs = split(opfs, opnd_types) if opfs != '_' else []
        subty = split(subty, subtypes) if subty != '_' else []
        result = ep_ct.slot_types[result]

        return (insn, mips_insn(
            insn, slots, opfs, types[ty], subty, subst, result))

    lines = [y for y in insn_fmts.splitlines()
             if re.search(r'^#|^$', y) is None]

    return dict(make_insn(x) for x in lines)

def create_insn_type_table(insns, ty):
    '''{str : mips_insn} -> [insn_ty] -> frozenset(str)'''
    return frozenset(x.insn for x in insns.itervalues() if x.ty in ty)

def create_insn_uses_opnd_type_table(insns, ty):
    return frozenset(x.insn for x in insns.itervalues()
                     if filter(None, [ty == y for y in x.opfs]))

insns = create_insn_table()

# XXX MIPS III-specific stuff in here, e.g. ancient MIPS has load delays, but
# newer MIPS does not
delayed = create_insn_type_table(
    insns, [types.jump, types.fbranch, types.branch, types.call, types.jr])
has_special_opnd = create_insn_uses_opnd_type_table(insns, opnd_types.spec)
has_imm = create_insn_uses_opnd_type_table(insns, opnd_types.imm)
