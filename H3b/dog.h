#ifndef DOG_H
#define DOG_H

#include "Animal.h"

class Dog : public Animal {
public:
    void callOut() override {
        cout << "Koira haukkuu!" << endl;
    }

    virtual ~Dog() {
        cout << "Dog on tuhoutunut." << endl;
    }
};

#endif // DOG_H
