#include <iostream>
#include "tablica.h"
#include <fstream>
using namespace std;

double **wczytajPlik(int *wiersze, int *kolumny)
{
    ifstream plik("arkusz");
    double **tablica = nullptr;
    if (plik.good())
    {
        plik >> *wiersze;
        plik >> *kolumny;
        cout << "wiersz";
        tablica = stworzTablica(*wiersze, *kolumny);
        cout << "kolumna";
        for (int i = 0; i < *wiersze; i++)
        {
            for (int j = 0; j < *kolumny; j++)
            {
                plik >> tablica[i][j];
                
            }
        }
    }
    plik.close();
    return tablica;
}

void zapiszPlik(double **arkusz, int wiersze, int kolumny)
{
    ofstream plik("arkusz");
    if (plik.good())
    {
        plik << wiersze << endl;
        plik << kolumny << endl;
        for (int i = 0; i < wiersze; i++)
        {
            for (int j = 0; j < kolumny; j++)
            {
                plik << arkusz[i][j] << '\t';
            } 
            plik << endl;
        }
    }
    plik.close();
}
