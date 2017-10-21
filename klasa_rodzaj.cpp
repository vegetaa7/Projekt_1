#include <klasa_rodzaj.h>
#include <string>
Rodzaj::Rodzaj(string nazw)
{
    nazwa=nazw;

    if(nazw=="walet") starszenstwo =10;
    else if(nazw=="dama") starszenstwo =11;
    else if(nazw=="krol") starszenstwo =12;
    else if(nazw=="as") starszenstwo =13;
    else starszenstwo=stoi(nazw)-1;
    };

int Rodzaj::getstarszenstwo(){

    return starszenstwo;
}
