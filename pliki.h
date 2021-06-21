//!
//! @file pliki.h
//! @brief Wczytywanie i Zapisywanie tabeli
//!

#include <fstream>
#include "tablica.h"

/// Funkcja wczytuje dane do tabeli z pliku
/// @param arr Referencja do modyfikowanej tabeli
/// @fileName Nazwa pliku
void readFromFile(Array &arr, std::string fileName);

/// Funkcja zapisuje dane do pliku
/// @param arr Referencja do modyfikowanej tabeli
/// @fileName Nazwa pliku
void saveToFile(Array &arr, std::string fileName);
