//Person
#pragma once
#include "Animal.h"
using namespace std;

class Person{
    public:
      Person(string name);
      friend ostream& operator<<(ostream &out, const Person& a);
      Animal *pet;
      void setPet(Animal*);
      ~Person();
    protected:
      string name;
};

Person::Person(string name): name(name){
  pet = nullptr;
}

Person::~Person(){
  if(pet){
    delete pet;
  }
}

void Person::setPet(Animal *p){
  if(pet){
    delete pet;
  }
  pet = p;
}

ostream& operator<<(ostream &out, const Person& p){
   out << "Person: " << p.name;
   if(p.pet){
     out << " owns " << *p.pet;
   }
   else{
     out << " does not own a pet";
   }
   out << endl;
   return out;
}
