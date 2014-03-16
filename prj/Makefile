__start__: struktury
	./struktury

struktury: stos_tab.o stos_lista.o kolejka.o tablica.o zegar.o main.o
	c++ main.o stos_tab.o stos_lista.o kolejka.o tablica.o zegar.o -o struktury

stos_tab.o: stos_tab.cpp
	c++ -c stos_tab.cpp -o stos_tab.o

stos_lista.o: stos_lista.cpp
	c++ -c stos_lista.cpp -o stos_lista.o

kolejka.o: kolejka.cpp
	c++ -c kolejka.cpp -o kolejka.o

tablica.o: tablica.cpp
	c++ -c tablica.cpp -o tablica.o

zegar.o: zegar.cpp
	c++ -c zegar.cpp -o zegar.o

main.o: main.cpp
	c++ -c main.cpp -o main.o

clean:
	rm -f *.o



