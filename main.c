#include <stdlib.h>
#include <time.h>

#include <unistd.h>
#include <ncurses.h>

#include "num.h"

int main()
{
	int c;
	WINDOW* def=initscr();
	for(int i=1;i<=9;i++)
	{
		num(i);
		refresh();
		usleep(1000000/(10*i));
		clear();
	}
	endwin();
}
