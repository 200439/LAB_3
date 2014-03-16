#ifndef STOS_LISTA_HH
#define STOS_LISTA_HH
#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>

using namespace std;

/*!
 * \file
 * \brief Definicja stosu operujacego na liscie 
 *
 */

struct element_l {
	int liczba;
	element_l *nastepny;
};

/*! \brief Definicja stosu operujacego na liscie 
 * 
 */
class Stos_lista {
	element_l *pierwszy;
	element_l *top;
	int ilosc;
  public:
	Stos_lista(){ top = NULL; ilosc = 0; }
	~Stos_lista(){
		while(top) {
		element_l *temp;
		top = top->nastepny;
		delete temp;
			}
		}
	
	void push(int x);
	void pop();
	int size();
	void wyswietl();
	bool isEmpty();
	
};
#endif
