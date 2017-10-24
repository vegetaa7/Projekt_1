	#ifndef KLASA_RODZAJ_H
	#define KLASA_RODZAJ_H
	#include <string>
	#include "klasa_karta.h"
	#include "klasa_kolor.h"
	using namespace std;
	class Karta;
	class Rodzaj{

	private:

	string nazwa;
	int starszenstwo;

	public:

	Rodzaj(string);
	int getstarszenstwo();
	};

	#endif
