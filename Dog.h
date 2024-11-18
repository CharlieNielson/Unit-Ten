//Dog.h
#pragma once
#include "Animal.h"
using namespace std;

class Dog: public Animal{
    public:
      Dog(string name, int p_speed): Animal(name), speed(p_speed){  };
      void act();
      void chase();
      friend ostream& operator<<(ostream &out, const Dog& );

    private:
      int speed;
};

void Dog::act(){
  chase();
}

void Dog::chase(){
  cout << "Act: " << name << " chases at a speed of " << speed << endl;
}

ostream& operator<<(ostream &out, const Dog& d){
   out << "Dog: " << d.name << endl;
   return out;
}
