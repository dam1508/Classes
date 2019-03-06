#include <iostream>
#include "Mage.h"

using namespace std;

void Mage::hurt( int damage )
{
    hp-=damage;
}

int Mage::fireball()
{
    mana-=40;
    return magic_power*2;
}

int Mage::frostball()
{
    mana-=15;
    return magic_power*0.75;
}

int Mage::weapon_attack()
{
    return 5;
}
