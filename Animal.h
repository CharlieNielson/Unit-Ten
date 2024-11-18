//Animal Class
#pragma once
#include <iostream>
#include "Animal.h"

using namespace std;

class Animal{
    public:
      Animal(string p_name) : name(p_name){  }
      friend ostream& operator<<(ostream &out, const Animal& a);
      virtual void act();

    protected:
      string name;
};

void Animal::act(){
 cout << "An animal does not know how to act" << endl;
}

ostream& operator<<(ostream &out, const Animal& a){
   out << "Pet: " << a.name << endl;
   return out;
}
