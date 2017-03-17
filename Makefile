Main.o: main.o Bender.o 
	g++ main.cpp Bender.o -o main

main.o:	main.cpp Bender.h
	g++ -c main.cpp

Bender.o: Bender.cpp Bender.h
	g++ -c Bender.cpp

clean:	
	rm	*.o main