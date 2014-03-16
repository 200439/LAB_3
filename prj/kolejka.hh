#ifndef KOLEJKA_HH
#define KOLEJKA_HH
#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
 
using namespace std;

/*!
 * \file
 * \brief Definicja klasy kolejka  
 *
 */

struct element_k {
	int liczba;
	element_k *nastepny;
};
 
/*! \brief Definicja klasy kolejka 
 * 
 */
class Kolejka {
	element_k *pierwszy;
	element_k *ostatni;
	int ilosc;
  public:
	Kolejka(){ pierwszy = ostatni = NULL; ilosc = 0; }
	~Kolejka(){
		while(pierwszy) {
		element_k *temp;
		pierwszy = pierwszy->nastepny;
		delete temp;
			}
		}
	
	void enqueue(int x);
	void dequeue();
	int size();
	void wyswietl();
	bool isEmpty();
	
};
#endif
