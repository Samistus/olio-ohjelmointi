#include "Rectangle.h"


void Rectangle::setWidth(double width) {
    this->width = width;
}


void Rectangle::setHeight(double height) {
    this->height = height;
}


double Rectangle::getArea() const {
    return width * height;
}

double Rectangle::getCircum() const {
    return 2 * (width + height);
}
