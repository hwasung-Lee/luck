#include <stdlib.h>
#include <time.h>

#include <unistd.h>
#include <ncurses.h>

#include "num.h"

#define key_space 32

int main()
{
	int n[3],key;
	WINDOW *w1,*w2,*w3;
	srand(time(NULL));

	initscr();
	noecho();
	w1=newwin(10,19,0,0);
	w2=newwin(10,19,0,18);
	w3=newwin(10,19,0,36);
start:	
	for(int i=0;i<=2;i++)
	{
		n[i]=rand()%10;
	}
	
	refresh();
	num(w1,1);
	num(w2,1);
	num(w3,1);
        wborder(w1,'*','*','*','*','*','*','*','*');
        wborder(w2,'*','*','*','*','*','*','*','*');
        wborder(w3,'*','*','*','*','*','*','*','*');
     	wrefresh(w1);
     	wrefresh(w2);
     	wrefresh(w3);
	move(10,0);
	printw("press [SPACE] to start");
	
	while(wgetch(stdscr)!=32);

	wclear(w1);
	wclear(w2);
	wclear(w3);
	move(10,0);
	clrtoeol();
	refresh();

	for(int i=1;i<=9;i++)
	{
		num(w1,i);
		wborder(w1,'*','*','*','*','*','*','*','*');
		wrefresh(w1);
		usleep(100000-i*5000);
		wclear(w1);
	}
	for(int i=1;i<=n[0];i++)
	{
		num(w1,i);
                wborder(w1,'*','*','*','*','*','*','*','*');
                wrefresh(w1);
                usleep(55000+i*1500);
                wclear(w1);
	}

	for(int i=1;i<=9;i++)
	{
                num(w2,i);
		wborder(w2,'*','*','*','*','*','*','*','*');
                wrefresh(w2);
		usleep(100000-i*5000);
                wclear(w2);
        }
	for(int i=1;i<=n[1];i++)
	{
		num(w2,i);
                wborder(w2,'*','*','*','*','*','*','*','*');
                wrefresh(w2);
                usleep(55000+i*1500);
                wclear(w2);
	}

	for(int i=1;i<=9;i++)
	{
                num(w3,i);
		wborder(w3,'*','*','*','*','*','*','*','*');
                wrefresh(w3);
		usleep(100000-i*5000);
                wclear(w3);
        }
	for(int i=1;i<=n[2];i++)
	{
		num(w3,i);
                wborder(w3,'*','*','*','*','*','*','*','*');
                wrefresh(w3);
                usleep(55000+i*1500);
                wclear(w3);
	}

	if(n[0]*n[1]*n[2]!=7*7*7)
	{
		move(10,0);
		printw("Press [R] or [r] to retry");
	}
	else
	{
		printw("You're lucky guy!!");
	}

	do
	{
		key=getch();
	}while(key!=key_space && key!=82 && key!=114);

	if(key==key_space)
		endwin();
	else if(key==82 || key==114)
	{
		move(10,0);
		clrtoeol();
		refresh();
		goto start;
	}

}
