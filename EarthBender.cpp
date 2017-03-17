#include "EarthBender.h"
#include "WaterBender.h"

EarthBender::EarthBender(string pNombre,int pHP,int pFuerza, int pAtaque, int pSuerte):Bender(pNombre,pHP,0,pAtaque,pSuerte){

}

int EarthBender::AtaqueEspecial(Bender* b){
	int vida=b->getHP();
	int atk;
	int defensa=b->Defensa(this);
	int smash=0;
	if(smashHit()){
		smash=ataque*0.50;
	}
	if(typeid(*b)==typeid(WaterBender)){
		b->setHP(vida-((ataque+smash)-defensa));
		atk=(this->ataque*0.25)+ataque+smash;
	}else{

		b->setHP(vida-((ataque+smash)-defensa));
		atk=this->ataque-defensa+smash;
	}
	return atk;
}

int EarthBender::AtaqueRegular(Bender* b){
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

int EarthBender::Defensa(Bender* b){
	b->getAtaque();
	return ataque*0.15;
}

int EarthBender::Ofensa(Bender* b){
	return -1;
}

EarthBender::~EarthBender(){
	
}







