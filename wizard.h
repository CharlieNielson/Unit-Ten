#pragma once
#include <iostream>
#include "Stuff.h"
using namespace std;

class wizard: public Stuff {
    public:
        wizard(string, int, int, int, int, int, int, int, int);

    private:
        const string spellList[10] = {"Magic Missile", "Shield", "Fire Ball", "Counterspell", "Chromatic Orb", "Mage Armor", "Ice Knife", "Mage Hand", "Tasha's Hideous Laughter", "Sleep"};
};

wizard::wizard(string n, int s1, int s2, int s3, int s4, int s5, int h, int m, int a) {
    Stuff::name = n;
    Stuff::spells[0] = spellList[s1 - 1];
    Stuff::spells[1] = spellList[s2 - 1];
    Stuff::spells[2] = spellList[s3 - 1];
    Stuff::spells[3] = spellList[s4 - 1];
    Stuff::spells[4] = spellList[s5 - 1];
    Stuff::hp = h;
    Stuff::mp = m;
    Stuff::ac = a;
    Stuff::clas = "Wizard";
}
