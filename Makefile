Main.o: main.o Bender.o AirBender.o EarthBender.o WaterBender.o FireBender.o
	g++ main.cpp Bender.o AirBender.o EarthBender.o WaterBender.o FireBender.o -o main

main.o:	main.cpp Bender.h
	g++ -c main.cpp

Bender.o: Bender.cpp Bender.h
	g++ -c Bender.cpp

AirBender.o:	AirBender.cpp AirBender.h Bender.h
	g++ -c AirBender.cpp 

EarthBender.o:	EarthBender.cpp EarthBender.h Bender.h
	g++ -c EarthBender.cpp

WaterBender.o:	WaterBender.cpp WaterBender.h Bender.h
	g++ -c WaterBender.cpp

FireBender.o:	FireBender.cpp	FireBender.h Bender.h
	g++ -c FireBender.cpp
	
clean:	
	rm	*.o main