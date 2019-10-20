//**********************************************************
//***main.c***
//**********************************************************

#ifdef linux
#include <stdio.h>
#include <stdlib.h>
#include <curses.h>
#include <unistd.h>
#endif

#ifdef _WIN32
#include <stdio.h>
#include <stdlib.h>
#include "PDCurses-3.9/curses.h"
#endif

//#include "tool.c"
#include "map.c"

int main(int argc, char *argv[])
{
	if(!initscr())
	{
		// Woops! There is something wrong with this terminal
		printf("Unable to enter curses mode");
		exit(1);
	}
int termSX;
int termSY;
char kbp = 0;

noecho();

while(kbp != 'q')
{
		getmaxyx(stdscr,termSY,termSX);

		kbp = getch();
}

map_box((termSX-2),(termSY-2));
getch();

	endwin();
	return 0;
}
