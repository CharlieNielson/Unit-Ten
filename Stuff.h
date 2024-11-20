#pragma once
#include <iostream>
using namespace std;

class Stuff {
    public:
        Stuff();
        void display();

    protected:
        int hp, mp, ac;
        string spells[5];
        string name, clas;
};

Stuff::Stuff () {
    hp = 0;
    mp = 0;
    ac = 0;
}

void Stuff::display () {
    cout << "Adventurer name: " << name << "\nAdventurer class: " << clas << "\nHP: " << hp << "\nMP: " << mp << "\nAC: " << ac << "\nSpell list: " << spells[0] << ", " << spells[1] << ", " << spells[2] << ", " << spells[3] << ", " << spells[4] << endl << endl;
}
