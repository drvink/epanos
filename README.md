EPANOS
======

the **E**lectro**P*aint **A**utomatic **N**o-source **O**bject rea**S**sembler

<small>a backronym; see THANKS.md</small>

### Who?

http://github.com/drvink

### What?

This is a very dumb MIPS to C static translator.  Consider it a proof of
concept, as it has successfully worked on at least
[one non-trivial program][electroportis].

[electroportis]: https://github.com/drvink/electroportis

### When?

From December 2013 to March 2014.

### Where?

Tokyo.

### How?

You will need a version of [IDA][] that is not yet public.  Whatever
version comes after 6.5 should contain all the fixes that are needed
to produce the code used in ElectroPortis.

[IDA]: http://www.hex-rays.com

The decompiler depends on these libraries:

* [pycparser](http://github.com/eliben/pycparser)
* [flufl.enum](http://pythonhosted.org/flufl.enum/)
* [pyc-fmtstr-parser](http://github.com/drvink/pyc-fmtstr-parser)

The decompiler is not a push-button solution: some small annotations to the IDA
database were needed to produce fully-working code.  If you wish to use it on
your own target, you will probably want to modify it to do data/bss segment
extraction in a saner way.  The easiest thing would probably be to just lift
them out and treat them opaquely, i.e. as a char[], and then handle endianness
issues accordingly.

### Why?

People have wanted ElectroPaint (the real thing, not a clone) on something other
than IRIX for longer than your author (of the decompiler) has been alive.
*Someone* had to do it.

### Python?

        __           __
       /..\        /| |'-.
       \O_/.       || |   |   OH WOW
       _.'  \ _    \|_|_.-'  DYNAMIC TYPING
    .='.__/  \ |     _) (_
         |\_. \| |"""""""""|  LET ME OUT
         /`  .'| |         |   OF THIS
         \ \"""; |         |
         )\ \  | |.-------.|
         '`_`  ' "         "

This was an experiment.  The two options that did not require writing bindings
for IDA were C++ and Python.  I don't think I'll use Python again for personal
projects in the future, and I should have written IDA bindings to a statically
typed language (other than C++).
