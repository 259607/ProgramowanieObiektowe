1. Interfejs użytkownika
	- Informacja o działaniu programu
	- Menu
	   - Pobieranie wartości (rozm. tablicy) od użytkownika
	      - Liczba wierszy: liczba kolumn:
	   - Edycja wartości w tablicy
	      - nr wiersza: nr kolumny:
	   - Kasowanie wartości w tablicy:
	      - nr wiersza: nr kolumny:
	   - Możliwość wyświetlenia tablicy


2. Funkcje
	- Program uruchamiający
	- Projekt
	- zbiór modułów kodu źródłowego
	   - main.cpp
	      - Funkcja główna pobierająca pozostałe moduły
	   - tablica.cpp
	      - tablica dynamiczna
	      - Funkcja pobierająca wartości (rozm. tablicy) od użytkownika
	         - l.wierszy: l.kolumn:
	      - Funkcja edytująca zawartość danej komórki
	         - nr wiersza: nr kolumny: 
	   - tablica_wyw.cpp
	      - Funkcja wyświetlająca zawartość tablicy
	   - menu.cpp
	      - Wybór działania za pomocą funkcji switch: *zmień rozmiar 			tablicy *aktualizuj zawartość tablicy *wyświetl tablicę 			*zakończ działanie programu
	      - Po wykonaniu działań wróć do menu

3. Pliki

	- wprowadzanie danych:
	   - jeśli arkusz nie istnieje, tworzy się nowy arkusz z danymi, które wpisaliśmy do tablicy
	   - jeśli plik arkusza już istnieje możemy:
	      - wczytać istniejący arkusz
	      - zapisać nowy arkusz
	
	- zapis danych:
	   - odbywa się za pomoca funkcji, do pliku
