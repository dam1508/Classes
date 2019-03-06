#include <iostream>
#include "Warrior.h"
#include "Mage.h"

using namespace std;

int main()
{
    Warrior war1;

    war1.hp=120;
    war1.armor=0;
    war1.strength=15;
    war1.rage=0;

    Mage mag1;

    mag1.hp=80;
    mag1.mana=140;
    mag1.magic_power=20;

    int x,y;

    cout<<"Kim chcesz grac?"<<endl<<"1. Wojownik"<<endl<<"2. Mag"<<endl;
    cin>>x;

    if( x==1 )
    {

        while( mag1.hp>0 && war1.hp>0 )
        {
            system("clear");
            cout<<"YOU  Hp: "<<war1.hp<<" Armor: "<<war1.armor<<" Rage: "<<war1.rage<<'\t'<<"vs"<<'\t'<<"MAGE   Hp: "<<mag1.hp<<" Mana: "<<mag1.mana<<endl;
            cout<<"1. Atak  2. Silny atak   3. Blok"<<endl;
            cin>>y;

            switch(y)
            {
                case 1:
                    mag1.hurt(war1.weapon_attack());
                    break;

                case 2:
                    mag1.hurt(war1.slam());
                    break;

                case 3:
                    war1.block();
                    break;
            }
        }
    }else{

        while( mag1.hp>0 && war1.hp>0 )
        {
            system("clear");
            cout<<"YOU   Hp: "<<mag1.hp<<" Mana: "<<mag1.mana<<'\t'<<"vs"<<'\t'<<"WARRIOR  Hp: "<<war1.hp<<" Armor: "<<war1.armor<<" Rage: "<<war1.rage<<endl;
            cout<<"1. Atak  2. Kula ognia   3. Kula mrozu"<<endl;
            cin>>y;

            switch(y)
            {
                case 1:
                    war1.hurt(mag1.weapon_attack());
                    break;

                case 2:
                    war1.hurt(mag1.fireball());
                    break;

                case 3:
                    war1.hurt(mag1.frostball());
                    break;
            }
        }
    }
int *random_pointer = new int;
}
