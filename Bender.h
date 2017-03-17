#include <iostream>
#include <string>

using namespace std;


class Bender{
	private:
		string nombre;
		int hp;
		int ataque_reg;
		int ataque_esp;
	public:

		virtual void setNombre(string);
		virtual string getNombre();

		virtual void setHP(int);
		virtual int getHP();

		virtual int AtaqueEspecial(Bender*);
		virtual int AtaqueRegular(Bender*)
		
		


		Bender();
		virtual ~Bender();
	
};