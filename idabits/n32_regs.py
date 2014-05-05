from idaapi import *

# rename IDA's O32 MIPS registers to N32

registers = {'$t0':'$a4','$t1':'$a5','$t2':'$a6','$t3':'$a7'} # '$fp':'$s8'

def main():
    ea = get_screen_ea()
    seg = getseg(ea)

    func = get_func(seg.startEA)
    while func is not None and func.startEA < seg.endEA:
        funcea = func.startEA
        fname = GetFunctionName(funcea)

        for i in registers.iteritems():
            add_regvar(func, funcea, func.endEA, i[0], i[1], '')

        func = get_next_func(funcea)

if __name__ == '__main__':
    main()
