import inspect, os, sys

def our_modules():
    '''unit -> [str]'''
    def is_ours(mn):
        def get_file(m):
            try:
                f = inspect.getfile(m)
                if os.name == 'nt':
                    # python is a piece of shit
                    f = f.replace(r'/', r'\\')
                return f
            except TypeError:
                return ''

        if mn == '__main__' or not mn.startswith('%s.' % __package__):
            return False

        m = sys.modules[mn]
        f = get_file(m)
        if f == '':
            return False
        else:
            me = os.path.dirname(os.path.abspath(__file__))
            mp = os.path.dirname(os.path.abspath(f))
            cp = os.path.commonprefix([me, mp])
            return True if cp == me else False

    return filter(is_ours, sys.modules.iterkeys())

def unload():
    '''unit -> unit'''
    def del_module(arg):
        '''str -> unit'''
        try: del sys.modules[arg]
        except KeyError: pass

    for x in our_modules():
        del_module(x)
    del_module(__package__)

try:
    from decomp.utils import cpp_decomp_tag
    from decomp.c.cpp import set_cpp
    from decomp.c.gen import run
except:
    unload()
    raise
