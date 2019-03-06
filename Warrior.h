#ifndef WARRIOR_H
#define WARRIOR_H
#include <iostream>

using namespace std;

class Warrior
{
    public:

    int hp;
    int strength;
    int armor;
    int rage;

    void hurt( int damage );
    int weapon_attack();
    int slam();
    int block();

};

#endif // WARRIOR_H
