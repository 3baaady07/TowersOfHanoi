TowerOfHanoi: main.o TOH.o Pole.o Disk.o
	g++ -o TowerOfHanoi main.o TOH.o Pole.o Disk.o

main.o: main.cpp TOH.h
	g++ -c -Wall main.cpp

TOH.o: TOH.h TOH.cpp Pole.h
	g++ -c -Wall TOH.cpp

Pole.o: Pole.h Pole.cpp Disk.h
	g++ -c -Wall Pole.cpp

Disk.o: Disk.h Disk.cpp
	g++ -c -Wall Disk.cpp
	
clean:
	rm *.o TowerOfHanoi
