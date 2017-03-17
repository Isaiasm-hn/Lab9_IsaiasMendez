#include "Bender.h"

#ifndef EARTHBENDER_H
#define EARTHBENDER_H

class EarthBender:public Bender{
	public:
		EarthBender(string,int,int,int,int);
		int AtaqueEspecial(Bender*);
		int AtaqueRegular(Bender*);
		int Defensa(Bender*);
		int Ofensa(Bender*);
		~EarthBender();
	
};
#endif