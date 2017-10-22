	#ifndef KLASA_KOLOR_H
	#define KLASA_KOLOR_H
	#include <string>
	#include "klasa_rodzaj.h"
	#include "klasa_karta.h"
	using namespace std;

	class Kolor {
	private:
	string nazwa;
	int starszenstwo;
	public:
    
    	Kolor(string);
	int getstarszenstwo();
	};

	// Kolor k(pik)


	#endif
