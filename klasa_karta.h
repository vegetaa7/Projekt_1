#ifndef KLASA_KARTA_H
#define KLASA_KARTA_H

#include "klasa_rodzaj.h"
#include "klasa_kolor.h"

class Karta
 {
private:
    string nazwa;
    int starszenstwo;

public:
    // argument 'napis' jest w formie rodzaj_kolor, np. '2_trefl'
    Karta();
    Karta(string);

};


#endif
