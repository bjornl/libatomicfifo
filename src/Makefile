CC	= gcc
CFLAGS	= -Wall
OBJECTS	= atomicfifo

all: libatomicfifo.so libatomicfifo.a

lib$(OBJECTS).so:
	$(CC) $(CFLAGS) -fPIC -shared $(OBJECTS).c -o $@

lib$(OBJECTS).a:
	$(CC) $(CFLAGS) -c $(OBJECTS).c -o $(OBJECTS).o
	$(AR) rcs $@ $(OBJECTS).o

clean:
	rm -f $(OBJECTS).o lib$(OBJECTS).so lib$(OBJECTS).a
