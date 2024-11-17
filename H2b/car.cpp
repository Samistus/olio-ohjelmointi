#include "Car.h"

// Constructor implementation
Car::Car(const std::string& brand, const std::string& model, int yearModel)
    : brand(brand), model(model), yearModel(yearModel) {}

// Method to print car details
void Car::printData() const {
    std::cout << "Brand: " << brand << ", Model: " << model
              << ", Year: " << yearModel << std::endl;
}
