#pragma once
#include <iostream>
using namespace std;

class Stuff {
    public:
        Stuff();
        Stuff(int, int, int);

    private:
        int hp, mp, ac;
};

Stuff()

Stuff(int h, int m, int a) {
    hp = h;
}
