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
	benders.push_back(new EarthBender("ElMaracucho",500,0,60,6));
	benders.push_back(new AirBender("ElGuajiro",500,0,60,5));
	benders.push_back(new WaterBender("Rambo",500,0,60,4));
	benders.push_back(new FireBender("Batman",500,0,60,10));

	int c;
	do{
		cout<<"1) Simulacion\n"<<
			  "2) salir\n"<<
			  "Ingrese Opcion: ";
		cin>>c;	  
		switch(c){
			case 1:{
				bool win;
				int turno;
				Bender* p1=benders.at(0);
				Bender* p2=benders.at(1);
				while(win){
					if(turno=1){
						cout<<"Player 1";

						turno=2;
					}else{
						cout<<"Player 2";


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