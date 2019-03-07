CFLAGS := --debug

all: start

start: main.o Warrior.o Mage.o
	g++ $(CFLAGS)  main.o Warrior.o Mage.o -o start

main.o: main.cpp
	g++ $(CFLAGS) main.cpp -c main.cpp

Warrior.o: Warrior.cpp
	g++ $(CFLAGS) -c Warrior.cpp

Mage.o: Mage.cpp
	g++ $(CFLAGS) -c Mage.cpp
