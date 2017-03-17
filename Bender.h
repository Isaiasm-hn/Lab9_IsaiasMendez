#include <iostream>
#include <string>

using namespace std;


class Bender{
	private:
		string nombre;
		int hp;
		int fuerza;
		int ataque;
		int suerte;
	public:

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
		
		 virtual int AtaqueEspecial(Bender*)=0;
		 virtual int AtaqueRegular(Bender*)=0;
		 virtual int Defensa(Bender*)=0;
		 virtual int Ofensa(Bender*)=0;



		 Bender(string,int,int,int,int);
		 virtual ~Bender();
	
};