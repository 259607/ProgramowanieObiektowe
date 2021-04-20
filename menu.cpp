#include <iostream>
#include "tablica.h"
#include "tablica_wysw.h"
#include "menu.h"
#include "pliki.h"
using namespace std;


void menuTablica()
{
int wiersze, kolumny;
double** arkusz;
    while (1)
    {
        int wybor;
        cout << "Menu programu" << endl
             << "1. Utworz tablice" << endl
             << "2. Aktualizuj elementy tablicy" << endl
             << "3. Wyswietlanie elementow tablicy" << endl
             << "4. Wczytywanie elementow tablicy z pliku" << endl
             << "5. Zapisywanie elementow tablicy do pliku" << endl
             << "Wybierz operacje, ktora chcesz wykonac: ";
        cin >> wybor;
        cout << endl;

        switch (wybor)
        {
            case 1:
            {
                cout << "1. Utworz tablice" << endl;
                utworzTablice(&wiersze, &kolumny, &arkusz);
                cout << endl;
                break;
            }

            case 2:
            {
                cout << "2. Wpisz elementy tablicy" << endl;
                wpiszDane(arkusz);
                cout << endl;
                break;
            }

            case 3:
            {
                cout << "3. Wyswietlanie elementow tablicy" << endl;
                wyswietlTablice(arkusz, wiersze, kolumny);
                cout << endl;
                break;
            }

            case 4:
            {
                cout << "4. Wczytywanie elementow tablicy z pliku" << endl;
                arkusz = wczytajPlik(&wiersze, &kolumny);
                cout << endl;
                break;
            }

            case 5:
            {
                cout << "5. Zapisywanie elementow tablicy do pliku" << endl;
                zapiszPlik(arkusz, wiersze, kolumny);
                break;
            }
            
            case 6:
            {
            	exit(0);
            }break;
            
    	default:
    	{
    		cout << "Nie ma takiej mozliwosci.";
    	}
      }
    }
}

void wpiszDane(double** arkusz)
{
    int wiersze, kolumny;
    double wartosc;
    cout << "Podaj wiersz: " << endl;
    cin >> wiersze;
    cout << "Podaj kolumne: " << endl;
    cin >> kolumny;
    cout << "Podaj wartosc: " << endl;
    cin >> wartosc;
    wpiszTablica(arkusz, wiersze, kolumny, wartosc);
}

void utworzTablice(int* wiersze, int* kolumny, double*** arkusz)
{
    cout << "Wpisz ilosc wierszy: ";
    cin >> *wiersze;
    cout << "Wpisz ilosc kolumn: ";
    cin >> *kolumny;
    cout << endl;
    *arkusz = stworzTablica(*wiersze, *kolumny);
}
