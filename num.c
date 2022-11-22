#include "num.h"
#include <ncurses.h>

//aligator
int num(WINDOW* win, int n)
{
	wprintw(win,"\n");
	if(n==1)
	{
		one(win);
		return 0;
	}
	if(n==2)
	{
                two(win);
                return 0;
        }
	if(n==3)
	{
                three(win);
                return 0;
        }
	if(n==4)
	{
                four(win);
                return 0;
        }
	if(n==5)
	{
                five(win);
                return 0;
        }
	if(n==6)
	{
                six(win);
                return 0;
        }
	if(n==7)
	{
		seven(win);
                return 0;
        }
	if(n==8)
	{
		eight(win);
                return 0;
	}
	if(n==9)
	{
		nine(win);
                return 0;
	}
}
void one(WINDOW* win)
{
        wprintw(win, "\n            ::: \n"); 
        wprintw(win, "        :+:+:+  \n");
        wprintw(win, "          +#+   \n");
        wprintw(win, "         +#+    \n");
        wprintw(win, "        #+#     \n");
        wprintw(win, "     #######    \n");
}
void two(WINDOW* win)
{
        wprintw(win, "         :::::::: \n");
        wprintw(win, "       :+:    :+: \n");
        wprintw(win, "            +:+   \n");
        wprintw(win, "         +#+      \n");
        wprintw(win, "      +#+         \n");
        wprintw(win, "    #+#           \n");
        wprintw(win, "  ##########      \n");
}
void three(WINDOW* win)
{
	wprintw(win, "        :::::::: \n"); 
	wprintw(win, "      :+:    :+: \n");
	wprintw(win, "            +:+  \n"); 
	wprintw(win, "        +#++:    \n"); 
	wprintw(win, "          +#+    \n"); 
	wprintw(win, "  #+#    #+#     \n"); 
	wprintw(win, "  ########       \n"); 
}
void four(WINDOW* win)
{      
        wprintw(win, "         :::     \n");
        wprintw(win, "       :+:       \n");
        wprintw(win, "      +:+ +:+    \n");
        wprintw(win, "    +#+  +:+     \n");
        wprintw(win, "  +#+#+#+#+#+    \n");
        wprintw(win, "       #+#       \n");
        wprintw(win, "      ###        \n");
}
void five(WINDOW* win)
{
        wprintw(win, "       ::::::::::\n");
        wprintw(win, "      :+:    :+: \n");
        wprintw(win, "     +:+         \n");
        wprintw(win, "    +#++:++#+    \n");
        wprintw(win, "          +#+    \n");
        wprintw(win, "  #+#    #+#     \n");
        wprintw(win, "  ########       \n");
}
void six(WINDOW* win)
{
        wprintw(win, "        :::::::: \n");
        wprintw(win, "      :+:    :+: \n");
        wprintw(win, "     +:+         \n");
        wprintw(win, "    +#++:++#+    \n");
        wprintw(win, "   +#+    +#+    \n");
        wprintw(win, "  #+#    #+#     \n");
        wprintw(win, "  ########       \n");
}
void seven(WINDOW* win)
{
        wprintw(win, "    :::::::::::  \n");
        wprintw(win, "   :+:     :+:   \n");
        wprintw(win, "         +:+     \n");
        wprintw(win, "       +#+       \n");
        wprintw(win, "     +#+         \n");
        wprintw(win, "   #+#           \n");
        wprintw(win, "  ###            \n");
}
void eight(WINDOW* win)
{
        wprintw(win, "        :::::::: \n");
        wprintw(win, "      :+:    :+: \n");
        wprintw(win, "     +:+    +:+  \n");
        wprintw(win, "     +#++:++#    \n");
        wprintw(win, "   +#+    +#+    \n");
        wprintw(win, "  #+#    #+#     \n");
        wprintw(win, "  ########       \n");
}
void nine(WINDOW* win)
{
        wprintw(win, "        :::::::: \n");
        wprintw(win, "      :+:    :+: \n");
        wprintw(win, "     +:+    +:+  \n");
        wprintw(win, "     +#++:++#+   \n");
        wprintw(win, "          +#+    \n");
        wprintw(win, "  #+#    #+#     \n");
        wprintw(win, "  ########       \n");

}
