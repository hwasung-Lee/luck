#include "num.h"
#include <ncurses.h>

//aligator
int num(int n)
{
	if(n==1)
	{
		one();
		return 0;
	}
	if(n==2)
	{
                two();
                return 0;
        }
	if(n==3)
	{
                three();
                return 0;
        }
	if(n==4)
	{
                four();
                return 0;
        }
	if(n==5)
	{
                five();
                return 0;
        }
	if(n==6)
	{
                six();
                return 0;
        }
	if(n==7)
	{
		seven();
                return 0;
        }
	if(n==8)
	{
		eight();
                return 0;
	}
	if(n==9)
	{
		nine();
                return 0;
	}
}
void one()
{
        printw("	::: \n"); 
        printw("     :+:+:  \n");
        printw("      +:+   \n");
        printw("     +#+    \n");
        printw("    +#+     \n");
        printw("   #+#      \n");
        printw("#######     \n");
}
void two()
{
        printw("       :::::::: \n");
        printw("     :+:    :+: \n");
        printw("          +:+   \n");
        printw("       +#+      \n");
        printw("    +#+         \n");
        printw("  #+#           \n");
        printw("##########      \n");
}
void three()
{
	printw("      ::::::::\n"); 
	printw("    :+:    :+:\n");
	printw("          +:+ \n"); 
	printw("      +#++:   \n"); 
	printw("        +#+   \n"); 
	printw("#+#    #+#    \n"); 
	printw("########      \n"); 
}
void four()
{      
        printw("       :::\n");
        printw("     :+:  \n");
        printw("    +:+ +:+ \n");
        printw("  +#+  +:+  \n");
        printw("+#+#+#+#+#+\n");
        printw("     #+#   \n");
        printw("    ###    \n");
}
void five()
{
        printw("     :::::::::: \n");
        printw("    :+:    :+:  \n");
        printw("   +:+          \n");
        printw("  +#++:++#+     \n");
        printw("        +#+     \n");
        printw("#+#    #+#      \n");
        printw("########        \n");
}
void six()
{
        printw("      :::::::: \n");
        printw("    :+:    :+: \n");
        printw("   +:+         \n");
        printw("  +#++:++#+    \n");
        printw(" +#+    +#+    \n");
        printw("#+#    #+#     \n");
        printw("########       \n");
}
void seven()
{
        printw("  ::::::::::: \n");
        printw(" :+:     :+:  \n");
        printw("       +:+    \n");
        printw("     +#+      \n");
        printw("   +#+        \n");
        printw(" #+#          \n");
        printw("###           \n");
}
void eight()
{
        printw("      :::::::: \n");
        printw("    :+:    :+: \n");
        printw("   +:+    +:+  \n");
        printw("   +#++:++#    \n");
        printw(" +#+    +#+    \n");
        printw("#+#    #+#     \n");
        printw("########       \n");
}
void nine()
{
        printw("      :::::::: \n");
        printw("    :+:    :+: \n");
        printw("   +:+    +:+  \n");
        printw("   +#++:++#+   \n");
        printw("        +#+    \n");
        printw("#+#    #+#     \n");
        printw("########       \n");

}
