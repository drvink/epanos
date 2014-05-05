import idc

def make_fn_non_library_fn(fn):
    ea = idc.LocByName(fn)
    idc.SetFunctionFlags(ea, idc.GetFunctionFlags(ea) & ~(idc.FUNC_LIB))

def main():
    fnlistfile = idc.AskFile(0, '*.*', 'Choose file')
    if fnlistfile is None: return

    with open(fnlistfile, 'rU') as f:
        while True:
            fn = f.readline()
            if fn == '':
                break
            else:
                make_fn_non_library_fn(fn.strip())

if __name__ == '__main__':
    main()
