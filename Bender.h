#include <iostream>
#include <string>
#include <typeinfo>
#include <stdlib.h>
#include <time.h>


using namespace std;

#ifndef BENDER_H
#define BENDER_H
class Bender{
	protected:
		string nombre;
		int hp;
		int fuerza;
		int ataque;
		int suerte;
	public:
		 Bender();
		 Bender(string,int,int,int,int);
		 void setNombre(string);
		 string getNombre();

		 void setHP(int);
		 int getHP();

		 void setFuerza(int);
		 int getFuerza();

		 void setSuerte(int);
		 int getSuerte();

		 void setAtaque(int);
		 int getAtaque();
		 bool smashHit();
		 virtual int AtaqueEspecial(Bender*)=0;
		  
		 virtual int AtaqueRegular(Bender*)=0;
		 virtual int Defensa(Bender*)=0;
		 virtual int Ofensa(Bender*)=0;
		 



		 
		 virtual ~Bender();
	
};
#endif