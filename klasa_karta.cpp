	#include <sstream>
	#include <string>
	#include "klasa_karta.h"
	#include "klasa_rodzaj.h"
	#include "klasa_kolor.h"
	#include<iostream>

	using namespace std;
	Karta::Karta(string nazw)
 	{
    	stringstream ss(nazw);
    	string rodzaj;
    	string kolor;
    	nazwa=nazw;
    	ss >> rodzaj;
    	ss >> kolor;
    	Kolor c(kolor);
    	Rodzaj r(rodzaj);

    	starszenstwo = c.getstarszenstwo()+r.getstarszenstwo();

	}

	string Karta::getnazwa(){

	return nazwa;

	}
	int Karta::getstarszenstwo(){

	return starszenstwo;

}
bool Karta::operator<(Karta k1){

	if(getstarszenstwo()<k1.getstarszenstwo())
	return true;
	else return false;

}

