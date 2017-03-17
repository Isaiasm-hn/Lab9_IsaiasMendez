#include "Bender.h"

using namespace std;

Bender::Bender(){

}
bool Bender::smashHit(){
	int x;
	srand(time(NULL));
	

	if(this->suerte>=0 && this->suerte<=5){
		x=rand() % 1000 + 1;
		if(x==50){
			return true;
		}
	}else if(this->suerte>6 && this->suerte<10){
		x=rand() % 100 + 1;
		if(x%5==0){
			return true;
		}
	}else if(this->suerte==10){
		x=rand() % 10 + 1;
		if(x % 3==0){
			return true;
		}
	}else{
		return false;
	}
}

Bender::Bender(string pNombre,int pHP,int pFuerza, int pAtaque, int pSuerte){
	this->nombre=pNombre;	
	this->hp=pHP;
	this->fuerza=pFuerza;
	this->ataque=pAtaque;
	this->suerte=pSuerte;
}

void Bender::setNombre(string pNombre){
	this->nombre=pNombre;
}

string Bender::getNombre(){
	return nombre;
}

void Bender::setHP(int pHP){
	this->hp=pHP;
}

int Bender::getHP(){
	return hp;
}

void Bender::setFuerza(int pFuerza){
	this->fuerza=pFuerza;
}

int Bender::getFuerza(){
	return fuerza;
}

void Bender::setSuerte(int pSuerte){
	this->suerte=pSuerte;
}

int Bender::getSuerte(){
	return suerte;
}
void Bender::setAtaque(int pAtaque){
	this->ataque=pAtaque;
}

int Bender::getAtaque(){
	return ataque;
}


int Bender::AtaqueEspecial(Bender* h){
	return 0;
}

int Bender::AtaqueRegular(Bender* h){
	return 0;
}

int Bender::Defensa(Bender* h){
	return 0;
}

int Bender::Ofensa(Bender* h){
	return 0;
}

Bender::~Bender(){
	
}






