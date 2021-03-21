#include <iostream>
#include "paczka.h"

using namespace std;

double** tworzenie_arkusza(int rozmiar_1, int rozmiar_2)
{
    double** tab = new double*[rozmiar_1];
    
    for (int i = 0; i < rozmiar_1; i++) tab [i] = new double[rozmiar_2];
    
    return tab;
}

int rozmiar_1, rozmiar_2;

void edycja_arkusza(double** arkusz, int rozmiar_x, int rozmiar_y)
{
    cin >> arkusz[rozmiar_x][rozmiar_y];
}