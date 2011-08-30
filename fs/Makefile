CC	=gcc
CFLAGS		= -I ../include/ -I ../include/sys/ -c -fno-builtin -fno-stack-protector -Wall

FSOBJS =	main.o open.o misc.o read_write.o\
			link.o \
			disklog.o buffer.o

everything : reclean $(FSOBJS)

all : reclean $(FSOBJS)

reclean :
	rm -f $(FSOBJS)

main.o: main.c
	$(CC) $(CFLAGS) -o $@ $<

open.o: open.c
	$(CC) $(CFLAGS) -o $@ $<

read_write.o: read_write.c
	$(CC) $(CFLAGS) -o $@ $<

link.o: link.c
	$(CC) $(CFLAGS) -o $@ $<

disklog.o: disklog.c
	$(CC) $(CFLAGS) -o $@ $<

buffer.o: buffer.c
	$(CC) $(CFLAGS) -o $@ $<
