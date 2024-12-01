#ifndef CAR_H
#define CAR_H

#include "Engine.h"
#include "Wheel.h"

class Car {
private:
    Engine engine;
    Wheel wheels[4];
    string model;
    string brand;

public:

    Car(string b, string m);

    string getModel() const;
    string getBrand() const;


    void setModel(string m);
    void setBrand(string b);
    void setEngine();
    void setWheels();

    void printDetails() const;
};

#endif
