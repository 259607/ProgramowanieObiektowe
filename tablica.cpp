#include <iostream>

using namespace std;

double** tworzenie_arkusza(int x, int y)
{
    double** arkusz = new double*[x];
    for(int i = 0; i<y; i++)
    {
        arkusz [i] = new double[y];
    }
    return arkusz;
}

void zmiana_wartosci(double** arkusz)
{
    int x,y;
    cout << "Podaj komorke, ktora chcesz zmienic:" << endl;
    cin >> x;
    cin >> y;
    cout << "Jaka nowa wartosc ma przyjac?" << endl;
    cin >> arkusz [x][y];
}