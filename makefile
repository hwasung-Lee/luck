CC=gcc
lib=-lcurses 

luck: main.o num.o
	$(CC) main.o num.o -o luck $(lib) -g
num.o: num.c num.h
	$(CC) num.c -c num.o $(lib) -g

main.o: main.c
	$(CC) main.c -c main.o $(lib) -g

clean:
	rm *.o
	rm luck

