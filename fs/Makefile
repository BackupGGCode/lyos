#
# Makefile for the Lyos filesystem.

ASM		= nasm
CC		= gcc
LD		= ld
ASMKFLAGS	= -I ../include/ -I ../include/sys/ -f elf
CFLAGS		= -I ../include/ -I ../include/sys/ -c -fno-builtin -fno-stack-protector -fpack-struct -Wall

FSOBJS		= main.o Lyos/lyosfs.o
FS		= fs.o

everything : reclean $(FS)

reclean :
	rm -f $(FSOBJS)

$(FS): $(FSOBJS)
	$(LD) -r -o $(FS) $(FSOBJS)

main.o: main.c
	$(CC) $(CFLAGS) -o $@ $<

Lyos/lyosfs.o:
	(cd Lyos; make)

