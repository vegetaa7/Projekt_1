	#ifndef KLASA_ZESTAWY_H
	#define KLASA_ZESTAWY_H
	#include <vector>
	#include "klasa_karta.h"
	#include "klasa_kolor.h"
	#include "klasa_rodzaj.h"
	using namespace std;

	class Zestawy {
	private:
    	vector<Karta> Wszystkie;

	public:
    
    	Zestawy(vector<Karta>); // Przeciazone musze stworzyć
    	 // Jak ma wygladac desstruktor?????
    	void Drukowanie_zawartosci(); // ++
    	Karta Zwracanie_najstarszej();
    	Karta Zwracanie_najmlodszej();
   	// Dodawanie_do_zestawu();
   	// Suma_zestawow();
   	// Utworz_pelna_talie();
	};

	#endif
