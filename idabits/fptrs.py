import idaapi, idautils, idc

# a script to move call target alts between databases (they are not exported
# in an idc dump)

def get_fptrs():
    d = {}
    nn = idaapi.netnode('$ mips')

    for fn in idautils.Functions():
        for ea in idautils.FuncItems(fn):
            if not idc.isCode(idaapi.getFlags(ea)):
                continue
            target = nn.altval(ea) - 1
            if target != -1:
                d[ea] = idc.Name(target)

    return d

def set_fptrs(d):
    nn = idaapi.netnode('$ mips')

    for ea, target in d.iteritems():
        nn.altset(ea, idc.LocByName(target) + 1)
        idaapi.noUsed(ea)

    return
