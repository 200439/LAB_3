#ifndef STOSTAB_HH
#define STOSTAB_HH

#include <iostream>
#include <fstream>
#include <sys/time.h>
#include <cstdlib>
using namespace std;

/*!
 * \file
 * \brief Definicja stosu operujacego na tablicach 
 *
 */

/*! \brief Definicja stosu operujacego na tablicach 
 * 
 */
class Stos_tab {	
	public:	
	int pojemnosc;	//wielkosc tablicy
	int *tab;	
	int top;		//nr indeksu najwyzszego elementu
	
	Stos_tab() { pojemnosc=0, tab=new int[pojemnosc], top=-1; }
	~Stos_tab() { delete tab; }
	int pop();
	int pop_2();
	void push(int e);
	void push_2(int e);
	int size();
	bool isEmpty();
	void wyswietl();
	

};
#endif

