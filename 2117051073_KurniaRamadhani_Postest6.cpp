#include <iostream>
#include <ncurses.h>
#include <windows.h>
using namespace std;

int main(){
initscr();
start_color();
init_pair(1,COLOR_WHITE,COLOR_MAGENTA);
attron(COLOR_PAIR(1));
printw("HAPPY BIRTHDAY");
init_pair(2,COLOR_WHITE,COLOR_CYAN);
attron(COLOR_PAIR(2));
refresh();
Sleep(3000);
for (int i=0; i<50; i++){
mvprintw(i,i,"HAPPY BIRTHDAY");
refresh();
Sleep(1000);
}


refresh();
Sleep(3000);

}


