/// @file

/** \brief Funkcja wczytajaca z pliku dane dotyczace tablicy
 * 
 * Dane zawieraja szerokosc i wysokosc tabeli oraz dane w poszczegolnych komorkach
 * 
 * @param arkusz Glowny arkusz programu zawierajacy wszystkie dane
 */ 
double** wczytajPlik(int* wiersze, int* kolumny);

/** \brief Funkcja zapisujaca dane do pliku
 * 
 * Dane zawieraja szerokosc i wysokosc tabeli oraz dane w poszczegolnych komorkach
 * 
 * @param arkusz Glowny arkusz programu zawierajacy wszystkie dane
 */
void zapiszPlik(double **arkusz, int wiersze, int kolumny);
