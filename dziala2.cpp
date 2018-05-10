#include <iostream>
#include <windows.h>
#include <deque>
#include <conio.h>
#include <cstdlib>
#include <ctime>
#include <cstdio>
#include <time.h>
#define SZER 100 //ilosc kolumn
#define WYS 25 //ilosc wierszy
using namespace std;

HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
COORD c;

deque <char> x, y;
void idzxy(char x, char y)
{
    c.X = x;
    c.Y = y;
    SetConsoleCursorPosition(h,c);
}



int main(int argc, char *argv[])
{
    srand(time(NULL));
int x1 = (rand() % 95)+2;
int x2 = (rand() % 95)+2;
int x3 = (rand() % 95)+2;
int x4 = (rand() % 95)+2;
int x5 = (rand() % 95)+2;
int y1 = (rand() % 23)+2;
int y2 = (rand() % 23)+2;
int y3 = (rand() % 23)+2;
int y4 = (rand() % 23)+2;
int y5 = (rand() % 23)+2;
int ktory_wiersz;      // aktualna pozycja dla wiersza
int ktora_kolumna;     // aktualna pozycja dla kolumn

    for(int i=0; i<SZER; i++)
        cout<<(char) 219;
    cout<<endl;

    for(int i=0; i<=WYS;i++)
    {
        cout<<endl<<(char) 219;
        idzxy(SZER-1, i);
        cout<<(char) 219;
    }
    for(int i=0; i<SZER;i++)
    {
        idzxy(i, WYS);
        cout<<(char) 219;
    }
    idzxy(x1,y1);
    cout<<(char) 220;

    idzxy(x2,y2);
    cout<<(char) 220;

    idzxy(x3,y3);
    cout<<(char) 220;

    idzxy(x4,y4);
    cout<<(char) 220;

    idzxy(x5,y5);
    cout<<(char) 220;

    ktory_wiersz = 10;    // stan poczatkowy
    ktora_kolumna = 10;   // stan poczatkowy

   idzxy(ktory_wiersz,ktora_kolumna);

    int znak;
    znak = 0;
    while ((znak=getch())!=27)  // wykonuj dopoki nie nacisnieto ESC lub zebrano 5
    {
        switch (znak)
          {
          case 77 :   // w prawo
                     ktora_kolumna++;
                     if (ktora_kolumna>=SZER-1)
                     {
                       ktora_kolumna = 1;
                     }
                     break;
          case 75 :   // w lewo
                     ktora_kolumna--;
                     if (ktora_kolumna<=1)
                     {
                       ktora_kolumna = SZER-2;
                     }
                     break;
          case 72 :   // do gory
                     ktory_wiersz--;
                     if (ktory_wiersz<1)
                     {
                       ktory_wiersz = WYS-1;
                     }
                     break;
          case 80 :   // w dol
                     ktory_wiersz++;
                     if (ktory_wiersz>=WYS)
                     {
                       ktory_wiersz = 1;
                     }
                     break;
          }

       idzxy(ktora_kolumna,ktory_wiersz);


    }

    system("PAUSE");
    return EXIT_SUCCESS;
}
