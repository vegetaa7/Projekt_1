	#include <iostream>
	#include <sstream>
	#include <string>
	#include <vector>
	#include "klasa_zestawy.h"
	#include "klasa_rodzaj.h"
	#include "klasa_kolor.h"
	#include "klasa_karta.h"
	#include <assert.h>
	using namespace std;

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


	Zestawy::Zestawy(vector<Karta> wklej){

	Wszystkie=wklej;



	}



	void Zestawy::Drukowanie_zawartosci(){

	vector<Karta>::iterator itr;

	itr=Wszystkie.begin();

	while(itr!=Wszystkie.end()){

	cout<< itr->getnazwa()<<" ";
	itr++;
	}

	}

	Karta Zestawy::Zwracanie_najstarszej(){

    	assert (Wszystkie.empty()!=0);

    	vector<Karta>::iterator najwiekszy=Wszystkie.begin();//!!!!!!!!!!!

    	for(vector<Karta>::iterator itr=Wszystkie.begin();(itr+1)!=Wszystkie.end();itr++){
        if( ((*(itr+1)).getstarszenstwo())>((*najwiekszy).getstarszenstwo()))
            najwiekszy=(itr+1);
    	}
    	return *najwiekszy;
	}

	Karta Zestawy::Zwracanie_najmlodszej(){

	assert (Wszystkie.empty()!=0);

   	 vector<Karta>::iterator najmniejszy=Wszystkie.begin();//!!!!!!!!!!!

    	for(vector<Karta>::iterator itr=Wszystkie.begin();(itr+1)!=Wszystkie.end();itr++){
        if( ((*najmniejszy).getstarszenstwo())>((*(itr+1)).getstarszenstwo()))
            najmniejszy=(itr+1);
    	}
    	return *najmniejszy;





	}

	/*void Zestawy::Dodawanie_do_zestawu(){





	}
	void Zestawy::Suma_zestawow(){







	}

	*/










