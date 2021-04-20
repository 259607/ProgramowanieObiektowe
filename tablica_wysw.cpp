#include <iostream>
#include "tablica_wysw.h"
using namespace std;

void wyswietlTablice(double** tablica, int wymiar_x, int wymiar_y)
{
	for (int i = 0; i < wymiar_x; i++)
	{
        for (int j = 0; j < wymiar_y; j++) cout << tablica[i][j] << "\t";
        cout << endl;
	}
}