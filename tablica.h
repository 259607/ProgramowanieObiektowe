/// @file


/** \brief Funkcja tworzaca tablice
 * 
 * @param wiersze [in] Funkcja pobiera dane na temat wysokosci tabeli
 * @param kolumny [in] Funkcja pobiera dane na temat szerokosci tabeli
 */ 
double** stworzTablica(int wiersze, int kolumny);

/** \brief Funkcja wprowadzajaca dane do tablicy
 * 
 * @param wiersze [in] Funkcja pobiera dane na temat wysokosci
 * @param kolumny [in] Funkcja pobiera dane na temat szerokosci
 * @param tablica [in] Funkcja pobierane dane na temat tablicy
 * @param wprowadzonaWartosc [in] Funkcja pobiera dane wprowadzonej wartosci przez uzytkownika
 */ 
void wpiszTablica(double** tablica, int wspolrzedna_x, int wspolrzedna_y, int wprowadzonaWartosc);
