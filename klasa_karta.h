	#ifndef KLASA_KARTA_H
	#define KLASA_KARTA_H

	#include "klasa_rodzaj.h"
	#include "klasa_kolor.h"
	#include<iostream>
	#include<string>
	using namespace std;

	class Karta
 	{
	private:
    	string nazwa;
    	int starszenstwo;

	public:
    	// argument 'napis' jest w formie rodzaj_kolor, np. '2_trefl'
    	Karta();
    	Karta(string);
	string getnazwa();
	int getstarszenstwo();
	bool operator<(Karta);
	};


#endif
