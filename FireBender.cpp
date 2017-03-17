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
	if(typeid(*b)==typeid(FireBender)){
		b->setHP(vida-((ataque+smash)-defensa));
		atk=(this->ataque*0.15)+ataque+smash;
	}else{

		b->setHP(vida-((ataque+smash)-defensa));
		atk=this->ataque-defensa+smash;
	}
	return atk;
	
}

int FireBender::AtaqueRegular(Bender* b){
	int vida=b->getHP();
	int atk;
	int defensa=b->Defensa(this);
	int smash=0;
	if(smashHit()){
		smash=ataque*0.50;
	}
	b->setHP(vida-(ataque+smash-defensa));
	return atk-defensa;
}

int FireBender::Defensa(Bender* b){
	b->getAtaque();
	return ataque*0.20;
}

int FireBender::Ofensa(Bender* b){
	
}

FireBender::~FireBender(){

}







