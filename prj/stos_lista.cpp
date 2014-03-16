#include "stos_lista.hh"

using namespace std;

/*!
 * \file
 * \brief Definicje funkcji klasy Stos_lista 
 *
 */

/*! \brief Sprawdza dlugosc stosu
 * 
 * Zwraca wartosc ilosc
 */
int Stos_lista::size() {
	return ilosc;
	}

/*! \brief Sprawdza czy sa jakies elementy
 * 
 * Zwraca true gdy nie ma elementow, false w przeciwnym razie
 */
bool Stos_lista::isEmpty() {
	if (ilosc==0)
	return true;}

/*! \brief Dodaje element na koncu stosu
 * 
 */
void Stos_lista::push (int x) {
	element_l *nowy = new element_l;
	nowy->liczba=x;
	nowy->nastepny=top;
	top=nowy;
	ilosc++;
}

/*! \brief Usuwa ostatni element listy
 * 
 */
void Stos_lista::pop() {
	element_l *pom=new element_l;
if(top==NULL) {cout<<"Brak elementow"<<endl; exit(1);}
	pom = top;
	top=top->nastepny;
	delete pom;
}

/*! \brief Wyswietla zawartosc listy
 * 
 */
void Stos_lista::wyswietl() {
	element_l *pom;
	pom = top;
	while (pom) {
		cout << pom->liczba << " ";
		pom = pom->nastepny;
	}
	cout<<endl;
}
