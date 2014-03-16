#include "kolejka.hh"

using namespace std;

/*! \brief Sprawdza dlugosc kolejki
 * 
 * Zwraca wartosc ilosc
 */
int Kolejka::size() {
	return ilosc;
	}

/*! \brief Sprawdza czy sa jakies elementy
 * 
 * Zwraca true gdy nie ma elementow, false w przeciwnym razie
 */
bool Kolejka::isEmpty() {
	if (ilosc==0)
	return true;}

/*! \brief Dodaje element na koncu kolejki
 * 
 */
void Kolejka::enqueue (int x) {
	element_k *nowy = new element_k;
	if(ilosc) {
		ostatni->nastepny = nowy;
		nowy->liczba = x;
		nowy->nastepny = NULL;
		ostatni = nowy;
	}
	else {
		pierwszy = ostatni = nowy;
		nowy->liczba = x;
		nowy->nastepny = NULL;
	}
	ilosc++;
}

/*! \brief Usuwa pierwszy element kolejki
 * 
 */
void Kolejka::dequeue() {
	element_k *pom;
if(ilosc==0) {cout<<"Brak elementow"<<endl; exit(1);}
	pom = pierwszy;
	pierwszy = pierwszy->nastepny;
	delete pom;
	ilosc--;
}

/*! \brief Wyswietla zawartosc kolejki
 * 
 */
void Kolejka::wyswietl() {
	element_k *pom;
	pom = pierwszy;
	while (pom) {
		cout << pom->liczba << " ";
		pom = pom->nastepny;
	}
	cout<<endl;
}
