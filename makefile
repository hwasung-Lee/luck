CC=gcc

luck: main.c num.h
	$(CC) main.c -o luck -lcurses
