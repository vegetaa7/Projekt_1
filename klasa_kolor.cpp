	#include "klasa_kolor.h"
	#include <string>
	using namespace std;
	Kolor::Kolor(string nazw)
	{
	nazwa=nazw;
	if(nazw=="trefl") starszenstwo =0;
	if(nazw=="karo") starszenstwo =13;
	if(nazw=="kier") starszenstwo =26;
	if(nazw=="pik") starszenstwo =39;

   	 }
	int Kolor::getstarszenstwo(){
	return starszenstwo;
	}
