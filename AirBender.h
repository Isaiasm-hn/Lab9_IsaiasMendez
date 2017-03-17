#include <Bender>

class AirBender{
	public:
		AirBender(string,int,int,int);

		int AtaqueEspecial(Bender*)=0;
		int AtaqueRegular(Bender*)=0;
		int Defensa(Bender*)=0;
		int Ofensa(Bender*)=0;
		
		~AirBender();
	
};