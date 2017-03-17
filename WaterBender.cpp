#include "WaterBender.h"
#include "FireBender.h"

WaterBender::WaterBender(string pNombre,int pHP,int pFuerza, int pAtaque, int pSuerte):Bender(pNombre,pHP,pFuerza,pAtaque,pSuerte){

}

int WaterBender::AtaqueEspecial(Bender* b){
	int vida=b->getHP();
	int atk;
	int defensa=b->Defensa(this);
	int smash=0;
	if(smashHit()){
		smash=this->ataque*0.50;
	}
	if(typeid(*b)==typeid(FireBender)){
		b->setHP(vida-((ataque+smash)-defensa));
		atk=(this->ataque*0.25)+ataque+smash;
	}else{

		b->setHP(vida-((ataque+smash)-defensa));
		atk=this->ataque-defensa+smash;
	}
	return atk;
}

int WaterBender::AtaqueRegular(Bender* b){
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

int WaterBender::Defensa(Bender* b){
	b->getAtaque();
	return ataque*0.14;
}

int WaterBender::Ofensa(Bender* b){
	
}
WaterBender::~WaterBender(){

}
