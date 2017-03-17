#include "Bender.h"
#ifndef AIRBENDER_H
#define AIRBENDER_H
class AirBender: public Bender{
	public:
		AirBender(string,int,int,int,int);
		int AtaqueEspecial(Bender*);
		int AtaqueRegular(Bender*);
		int Defensa(Bender*);
		int Ofensa(Bender*);
		
		~AirBender();
	
};
#endif
