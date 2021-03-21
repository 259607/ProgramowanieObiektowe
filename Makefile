program.out : main.o tablica.o menu.o tablica_wysw.o
	g++ -o $@ $^
main.o : main.cpp
	g++ -o $@ $^
menu.o : menu.cpp
	g++ -o $@ $^
tablica.o : tablica.cpp
	g++ -o $@ $^
tablica_wysw.o : tablica_wysw.cpp
	g++ -o $@ $^
