decomp_tag = 'EPANOS_'
args_tag = 'ARGS'
cpp_decomp_tag = '<%scpp>' % decomp_tag

class BugError(Exception): pass

def dictswitch(key, tbl, arg, error, error_arg):
    '''hashable -> dict -> a -> fn -> b -> c
    Look up a function in tbl given a key, returning the result of evaluating
    the function with arg as the argument.  Calls error with error_arg if
    lookup fails.'''
    try:             fn = tbl[key]
    except KeyError: return error(error_arg)
    else:            return fn(arg)

class type_instance(object):
    '''a generic comparable type that can optionally carry a value'''
    __slots__ = ['value']

    def __init__(self, value=None):
        self.value = value

    def __eq__(self, other):
        return type(self) == type(other) and self.value == other.value
    def __not__(self, other):
        return not self.__eq__(other)

    def __repr__(self):
        return '%s()' % self.__class__.__name__

def zip_prefixes(shorts, longs):
    '''[str] -> [str] -> [(str, str)]'''
    # XXX this is a very inefficient algorithm if the input lists are long
    try:
        return [(max([s for s in shorts if l.startswith(s)]),
                 l)
            for l in longs]
    except ValueError:
        raise BugError('lists vary in length or unable to match all items')

def init(xs):
    itr = iter(xs)
    prev = itr.next()
    for x in itr:
        yield prev
        prev = x

def items_or_default(expr, default):
    try:
        return expr()
    except StopIteration:
        return default
