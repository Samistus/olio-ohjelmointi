#ifndef CAR_H
#define CAR_H

#include <string>
#include <iostream>

class Car {
private:
    std::string brand;
    std::string model;
    int yearModel;

public:
    // Constructor to initialize all member variables
    Car(const std::string& brand, const std::string& model, int yearModel);

    // Method to print car data
    void printData() const;
};

#endif // CAR_H
