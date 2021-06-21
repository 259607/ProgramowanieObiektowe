#include "menu.h"
#include "tablica.h"
#include "tablica_wysw.h"
#include "pliki.h"
#include <iostream>


void mainMenu() {

    Array arr;
    bool tableExist = false;
    while(1) {
        int x;
        std::cout << "\nMENU GŁÓWNE\n";
        std::cout << "1. Stwórz tablicę\n";
        std::cout << "2. Zmodyfikuj wartość\n";
        std::cout << "3. Zapisz tablicę\n";
        std::cout << "4. Wypisz zawartość tablicy\n";
        std::cout << "5. Suma wartości w kolumnie\n";
        std::cout << "6. Minimum z wartości w kolumnie\n";
        std::cout << "7. Maksimum z wartości w kolumnie\n";
        std::cout << "8. Średnia z wartości w kolumnie\n";
        std::cout << "9. Zmień rozmiar tablicy\n";
        std::cout << "10. Zakończ program\n";
        std::cout << "\nWpisz numer opcji: ";
        
        std::cin >> x;
        system("clear"); 
        if(x == 1) {
            setArr(arr);
            tableExist = true;
        }

        if(x == 10)
            exit(0);

        if(tableExist) {
            if(x == 2)
                editVal(arr);
            if(x == 3)
                saveArr(arr);
            if(x == 4)
                print(arr);
            if(x == 5)
                sum(arr);
            if(x == 6)
                minimum(arr);
            if(x == 7)
                maximum(arr);
            if(x == 8)
                avr(arr);
            if(x == 9)
                changeSize(arr);
        }
        else
            std::cout << "Nie stworzyłeś tablicy!\n";

    }

}

void changeSize(Array &arr) {
    std::cout << "Podaj nowy rozmiar tablicy. Jeśli dodajesz kolumny podaj też ich typy (np. iss): ";
    int x, y;
    std::string newTypes = "";
    std::cin >> x >> y;
    if(y > arr.sizeY) 
        std::cin >> newTypes;
   arr.resize(x - arr.sizeX, y - arr.sizeY, newTypes);
}

void sum(Array &arr) {
    int col;
    std::cout << "Podaj nr kolumny: ";
    std::cin >> col;
    try {
        int ans = arr.sumCol(col - 1);
        std::cout << "Suma wartości w kolumnie nr." << col << " to: " << ans << "\n";
    }
    catch(const char* msg) {
        std::cerr << msg << "\n";
    }
}

void minimum(Array &arr) {
    int col;
    std::cout << "Podaj nr kolumny: ";
    std::cin >> col;
    try {
        int ans = arr.minInCol(col - 1);
        std::cout << "Minimalna wartość w kolumnie nr." << col << " to: " << ans << "\n";
    }
    catch(const char* msg) {
        std::cerr << msg << "\n";
    }
}

void maximum(Array &arr) {
    int col;
    std::cout << "Podaj nr kolumny: ";
    std::cin >> col;
    try {
        int ans = arr.maxInCol(col - 1);
        std::cout << "Maksymalna wartość w kolumnie nr." << col << " to: " << ans << "\n";
    }
    catch(const char* msg) {
        std::cerr << msg << "\n";
    }
}

void avr(Array &arr) {
    int col;
    std::cout << "Podaj nr kolumny: ";
    std::cin >> col;
    try {
        double ans = arr.avrInCol(col - 1);
        std::cout << "Średnia z wartości w kolumnie nr." << col << " to: " << ans << "\n";
    }
    catch(const char* msg) {
        std::cerr << msg << "\n";
    }
}
void setArr(Array &arr){

    std::string inFile, ifIn;
    std::cout << "Czy chcesz wczytać tablicę z pliku? (Y/N) :";
    std::cin >> ifIn;
    if(ifIn == "Y" || ifIn == "y") {
        std::cout << "Podaj nazwę pliku odczytu: ";
        std::cin >> inFile;
        readFromFile(arr, inFile);
    }
    else {
        int sizeX, sizeY;
        std::string cols;
        
        std::cout << "Podaj wymiary tablicy: ";
        std::cin >> sizeX >> sizeY;
        std::cout << "Podaj układ kolumn (np. isssi gdzie i to int a s to string): ";
        std::cin >> cols;
        
        arr.setSize(sizeX, sizeY, cols);
        for(int i = 0; i < sizeX; i++) {
            for(int j = 0; j < sizeY; j++) {
                if(cols[j] == 'i')
                    arr.setValue(i, j, 0);
                else
                    arr.setValue(i, j, "0");
            }
        }
    }
}

void editVal(Array &arr) {
    int x, y, val;
    std::cout << "Podaj numer wiersza, kolumny oraz wartość: ";
    std::cin >> x >> y;
    x--;
    y--;
    std::string val2;
    if (arr.colType[y] == 's'){
        std::cin >> val2;
        arr.setValue(x, y, val2);
    } else {
        std::cin >> val;
        arr.setValue(x, y, val);
    }
}

void saveArr(Array &arr) {
    std::string outFile;
    std::cout << "Podaj nazwę pliku zapisu: ";
    std::cin >> outFile;
    saveToFile(arr, outFile);
}

void print(Array &arr) {
    printArr(arr);
}
