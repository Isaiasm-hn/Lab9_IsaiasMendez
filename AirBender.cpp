#include "AirBender.h"
#include "EarthBender.h"

AirBender::AirBender(string pNombre,int pHP,int pFuerza, int pAtaque, int pSuerte):Bender(pNombre,pHP,pFuerza,pAtaque,pSuerte){

}

int AirBender::AtaqueEspecial(Bender* b){
	int vida=b->getHP();
	int atk;
	int defensa=b->Defensa(this);
	int smash=0;
	if(smashHit()){
		smash=ataque*0.50;
	}
	if(typeid(*b)==typeid(EarthBender)){
		b->setHP(vida-((ataque+smash)-defensa));
		atk=(this->ataque*0.25)+ataque+smash;
	}else{

		b->setHP(vida-((ataque+smash)-defensa));
		atk=this->ataque-defensa+smash;
	}
	return atk;
}

int AirBender::AtaqueRegular(Bender* b){
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

int AirBender::Defensa(Bender* b){
	b->getAtaque();
	return ataque*0.10;
}

int AirBender::Ofensa(Bender* b){
	
}

AirBender::~AirBender(){
	
}







