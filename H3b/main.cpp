#include <iostream>
#include "Animal.h"
#include "Dog.h"

int main() {
    Animal* animal = new Animal();
    animal->callOut();

    Animal* dog = new Dog();
    dog->callOut();

    delete dog;

    return 0;
}
