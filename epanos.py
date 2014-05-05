import os, sys
import idc

def ep_unload():
    global decomp
    try:
        decomp.unload()
        del decomp
    except NameError:
        pass
    m = sys.modules['__main__']
    try:
        del m.ep_unload, m.run, m.intro, m.p, m.c
    except AttributeError:
        pass

try:
    import decomp
except:
    ep_unload()
    raise

def run(decompile=True):
    # change cpp path/args as needed
    pycparser_dir = r'%s\local\pycparser\utils' % os.environ['HOMEPATH']
    decomp_dir = os.path.dirname(os.path.abspath(__file__))
    cpppath = r'%s\cpp.exe' % pycparser_dir
    cppargs = [
        r'-I%s' % path for path in
        (r'%s\fake_libc_include' % pycparser_dir,
         decomp_dir)]
    decomp.set_cpp(cpppath, cppargs)

    ## Desired functions (missing functions will cause a warning if encountered
    ## while emitting code)

    # XXX missing _assert because of bizarre IDA behavior (bug?); fortunately we
    # don't need it
    externs = frozenset(
        ['expm1', 'drand48', 'fmodf', 'srand48', 'glMatrixMode',
         'glScalef', 'glPopMatrix', 'scanf', 'glColor3f', 'sscanf',
         'strcmp', 'strcspn', 'malloc', 'strlen', 'free', 'strncmp',
         'glVertex2f', 'printf', 'glTranslatef', 'glPushMatrix', 'glRotatef',
         'gettimeofday', 'exit', 'glMultMatrixf', 'glBegin',
         'glEnd', 'glViewport', 'glLoadIdentity', 'gluPerspective', 'glClear',
         'floor', 'glFinish', 'time', 'glClearColor', 'glShadeModel'])
    text_fns = frozenset(
        ['value__GfN21', 'hls_to_rgb__GfN21PfN24', 'exprand__Gf',
         'addToSeq__GP7animSeqP11animCommand', 'readAnimation__Gv',
         'stopAnimation__Gv', 'killSeq__GP7animSeq',
         'processCommand__GP11animCommand', 'tasteQueue__Gv',
         'setacttargets__Gv', 'twixt__GiPff', 'foldtwixt__GiPffT3',
         'drawshape__GiT1', 'drawit__Gv', 'animateacts__Gv',
         'createBlankActAnim__Gv', 'createActTable__Gv', 'reshape__GiT1',
         'display__Gv', 'main'])
    cpp_filter = '''
        #include "overrides.h"
        #line 2 "%s"
    ''' % decomp.cpp_decomp_tag
    cpp_all = '''
        #include "overrides.h"
        #include "ep.h"
        #include "GL/gl.h"
        #line 2 "%s"
    ''' % decomp.cpp_decomp_tag

    return decomp.run(externs, text_fns, cpp_filter, cpp_all, decompile)

intro = '''
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <assert.h>
#include <time.h>
#include <GL/gl.h>
#include <GL/glu.h>
'''

if __name__ == '__main__':
    p = idc.AskYN(1, 'Run the decompiler?')
    if p == -1:
        print 'Aborting.'
    elif p == 1:
        print intro
        print run(decompile=True)
    else:
        run(decompile=False) # just load it (for interactive use/testing)
