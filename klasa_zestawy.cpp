#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include "klasa_zestawy.h"
#include "klasa_rodzaj.h"
#include "klasa_kolor.h"
#include "klasa_karta.h"

/*

Kolor operator <( const Kolor & kolor) { // TWORZENIE OPERATOROW
    return this->rodzaj < kolor->rodzaj;


    if (this>rodzaj < kolor->rodzaj)
      return true;
    else
      return false;

}
*/
/*
Zestawy::Utworz_pelna_talie(){

string kolor;
int wartosc;
string figura;
stringstream ss;
string str;
string nazwa;



for(int i=0;i<52;i++){

wartosc=(i%13)+2;
if(i<13) kolor="trefl";
else if(i<26) kolor="karo";
else if(i<39) kolor="kier";
else if(i<52) kolor="pik";

if(wartosc<11){

ss << wartosc;
str = ss.str();
figura=str;
}

else if(wartosc==11) figura="walet";
else if(wartosc==12) figura="dama";
else if(wartosc==13) figura="krol";
else if(wartosc==14) figura="as";

nazwa= (figura+" "+kolor);

Karta k(nazwa);

Wszystkie.push_back(k);

}
}
*/
Zestawy::Drukowanie_zawartosci(){

vector<Karta>::iterator itr;

itr=Wszystkie.cbegin();

while(itr!=Wszystkie.cend()){

cout<< itr->nazwa<<" ";
itr++;
}

}

Karta Zestawy::Zwracanie_najstarszej(){

    assert !Wszystkie.empty();

    vector<Karta>:: iterator najwiekszy=Wszystkie.cbegin();//!!!!!!!!!!!

    for(vector<Karta>::iterator itr=Wszystkie.cbegin();(itr+1)!=Wszystkie.cend();itr++){
        if( (*najwiekszy)<(*(itr+1))
            najwiekszy=(itr+1);
    }
    return *najwiekszy;
}

Karta Zestawy::Zwracanie_najmlodszej(){

assert !Wszystkie.empty();

    vector<Karta>:: iterator najmniejszy=Wszystkie.cbegin();//!!!!!!!!!!!

    for(vector<Karta>::iterator itr=Wszystkie.cbegin();(itr+1)!=Wszystkie.cend();itr++){
        if( (*najmniejszy)>(*(itr+1))
            najmniejszy=(itr+1);
    }
    return *najmniejszy;





}

/*void Zestawy::Dodawanie_do_zestawu(){





}
void Zestawy::Suma_zestawow(){







}

*/










