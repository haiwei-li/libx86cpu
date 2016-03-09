##############################
Collect information on x86 CPU
##############################

A tiny C library to query the capabillities of the x86 CPU and operating system.

Its main source of information is the `cpuid
<https://en.wikipedia.org/wiki/CPUID>`_ instruction.

The code queries `OS as well as cpuid
<https://en.wikipedia.org/wiki/Advanced_Vector_Extensions#Operating_system_support>`_
to see if the OS / CPU supports AVX instructions.

There is a Python / CLI interface to this code at `x86cpu
<https://github.com/matthew-brett/x86cpu>`_.

You can use this library to print out a report on your CPU.  On Unix::

    make
    ./x86report

On Windows::

    nmake -f Makefile.win
    .\x86report

This might show something like::

    x86cpu report
    -------------
    brand            : Intel(R) Core(TM) i5-4250U CPU @ 1.30GHz
    vendor           : GenuineIntel
    model (display)  : 69
    family (display) : 6
    model            : 5
    family           : 6
    extended model   : 4
    extended family  : 0
    stepping         : 1
    processor type   : 0
    signature        : 263761
    MMX              : True
    3DNow!           : True
    SSE              : True
    SSE2             : True
    SSE3             : True
    SSSE3            : True
    SSE4.1           : True
    SSE4.2           : True
    supports AVX     : True
    supports AVX2    : True
