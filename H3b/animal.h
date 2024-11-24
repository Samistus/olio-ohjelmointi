#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
using namespace std;

class Animal {
public:
    virtual void callOut() {
        cout << "Elain aantelee." << endl;
    }

    virtual ~Animal() {
        cout << "Animal on tuhoutunut." << endl;
    }
};

#endif // ANIMAL_H
