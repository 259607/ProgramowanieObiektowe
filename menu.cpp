#include <iostream>
#include <cstdlib>
#include "paczka.h"

using namespace std;

int opcja;

void menu()
{
    int x =0;
    double **arkusz;
    cout << "\t Program arkusza kalulacyjnego" << endl;
    cout << "\t MENU" << endl;
    cout << "---------------------------------------" << endl;
    cout << "Wybierz opcje:" << endl << endl;
    cout << "1. Nowy arkusz." << endl;
    cout << "2. Zmiana rozmiaru arkusza." << endl;
    cout << "3. Zmiana wartosci arkusza." << endl;
    cout << "4. Wyswietlenie arkusza." << endl;
    cout << "5. ZAKONCZ." << endl;
    cout << "\t Wpisz numer opcji:";

    cin >> opcja;

    switch(opcja)
    {
            case 1:
            {
                cout << "Podaj liczbe wierszy: ";
                cin >> rozmiar_1;

                cout << "\nPodaj liczbe kolumn: ";
                cin >> rozmiar_2;

                arkusz = tworzenie_arkusza(rozmiar_1,rozmiar_2);
            }
            break;

            case 2:
            {
                cout <<"2. ";
            }
            break;

            case 3:
            {
                int x,y;
                cout << "Wybierz komorke ktora chcesz zmienic" << endl;
                
                cout << "Podaj wiersz: ";
                cin >> y;
                
                cout << "\nPodaj kolumne: ";
                cin >> x;

                edycja_arkusza(arkusz, x, y);
            }
            break;

            case 4:
            {
                wyswietl(arkusz, rozmiar_1, rozmiar_2);
            }
            break;

            case 5:
            {
                exit(0);
            }
            break;

            default: cout << "Wybrana opcja nie istnieje!" << endl;
    }
    system("clear");
}