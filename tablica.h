//!
//! @file tablica.h
//! @brief Deklaracja tablicy, operacje na arkuszu
//!
#ifndef ARRAY_H
#define ARRAY_H
#include <string>
#include <vector>
#include <iostream>

/// Klasa bazowa elementów tabeli
class Base {
    public:
    	/// Funkcja ustawia wartosc przechowywana przez element
    	/// @param item Wskaznik do wartosci
        virtual void setVal(void* item) = 0;
        
        /// Funkcja zwraca wartosc przechowywana przez element
        /// @return Wskaznik do przechowywanej wartosci
        virtual void* getValue() = 0;
        virtual ~Base() = default;
        virtual void pprint() = 0;
};

/// Klasa przechowujaca elementy typu int
class CellInt: public Base {
    private:
        int* val;
    public:
    	/// Funkcja ustawia wartosc przechowywana przez element
    	/// @param item wskaznik do wartosci
        void setVal(void* item) override {
            val = (int*) item;
        }

	/// Funkcja zwraca wartosc przechowywana przez element
	/// @reutrn Wskaznik do przechowywanej wartosci
        void* getValue() {
            return (void*) val;
        }

        CellInt(int newVal = 0) {
            int* k = new int;
            *k = newVal;
            setVal(k);
        }
        
        void pprint() {
             std::cout << *val;
        }
};

/// Klasa przechowujaca elemnty typu string
class CellString: public Base {
    private:
        std::string* val;
    public:
    	/// Funkcja ustawia wartosc przechowywana przez element
    	/// @param item Wskaznik do wartosci
        void setVal(void* item) override {
            val = (std::string*) item;
        }
        
        /// Funkcja zwraca wartosc przechowywana przez element
        /// @return Wskaznik do przechowywanej wartosci
        void* getValue() {
            return (void*) val;
        }
        CellString(std::string newVal = "0") {
            std::string* k = new std::string;
            *k = newVal;
            setVal(k);
        }
        
        void pprint() {
             std::cout << *val;
        }
};

///Klasa reprezentujaca strukture tabeli
class Array {
    private:
        void ErrorIfTypeNotInt(int col);
    public:
        int sizeX;
        int sizeY;
        Base*** arr;
        std::string colType;

    /// Funkcja ustawia rozmiar tabeli
    /// @param x Ilosc kolumn
    /// @param y Ilosc wierszy
    /// @param colTyp Typy kolumn
    void setSize(int x, int y, std::string colType);

    /// Funkcja ustawia wartosc komorki dla typow int
    /// @param x nr Kolumny
    /// @param y nr Wiersza
    /// @val Wartosc
    void setValue(int x, int y, int val) {
        int* k = new int;
        *k = val;
        arr[x][y]->setVal(k);
    }
    
    /// Funkcja ustawia wartosc komorki dla typow string
    /// @param x nr Kolumny
    /// @param y nr Wiersza
    /// @param val Wartosc
    void setValue(int x, int y, std::string val) {
        std::string* k = new std::string;
        *k = val;
        arr[x][y]->setVal(k);
    }
    
    /// Funkcja zwraca sume elementow w kolumnie
    /// @param col nr kolumny
    /// @return Suma elementow w kolumnie
    int sumCol(int col);

    /// Funkcja zwraca minimalna wartosc w kolumnie
    /// @param col nr kolumny
    /// @return Minimalna wartosc w kolumnie
    int minInCol(int col);

    /// Funkcja zwraca maksymalna wartosc w kolumnie
    /// @param col nr kolumny
    /// @return Maksymalna wartosc w kolumnie
    int maxInCol(int col);

    /// Funkcja zwraca srednia algebraiczna elementow w kolumnie
    /// @param col nr kolumny
    /// @return Srednia arytmetyczna elemetow w kolumnie
    double avrInCol(int col);

    /// Funkcja zmienia rozmiar tabeli
    /// @param row Ilosc wierszy
    /// @param col Ilosc kolumn
    /// @param types Typy kolumn
    void resize(int row, int col, std::string types);

    ~Array();
};
#endif
