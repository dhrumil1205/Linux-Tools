CC=gcc

out: add.o add1.o sub1.o
	$(CC) add.o add1.o sub1.o -o out1

add.o : add.c  file.h
	$(CC) -c add.c

add1.o: add1.c  file.h
	$(CC) -c add1.c

sub1.o: sub1.c  file.h
	$(CC) -c sub1.c

clean :
	rm -rf *.o out1
