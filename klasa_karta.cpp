#include <sstream>
#include <string>
#include <klasa_karta.h>
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
