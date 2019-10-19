//**********************************************************
//***main.c***
//**********************************************************

#include <stdio.h>
#include <stdlib.h>
#include <curses.h>
//#include "tool.c"
//#include "map.c"

int main(int argc, char *argv[])
{
	if(!initscr())
	{
		// Woops! There is something wrong with this terminal
		printf("Unable to enter curses mode");
		exit(1);
	}
int termSX = 1;
int termSY = 1;
	if(is_term_resized(termSY,termSX))
	{
		resize_term(termSY,termSX);
	}

printw("x = %d and y = %d\n",termSX,termSY);
getch();

	endwin();
	return 0;
}
