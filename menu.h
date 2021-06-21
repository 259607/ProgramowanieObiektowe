//!
//! @file menu.h
//! @brief Zarzadzanie interfejsem uzytkownika
//!
#ifndef MENU_H
#define MENU_H
#include "tablica.h"

/// Funkcja odpowiedzialna za wyswietlanie menu glownego
void mainMenu();

/// Funkcja wczytuje tabele z pliku lub pozwala uzytkownikowi na jej wypelnienie
/// @param arr Referencja do modyfikowanej tabeli
void setArr(Array &arr);

/// Funkcja pozwala na modyfikowanie elementow w tabeli
/// @param arr Referencja do modyfikowanej tabeli
void editVal(Array &arr);

/// Funkcja zapisuje tabele do pliku
/// @param arr Referencja do modyfikowanej tabeli
void saveArr(Array &arr);

/// Funkcja wypisuje tabele
/// @param arr Referencja do modyfikowanej tabeli
void print(Array &arr);

/// Funkcja wypisuje sume wartosci kolumny
/// @param arr Referencja do modyfikowanej tabeli
void sum(Array &arr);

/// Funkcja wypisuje najmniejsza wartosc w kolumnie
/// @param arr Referencja do modyfikowanej tabeli
void minimum(Array &arr);

/// Funkcja wypisuje najwieksza wartosc z kolumny
/// @param arr Referencja do modyfikowanej tabeli
void maximum(Array &arr);

/// Funkcja wypisuje srednia arytmetyczna wartosci z kolumny
/// @param arr Referencja do modyfikowanej tabeli
void avr(Array &arr);

/// Funkcja zmienia rozmiar tabeli
/// @param arr Referencja do modyfikowanej tabeli
void changeSize(Array &arr);

#endif
