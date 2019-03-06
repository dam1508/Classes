#ifndef MAGE_H
#define MAGE_H
#include <iostream>

using namespace std;

class Mage
{
    public:

    int hp;
    int mana;
    int magic_power;

    void hurt( int damage );
    int fireball();
    int frostball();
    int weapon_attack();
};

#endif
