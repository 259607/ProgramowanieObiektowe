all: main.o tablica.o tablica_wysw.o pliki.o menu.o
	g++  main.o tablica.o tablica_wysw.o pliki.o menu.o -o main -std=c++11 -Wall -Wextra

main.o: main.cpp menu.h
	g++ -c main.cpp -std=c++11 -Wall -Wextra

tablica_wysw.o: tablica_wysw.cpp tablica_wysw.h
	g++ -c tablica_wysw.cpp -std=c++11 -Wall -Wextra

tablica.o: tablica.cpp tablica.h
	g++ -c tablica.cpp -std=c++11 -Wall -Wextra

pliki.o: pliki.cpp pliki.h
	g++ -c pliki.cpp -std=c++11 -Wall -Wextra

menu.o: menu.cpp menu.h
	g++ -c menu.cpp -std=c++11 -Wall -Wextra

clean:
	rm -r *.o
