#include <iostream>
using namespace std;


class Base {
    public:
        virtual void show() {
            cout << "Base\n";
        }
};

class Derived1 : public Base {
    public:
        void show() {
            cout << "Derived\n";
        }
};

class Derived2 : public Base {};
