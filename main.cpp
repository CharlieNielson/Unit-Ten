//Main.cpp
#include <iostream>
#include "Person.h"
#include "Dog.h"
#include "Cat.h"

using namespace std;

int main() {
  Person person1("Peter");
  Person person2("Ripley");
  cout << person1;


  Animal* pet;
  pet = new Dog("Brian", 6);
  pet->act();

  person1.setPet(pet);
  pet = new Cat("Jones", 5);
  pet->act();

  person2.setPet(pet);

  cout << person1;
  cout << person2;
}

