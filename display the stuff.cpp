#include <iostream>
#include "Stuff.h"
#include "wizard.h"
#include "cleric.h"




int main() {
    wizard w1("Stormbeard", 3, 5, 6, 8, 9, 10, 20, 12);
    cleric c1("Elemble", 1, 2, 3, 7, 10, 15, 11, 16);
    wizard w2("Gimfimble", 1, 2, 4, 7, 10, 8, 24, 10);
    cleric c2("Slask", 4, 5, 6, 8, 9, 14, 8, 20);

    w1.display();
    c1.display();
    w2.display();
    c2.display();

    return 17;
}
