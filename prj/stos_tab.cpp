#include "stos_tab.hh"

using namespace std;

/*!
 * \file
 * \brief Definicje funkcji klasy Stos_tab 
 *
 */

/*! \brief Sprawdza dlugosc stosu
 * 
 * Zwraca wartosc ilosc
 */
int Stos_tab::size() {
	return (top+1);
	}

/*! \brief Sprawdza czy sa jakies elementy
 * 
 * Zwraca true gdy nie ma elementow, false w przeciwnym razie
 */
bool Stos_tab::isEmpty() {
	return (top<0);
	}

/*! \brief Usuwa ostatni element tablicy
 * 
 */
int Stos_tab::pop() {
	if (isEmpty()) { 
		cout<<"Stos jest pusty, nie mozna pobrac elementu."<<endl;
		return 1;}
	return tab[top--];
	}

/*! \brief Usuwa ostatni element tablicy
 * 
 * Usuwa ostatni element tablicy, po czym zmniejsza ja o 25%, by nie zajmowac niepotrzebnej pamieci
 */
int Stos_tab::pop_2() {
	if (isEmpty()) { 
		cout<<"Stos jest pusty, nie mozna pobrac elementu."<<endl;
		return 1;}
	if ((top+1)==(pojemnosc/4)) {
	int bufor[pojemnosc];
	for(int i=0; i<pojemnosc; i++)
        bufor[i]=tab[i];
	pojemnosc=pojemnosc/4;
	tab = new int [pojemnosc];

	for(int i=0; i<pojemnosc; i++)
        tab[i]=bufor[i];
	top--;
  } 
  else {
	top--;	
	return tab[top];	
	}
}

/*! \brief Dodaje element na koncu stosu
 * 
 * Powieksza tablice o 1 przy kazdym wywolaniu funkcji
 */
void Stos_tab::push(int e) {
	int bufor[pojemnosc]; 		
	for(int i=0; i<pojemnosc; i++)
        bufor[i]=tab[i];
	pojemnosc++;
	tab = new int [pojemnosc];		
	for(int i=0; i<pojemnosc; i++)
        tab[i]=bufor[i]; 
	top++;			
	tab[top]=e;	
	}

/*! \brief Dodaje element na koncu stosu
 * 
 * Powieksza tablice o polowe przy kazdym wywolaniu funkcji
 */
void Stos_tab::push_2(int e) {
  if ((top+1)==pojemnosc) {
	int bufor[pojemnosc];
	for(int i=0; i<pojemnosc; i++)
        bufor[i]=tab[i];
	if (pojemnosc==0) {pojemnosc=pojemnosc+1;}
	else {
	pojemnosc=2*pojemnosc;}
	tab = new int [pojemnosc];

	for(int i=0; i<pojemnosc; i++)
        tab[i]=bufor[i];
	top++;				
	tab[top]=e;
  } 
  else {
	top++;			
	tab[top]=e;	
	}
}

/*! \brief Wyswietla zawartosc stosu
 * 
 */
void Stos_tab::wyswietl() {
	for(int i=0; i<=top; i++) { cout<<tab[i]<<" ";}
	cout<<endl;
	}
