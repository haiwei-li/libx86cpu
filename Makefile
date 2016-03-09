CC=gcc
CFLAGS=-I.
DEPS = cpuid.h cpuinfo.h
OBJS = x86report.c cpuinfo.c cpuid.c os_restores_ymm.c

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

x86report: $(OBJS)
	$(CC) -o $@ $^ $(CFLAGS)

clean :
	rm -rf *.o
