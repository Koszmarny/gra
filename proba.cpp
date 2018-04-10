#include <iostream>
#include <windows.h>
#include <deque>
#include <conio.h>
#include <cstdlib>
#include <time.h>
#define SZER 100 //ilosc kolumn
#define WYS 25 //ilosc wierszy
using namespace std;

HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
COORD c;


int main(int argc, char *argv[])
{
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
COORD c;
deque <char> x, y;
void idzxy(char x, char y);
{
    c.X = x;
    c.Y = y;
    SetConsoleCursorPosition(h,c);
}
int ktory_wiersz;      // aktualna pozycja dla wiersza
int ktora_kolumna;     // aktualna pozycja dla kolumn

        int lz=0
    int lx;
    int ly; //losowe wspolrzedne
    //plansza
    srand(time(NULL));
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

    ktory_wiersz = 10;    // stan poczatkowy
    ktora_kolumna = 10;   // stan poczatkowy

   idzxy(ktory_wiersz,ktora_kolumna);


void jablko(int lx, int ly)
    int znak;
    znak = 0;
    while ((znak=getch())!=27||lz<5)  // wykonuj dopoki nie nacisnieto ESC lub zebrano 5
    {

        lx=srand()% 100;
        ly=srand()% 25
        {
            jablko(lx,ly)
            cout<<(char) 64;
        }
        while(jablko!=idzxy)
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
        lz++;

    }

    system("PAUSE");
    return EXIT_SUCCESS;
}
