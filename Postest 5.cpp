#include <ncurses.h>
using namespace std;

int main(){
	
	const char *nama[500];
	int npm;
	
	initscr();
	
	scanw("%499[^\n]", nama);
	scanw("%d", &npm);
	
	printw("\n");
	
	printw("Nama: %s\n", nama);
	printw("NPM: %d", npm);
	
	refresh();
	
	getch();
	
	endwin();
}
