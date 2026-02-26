all: nasced sandeclib

sandec:
	winegcc -mconsole -mno-cygwin -o sandec sandec.c

nasced: nasced.c
	gcc nasced.c -lm -o sandec

sandeclib: sandeclib.c sandeclib.h
	gcc -c sandeclib.c -o sandeclib.o

clean:
	-rm -f sandec sandec.exe.so *.o *~ \#*\#
