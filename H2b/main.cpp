#include <iostream>
#include <vector>
#include "Car.h"

int main() {
    // Luo vektori carList
    std::vector<Car> carList;

    // Luo kolme Car-oliota
    Car car1("Mazda", "Miata", 1990);
    Car car2("BMW", "335i", 2012);
    Car car3("Tesla", "Model X", 2021);

    // Lisää oliot listaan
    carList.push_back(car1);
    carList.push_back(car2);
    carList.push_back(car3);

    // Tulosta listan toisen alkion tiedot
    std::cout << "Toisen alkion tiedot:" << std::endl;
    carList[1].printData();

    // Tulosta kaikkien autojen tiedot for-silmukalla
    std::cout << "\nKaikkien autojen tiedot:" << std::endl;
    for (const auto& car : carList) {
        car.printData();
    }

    return 0;
}
