CC=gcc
lib=-lcurses 

luck: main.o num.o main.c num.c num.o
	$(CC) main.o num.o -o luck $(lib) -g
num.o: 
	$(CC) num.c -c num.o $(lib) -g

main.o: 
	$(CC) main.c -c main.o $(lib) -g

clean:
	rm *.o
	rm luck

