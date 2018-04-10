//
// Created by Vanessa Paola Alvarado on 10/02/18.
//

#include "Rectangle.h"


Rectangle::Rectangle() {
    this->width=0.0;
    this->lenght=0.0;
}
Rectangle::Rectangle(double width, double lenght, std::string color, bool filled) {
    this->width=width;
    this->lenght=lenght;
    this->color=color;
    this->filled=filled;
}
double Rectangle::getWidth(){
    return this->width;
}
void Rectangle::setWidth(double width) {
    this->width=width;
}
double Rectangle::getLenght() {
    return this->lenght;
}
void Rectangle::setLenght(double lenght) {
    this->lenght=lenght;
}
double Rectangle::getArea() {
    return this->width*lenght;
}
double Rectangle::getPerimeter() {
    return (lenght+width)*4;
}
std::string Rectangle::toString() {
    std::string relleno;
    if(this->filled) relleno=" y está relleno \n";
    else relleno= " y no está relleno\n";

    return "El  rectangulo es color " + this->color + relleno;
}
