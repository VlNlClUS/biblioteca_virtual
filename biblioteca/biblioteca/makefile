all:	prog

prog:	*.o
	gcc main.o funcs.o -o prog

*.o:	
	gcc -c *.c

clean:
	rm *.o prog
