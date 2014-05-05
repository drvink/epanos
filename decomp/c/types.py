from collections import namedtuple
from flufl.enum import Enum
from pycparser import c_ast
from decomp import utils

# convenience functions for ast building

def array(ty, dim=None, quals=[]):
    return c_ast.ArrayDecl(ty, dim, quals)

def ptr(ty, quals=[]):
    return c_ast.PtrDecl(quals, ty)

def simple_typename(names, quals=[]):
    return c_ast.TypeDecl(None, quals, c_ast.IdentifierType(names))

def simple_cast(ty, expr, quals=[]):
    return c_ast.Cast(c_ast.Typename(quals, ty), expr)

def cast_to_dest_reg(insn, arg):
    return simple_cast(slot_to_typename[insn.slots[0]], arg)

def constant(typename, arg):
    return c_ast.Constant(typename, arg)

def initlist(arg):
    if type(arg) is not list:
        raise utils.BugError('non-list passed')
    return c_ast.InitList(arg)

def do_nop(**kw):
    return c_ast.EmptyStatement()

def do_op(**kw):
    #{rd} = {rs} {subst} {rt}
    # XXX this is a mess
    lvalue = c_ast.BinaryOp(kw['subst'], kw['rs'], kw['rt'])
    try:
        cast_with = slot_to_typename[kw['result']]
    except KeyError:
        return do_assign(
            rt=kw['rd'],
            op=lvalue)
    else:
        return do_assign(
            rt=kw['rd'],
            op=simple_cast(cast_with, lvalue))

def do_jump(**kw):
    #goto {loc}
    # fmt_op returns an ID but Goto takes a bare string
    return c_ast.Goto(kw['loc'].name)

def do_branch(**kw):
    # ast fragment--must fill in at least .iftrue attr
    return c_ast.If(c_ast.BinaryOp(kw['subst'], kw['rs'], kw['rt']),
                    None,
                    None)

def do_assign(**kw):
    #{rt} = {op}
    return c_ast.Assignment('=', kw['rt'], kw['op'])

def args_for_call(args):
    '''[c_ast] -> c_ast'''
    if args[0] is None:
        return None
    else:
        return c_ast.ExprList(args)

def make_call(callee, ret_reg=None, args=None, for_extern=None):
    ret = c_ast.FuncCall(c_ast.ID(callee), args)
    if ret_reg is None:
        return ret
    else:
        if for_extern is not None:
            # cast the return value of an extern function to our register's type
            return do_assign(rt=ret_reg, op=simple_cast(for_extern.type, ret))
        else:
            return do_assign(rt=ret_reg, op=ret)

def internal_call(callee):
    # for calling functions inside our target
    return make_call(
        callee, args=args_for_call([
            c_ast.ID('%s' % utils.args_tag)]))

ep_ctypes = Enum('ep_ctypes', [
    'schar', 'uchar', 'short', 'ushort', 'int', 'uint', 'longint', 'ulongint',
    'longlongint', 'ulonglongint', 'float', 'double', 'char', 'pointer'])
slot_types = Enum('slot_types', ['s', 'd', 'i8', 'u8', 'i16', 'u16',
                                 'i32', 'u32', 'i64', 'u64', '_'])

slot_to_typename = {
    slot_types.s : simple_typename(['float']),
    slot_types.d : simple_typename(['double']),
    slot_types.i8 : simple_typename(['int8_t']),
    slot_types.u8 : simple_typename(['uint8_t']),
    slot_types.i16 : simple_typename(['int16_t']),
    slot_types.u16 : simple_typename(['uint16_t']),
    slot_types.i32 : simple_typename(['int32_t']),
    slot_types.u32 : simple_typename(['uint32_t']),
    slot_types.i64 : simple_typename(['int64_t']),
    slot_types.u64 : simple_typename(['uint64_t'])
}

class cnum(object):
    '''base class for C-style printable floating-point numbers'''
    __slots__ = ['value']

    def __init__(self, value):
        tyty = type(value)
        if tyty is not float:
            raise utils.BugError('must be float, not %s' % tyty.__name__)
        self.value = value

    def __eq__(self, other):
        return type(self) is type(other) and self.value == other.value
    def __ne__(self, other):
        return not self.__eq__(other)

class cfloat(cnum):
    '''wrapper to print round-trippable floats with C-style postfix f'''
    fmt = '%#.9g'

    def __str__(self):
        return (self.fmt + 'f') % self.value
    def __repr__(self):
         return '%s(%s)' % (self.__class__.__name__, self.fmt) % self.value

class cdouble(cnum):
    '''wrapper to print round-trippable doubles'''
    def __str__(self):
        return '%#.17g' % self.value
    def __repr__(self):
         return '%s(%s)' % (self.__class__.__name__, self.value)

fn_sig = namedtuple('fn_sig', ['return_type', 'arg_regs'])
