#include <ncurses.h>
#include <windows.h>
using namespace std;

int main(){
	
	initscr();
	int i;
	const char *nama[18]={"reza nur ramadhan","Reza nur ramadhan",
						  "rEza nur ramadhan","reZa nur ramadhan",
						  "rezA nur ramadhan","reza Nur ramadhan",
						  "reza nUr ramadhan", "reza nuR ramadhan",
						  "reza nur Ramadhan","reza nur rAmadhan",
						  "reza nur raMadhan","reza nur ramAdhan",
						  "reza nur ramaDhan","reza nur ramadHan",
						  "reza nur ramadhAn","reza nur ramadhaN",
						  "REZA NUR RAMADHAN"," "};
	start_color();
	init_pair(1,COLOR_WHITE,COLOR_CYAN);
	attron(COLOR_PAIR(1));
	for(i=0;i<18;i++){
		printw("%s", nama[i]);		
		Sleep(1000);
		refresh();
		clear();
	}
	printw("press any key.....");
	refresh();
	getch();
	endwin();
}
