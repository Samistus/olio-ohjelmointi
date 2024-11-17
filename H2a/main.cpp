#include <iostream>
#include <memory>
#include "Car.h"
#include "Rectangle.h"
#include "Student.h"

int main() {

    Car myCar;
    myCar.setBrand("Mazda");
    myCar.setModel("Miata");
    myCar.setYearModel(1990);
    myCar.printData();


    Rectangle* rect = new Rectangle();
    rect->setWidth(6.6);
    rect->setHeight(18.2);
    std::cout << "Rectangle area: " << rect->getArea() << std::endl;
    std::cout << "Rectangle circumference: " << rect->getCircum() << std::endl;
    delete rect;


    std::shared_ptr<Student> student = std::make_shared<Student>();
    student->setName("Pekka Kallunen");
    student->setStudentNumber(12);
    student->setAverage(3.7);

    std::cout << "Student Name: " << student->getName() << std::endl;
    std::cout << "Student Number: " << student->getStudentNumber() << std::endl;
    std::cout << "Student Average: " << student->getAverage() << std::endl;

    return 0;
}
