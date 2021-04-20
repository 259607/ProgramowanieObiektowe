#include <iostream>
#include "tablica.h"
using namespace std;



double** stworzTablica(int wiersze, int kolumny)
{
    double** tab = new double*[wiersze];
    for (int i = 0; i < wiersze; i++)
    {
        tab[i] = new double[kolumny];
    }
    return tab;
}

void wpiszTablica(double** tablica, int wspolrzedna_x, int wspolrzedna_y, int wprowadzonaWartosc)
{
    tablica[wspolrzedna_x-1][wspolrzedna_y-1] = wprowadzonaWartosc;
}

void aktualizujTablica(int* tablica)
{
    int ktoryElement, element;
    cout << "Ktory element tablicy chcesz zaktualizowac?: ";
    cin >> ktoryElement;
    cout << endl;
    cout << "Zaktualizuj element: ";
    cin >> element;
    element = tablica[ktoryElement];
}



