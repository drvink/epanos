import subprocess

PATH_LIST = ['cpp']

def set_cpp(cpp_path='cpp', cpp_args=''):
    '''Set path and arguments to cpp.
        cpp_path:
            The path to 'cpp' on your system. If no path is provided, it
            attempts to just execute 'cpp', so it must be in your PATH.

        cpp_args:
            Set this to the command line arguments to cpp. Be careful with
            quotes - it's best to pass a raw string (r'') here. For example:
            r'-I../utils/fake_libc_include'
            If several arguments are required, pass a list of strings.
    '''
    # XXX this simplifies setting cpp params for the user, but we should really
    # pass it around instead of setting state
    global PATH_LIST
    PATH_LIST = [cpp_path]
    if isinstance(cpp_args, list):
        PATH_LIST += cpp_args
    elif cpp_args != '':
        PATH_LIST += [cpp_args]

def make_cpp_input(tag, text):
    '''str -> str -> str'''
    return '''#line 1 "%s"\n%s\n''' % (tag, text)

# modified from pycparser __init__.py, as its version doesn't take input from
# a pipe
def preprocess(text):
    '''Preprocess a file using cpp.

        When successful, returns the preprocessed file's contents.
        Errors from cpp will be printed out.
    '''
    try:
        CREATE_NO_WINDOW = 0x08000000 # don't create a window on Windows
        # Note the use of universal_newlines to treat all newlines
        # as \n for Python's purpose
        pipe = subprocess.Popen(
                   PATH_LIST, stdout=subprocess.PIPE, stdin=subprocess.PIPE,
                   universal_newlines=True, creationflags=CREATE_NO_WINDOW)
        processed_text = pipe.communicate(text)[0]
    except OSError as e:
        raise RuntimeError("Unable to invoke 'cpp'.  " +
            'Make sure its path was passed correctly\n' +
            ('Original error: %s' % e))

    return processed_text
