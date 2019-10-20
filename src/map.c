/* map.c - the code for map production in deep */

// Libraries


// Global Variables and Definitions


// Function Declaration


// Functions
void map_box(int scx, int scy);

void map_box(int scx, int scy)
{
  int x=1;
  int y=1;

  while(x <= scx)
  {
    mvprintw(1,x,"l");
    x++;
  }
  x=1;

  while(y <= scy)
  {
    mvprintw(y,1,"-");
    y++;
  }
  y=1;

  while(x <= scx)
  {
    mvprintw(scy,x,"l");
    x++;
  }

  while(y <= scy)
  {
    mvprintw(y,scx,"-");
    y++;
  }

  return;
}
