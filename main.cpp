#include <iostream>
#include <string>
#include <vector>
#include <klasa_zestawy.h>
#include <klasa_rodzaj.h>
#include <klasa_kolor.h>
#include <klasa_karta.h>

using namespace std;

void test1()
{
    vector<Karta> karty;
    karty.push_back(Karta("2 trefl"));
    karty.push_back(Karta("8 karo"));
    Zestawy zestaw(karty);

    cout<<zestaw.Zwracanie_najstarszej().nazwa<<" "<<zestaw.Zwracanie_najstarszej().starszenstwo;
}

int main()
{
    cout << "Nazwy kart wpisujemy w nastepujacy sposob: najpierw jej numer/rodzaj: 2,3,4,5,6,7,8,9,10,walet,dama,krol,as. \n"
        <<"Natomiast po spacji wpisujemy kolor: trefl,karo,kier lub pik"  << endl;

        // Zadania: 1. Jak ma wygladac kontakt z uzytkownikiem 2. W jaki sposob przeprowadzic testy jednostkowe -> nawiazanie do przedmiotu
        // algorytmy i str. danych 2.

    test1();

    return 0;
}
