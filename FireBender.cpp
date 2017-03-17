#include "FireBender.h"
#include "AirBender.h"

FireBender::FireBender(string pNombre,int pHP,int pFuerza, int pAtaque, int pSuerte):Bender(pNombre,pHP,pFuerza,pAtaque,pSuerte){

}

int FireBender::AtaqueEspecial(Bender* b){
	int vida=b->getHP();
	int atk;
	int defensa=b->Defensa(this);
	int smash=0;
	if(smashHit()){
		smash=this->ataque*0.50;
	}
	if(typeid(*b)==typeid(AirBender)){
		b->setHP(vida-((ataque+smash)-defensa));
		atk=(this->ataque*0.25)+ataque+smash;
	}else{

		b->setHP(vida-((ataque+smash)-defensa));
		atk=this->ataque-defensa+smash;
	}
	return atk;
}

int FireBender::AtaqueRegular(Bender* h){
	
}

int FireBender::Defensa(Bender* h){
	
}

int FireBender::Ofensa(Bender* h){
	
}
FireBender::~FireBender(){

}






