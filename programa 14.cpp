#include<stdio.h>
#include<windows.h>
#include<conio.h>

void gotoxy (int x, int y){
    HANDLE hCon;
	hCon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X = x;
	dwPos.Y = y;
	
	SetConsoleCursorPosition(hCon, dwPos);	
	
}


int main(){
	
	
	int x = 10, y = 10;
	gotoxy(x,y); printf("*");
	
	bool game_over = false;
	while(!game_over){
		
		
		if(kbhit()){
			   char tecla = getch();
			   gotoxy(x, y); printf(" ");
			   if (tecla == 'j') x--;  // izquierda 
			   if (tecla == 'l') x++;  // derecha 
			   if (tecla == 'i') y--;  // arriba 
			   if (tecla == 'k') y++;  // abajo 
			   gotoxy(x,y); printf("*");
			
		}
	
	}
	
	return 0;	
}
