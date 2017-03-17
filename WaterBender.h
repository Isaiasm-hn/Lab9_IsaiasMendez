#include "Bender.h"

class WaterBender:public Bender{
public:
	
	WaterBender(string,int,int,int,int);
	int AtaqueEspecial(Bender*);
	int AtaqueRegular(Bender*);
	int Defensa(Bender*);
	int Ofensa(Bender*);
	
	~WaterBender();
	
};