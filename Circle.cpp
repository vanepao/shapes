//
// Created by Vanessa Paola Alvarado on 10/02/18.
//

#include "Circle.h"
#include <math.h>

//Definición de métodos
Circle::Circle(){
    this->radius=0.0;
}
Circle::Circle(double radius, std::string color, bool filled) {
    this->radius=radius;
    this->color=color;
    this->filled=filled;
}
double Circle::getRadius() {
    return this->radius;
}
void Circle::setRadius(double radius) {
    this->radius=radius;
}
double Circle::getArea() {
    return 3.1416* pow(this->radius,2);
}
double Circle::getPerimeter() {
    return 3.1416*this->radius;
}

std::string Circle::toString() {
    std::string relleno;
    if(this->isFilled()) relleno=" y está relleno \n";
    else relleno= " y no está relleno\n";

    return "El  circulo es color " + getColor() + relleno;
}