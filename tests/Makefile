CC	= gcc
CFLAGS	= -Wall -I../src
LDFLAGS	= -L../src -latomicfifo

all:
	$(CC) $(CFLAGS) $(LDFLAGS) push_pop.c -o push_pop_shared
	$(CC) $(CFLAGS) -static $(LDFLAGS) push_pop.c -o push_pop_static

clean:
	rm -f push_pop_shared push_pop_static
