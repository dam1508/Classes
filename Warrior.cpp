#include <iostream>
#include "Warrior.h"

using namespace std;

void Warrior::hurt( int damage )
{
    hp-=damage;
}

int Warrior::weapon_attack()
{
    rage+=10;
    return strength-10;
}

int Warrior::slam()
{
    rage-=20;
    return strength+=10;
}

int Warrior::block()
{
    rage-=15;
    armor+=30;
}
