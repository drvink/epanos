import importlib
from idaapi import ph_get_regnames as ida_reg_list
from idc import GetLongPrm, INF_PROCNAME

cpu_repls = {'mipsb' : 'mips'}

def ida_current_cpu_name():
    '''unit -> str'''
    return cpu_repls[GetLongPrm(INF_PROCNAME)]

def ida_current_cpu():
    '''unit -> module'''
    cpu_name = ida_current_cpu_name()
    return importlib.import_module('.%s' % cpu_name, __package__)
