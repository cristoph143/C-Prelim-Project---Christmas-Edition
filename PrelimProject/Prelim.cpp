#include <stdio.h>
#include <conio.h>
#include <dos.h>
#include <windows.h>
#include <time.h>


void gotoxy(int col, int line){
	COORD coord;
	coord.X=col;
	coord.Y=line;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
	for (line=0; line<=13;line++);{
		for (line=25; line>=13; line--);
		}
}
void loader(){
	int i,j;
	system("cls");{
	gotoxy(70, 15);
	system("color 02");
	printf("Greeting App!");
	for(i = 1 ; i <= 100 ; i++){
    Sleep(10);
    printf("\r");
	gotoxy(30, 25);
	system("color 04");
    printf("[");
	system("color 02");
    for(j = 1 ; j <= i ; j++){  
        printf("|");
	}
	gotoxy(130,25);
	system("color 04");
    printf("]");
	}
	}
	gotoxy(72, 30);
	printf("Completed");
	gotoxy(65, 35);
	printf("Press any Key To Continue!");
}
int main (){
	int n=0, s=72, s1=79, h=1, h1;
	char message[100];
	loader();
	system("cls");
	do{
		for (h=1; h<=15; h++){
			gotoxy(s,h);
			printf ("Merry"); 
			system ("COLOR 01");
			Sleep(50);
			system("cls");
		}
			for (h1=30; h1>=15; h1--){
				gotoxy(s1,h1);
				printf ("Christmas"); 
				system ("COLOR 04");
				Sleep(300);
				system("cls");
			}
	}while(h>15);
	getch();
	return 0;
}