#include "Bender.h"
#ifndef FIREBENDER_H
#define FIREBENDER_H
class FireBender:public Bender{
public:

	FireBender(string,int,int,int,int);
	int AtaqueEspecial(Bender*);
	int AtaqueRegular(Bender*);
	int Defensa(Bender*);
	int Ofensa(Bender*);
	
	~FireBender();
	
};
#endif