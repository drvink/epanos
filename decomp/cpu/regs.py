from decomp import utils
from decomp.cpu import ida

class reg_base(object):
    '''base class for a cpu register'''
    __slots__ = ['reg']

    def __init__(self, reg):
        if type(self) is reg_base:
            raise utils.BugError('reg_base cannot be directly instantiated')
        self.reg = reg

    def __eq__(self, other):
        return type(self) is type(other) and self.reg == other.reg
    def __ne__(self, other):
        return not self.__eq__(other)

    def __str__(self):
        return '%s' % ida.ida_current_cpu().abi.reg_list[self.reg]
    def __repr__(self):
        return '%s(reg=%u)' % (self.__class__.__name__, self.reg)

class fpr(reg_base):
    def __str__(self):
        return '%s' % ida.ida_current_cpu().abi.reg_list[
            self.reg + ida.ida_current_cpu().abi.fpr_off]

class gpr(reg_base): pass
