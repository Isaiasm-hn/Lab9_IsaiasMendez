#include <iostream>
#include <string>
#include <vector>

//includes de clases
#include "FireBender.h"
#include "WaterBender.h"
#include "EarthBender.h"
#include "AirBender.h"

using namespace std;

int tipoBender(){
	int opc;
	do{
	cout<<"1) WaterBender\n"<<
		  "2) EarthBender\n"<<
		  "3) AirBender\n"<<
		  "4) FireBender\n"<<
		  "Ingrese Bender";
	cin>>opc;
	if(opc<1 || opc>4){
		cout<<"Error Opcion incorrecta";
	}else{
		return opc;
	}
	}while(opc<1 || opc>4);

}

int main(){
	vector<Bender*> benders;
	benders.push_back(new EarthBender("ElMaracucho",400,0,15,6));
	benders.push_back(new AirBender("ElGuajiro",600,0,20,5));
	benders.push_back(new WaterBender("Rambo",500,0,60,4));
	benders.push_back(new FireBender("Batman",800,0,60,10));

	int c;
	do{
		cout<<"1) Simulacion\n"<<
			  "2) salir\n"<<
			  "Ingrese Opcion: ";
		cin>>c;	  
		switch(c){
			case 1:{
				bool win=true;
				int turno=1;
				Bender* p1=benders.at(0);
				Bender* p2=benders.at(1);
				while(win){
					if(turno=1){
						int opc_p1;
						cout<<"Player 1\n";
						cout<<"1) Ataque especia\n"<<
							  "2) Ataque Regular\n"<<
							  "3) correr \n"<<
							  "Ingrese Opcion: ";
						cin>>opc_p1;
						switch(opc_p1){
							case 1:{
								cout<<"Ataque Especial\n";
								cout<<p1->AtaqueEspecial(p2)<<"\n";
								
								break;
							}
							case 2:{
								cout<<"Ataque Especial\n";
								cout<<p1->AtaqueRegular(p2)<<"\n";
								break;
							}case 3:{
								cout<<"Gano el player 2\n";
								win=false;
								break;
							}
						}
						if(p2->getHP()<=0){
							cout<<"Gano el player 1\n";
							win=false;
						}
						cout<<endl;
						turno=2;
					}else{
						int opc_p2;
						cout<<"Player 2\n";
						cout<<"1) Ataque especial\n"<<
							  "2) Ataque Regular\n"<<
							  "3) correr \n"<<
							  "Ingrese Opcion: ";
						cin>>opc_p2;
						switch(opc_p2){
							case 1:{
								cout<<"Ataque Especial\n";
								cout<<p2->AtaqueEspecial(p1)<<"\n";
								
								break;
							}
							case 2:{
								cout<<"Ataque Especial\n";
								cout<<p2->AtaqueRegular(p1)<<"\n";
								break;
							}case 3:{
								cout<<"Gano el player 1\n";
								win=false;
								break;
							}
						}
						if(p1->getHP()<=0){
							cout<<"Gano el player 1\n";
							win=false;
						}
						cout<<endl;

						turno=1;
					}
				}
				break;
		}
			case 2:{
	
				break;
			}
		}
	}while(c!=2);

	return 0;
}