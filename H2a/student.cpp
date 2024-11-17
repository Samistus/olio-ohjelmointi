#include "Student.h"


void Student::setName(const std::string& name) {
    this->name = name;
}


void Student::setStudentNumber(int number) {
    this->studentNumber = number;
}


void Student::setAverage(double average) {
    this->average = average;
}


std::string Student::getName() const {
    return name;
}


int Student::getStudentNumber() const {
    return studentNumber;
}


double Student::getAverage() const {
    return average;
}
