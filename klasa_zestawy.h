#ifndef KLASA_ZESTAWY_H
#define KLASA_ZESTAWY_H

#include "klasa_karta.h"
#include "klasa_kolor.h"
#include "klasa_rodzaj.h"

class Zestawy {
private:
    vector<Karta> Wszystkie;

public:
    Zestawy();
    Zestawy(vector<Karta>); // Przeciazone musze stworzyć
    ~Zestawy(); // Jak ma wygladac desstruktor?????
    Drukowanie_zawartosci(); // ++
    Karta Zwracanie_najstarszej();
    Karta Zwracanie_najmlodszej();
   // Dodawanie_do_zestawu();
   // Suma_zestawow();
   // Utworz_pelna_talie();
};

#endif
