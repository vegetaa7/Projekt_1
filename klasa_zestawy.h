	#ifndef KLASA_ZESTAWY_H
	#define KLASA_ZESTAWY_H
	#include <vector>
	#include <string>
	#include "klasa_karta.h"
	#include "klasa_kolor.h"
	#include "klasa_rodzaj.h"
	#include<iostream>

	using namespace std;

	class Karta;
	class Zestawy {
	private:
    	vector<Karta> Wszystkie;

	public:

    	Zestawy(vector<Karta>); // Przeciazone musze stworzyć
    	 // Jak ma wygladac desstruktor?????
    	void Drukowanie_zawartosci(); // ++
    	Karta Zwracanie_najstarszej();
    	Karta Zwracanie_najmlodszej();
    	//friend bool Karta::operator<(Karta);
   	// Dodawanie_do_zestawu();
   	// Suma_zestawow();
   	// Utworz_pelna_talie();
	};

	#endif
