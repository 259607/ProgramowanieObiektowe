#include <iostream>
#include "paczka.h"

using namespace std;

void wyswietl(double **arkusz, int rozmiar_1, int rozmiar_2)
{
    for(int i = 0; i < rozmiar_1; i++)
    {
        for(int k = 0; k < rozmiar_2; k++)
        {
            cout << arkusz[i][k] << " ";
        }
            cout << endl;
    }
}