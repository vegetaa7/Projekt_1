#include <sstream>
#include <string>
#include "klasa_karta.h"
#include "klasa_rodzaj.h"
#include "klasa_kolor.h"
Karta::Karta(string nazw)
 {
    stringstream ss(nazw);
    string rodzaj;
    string kolor;
    nazwa=nazw;
    ss >> rodzaj;
    ss >> kolor;
    Kolor c(kolor);
    Rodzaj r(rodzaj)

    starszenstwo = c.getstarszenstwo()+r.getstarszenstwo();




};
