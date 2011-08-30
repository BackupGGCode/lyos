ASM		= nasm
CC		= gcc
ASMKFLAGS	= -I ../include/ -I ../include/sys/ -f elf
CFLAGS		= -I ../include/ -I ../include/sys/ -c -fno-builtin -Wall

MMOBJS =	main.o forkexit.o exec.o page.o memory.o signal.o

everything : reclean $(MMOBJS)

reclean :
	rm -f $(MMOBJS)

main.o: main.c
	$(CC) $(CFLAGS) -o $@ $<

forkexit.o: forkexit.c
	$(CC) $(CFLAGS) -o $@ $<

exec.o: exec.c
	$(CC) $(CFLAGS) -o $@ $<

page.o: page.asm
	$(ASM) $(ASMKFLAGS) -o $@ $<

memory.o: memory.c
	$(CC) $(CFLAGS) -o $@ $<

signal.o: signal.c
	$(CC) $(CFLAGS) -o $@ $<
