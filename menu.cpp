#include <iostream>

using namespace std;

int opcja;

void menu()
{
    int x =0;
    cout << "\t *do czego sluzy program, opis*" << endl;
    cout << "\t MENU" << endl;
    cout << "-----------------------------------" << endl;
    cout << "Wybierz opcje:" << endl << endl;
    cout << "1. Nowy arkusz." << endl;
    cout << "2. " << endl;
    cout << "3. " << endl;
    cout << "4. " << endl;
    cout << "5. " << endl;
    cout << "6. " << endl;


    cin >> opcja;

    switch(opcja)
    {
            case 1:
            {
                int x, y;
                cout << "Podaj wielkosc arkusza: ";
                cin >> x;
                cin >> y;
                //funkcja tworzenia arkusza
            }
            break;

            case 2:
            {
                cout <<"2. ";
            }
            break;

            case 3:
            {
                cout << "3. ";
            }
            break;

            case 4:
            {
                cout << "4. ";
            }
            break;

            case 5;
            {
                cout << "5. ";
            }
            break;

            case 6;
            {
                cout << "6. ";
            }
            break;

            default: cout << "Wybrana opcja nie istnieje!";
    }
    system cls;
}