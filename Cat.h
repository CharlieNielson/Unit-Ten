//Cat.h
#pragma once
#include "Animal.h"
using namespace std;

class Cat: public Animal{
    public:
      Cat(string name, int p_stealth):Animal(name), stealth(p_stealth){ }
      void act();
      void stalk();
      friend ostream& operator<<(ostream &out, const Cat& );

    private:
      int stealth;
};


void Cat::act(){
	Animal::act();
  stalk();
}

void Cat::stalk(){
  cout << "Act: " << name << " stalks with a stealth of " << stealth << endl;
}

ostream& operator<<(ostream &out, const Cat& c){
   out << "Cat: " << c.name << endl;
   return out;
}
