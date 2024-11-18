#include <iostream>
#include "thing.h"
using namespace std;


int main() {
    
    Derived1 d1;
    Derived2 d2;
    Base* ptr;
    ptr = &d1;
    ptr -> show();
    ptr = &d2;
    ptr -> show();
    



    return 17;
}
