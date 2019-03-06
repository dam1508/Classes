all: start

start: main.o Warrior.o Mage.o
	g++ main.o Warrior.o Mage.o -o start

main.o: main.cpp
	g++ main.cpp -c main.cpp

Warrior.o: Warrior.cpp
	g++ -c Warrior.cpp

Mage.o: Mage.cpp
	g++ -c Mage.cpp
