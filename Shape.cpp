//
// Created by Vanessa Paola Alvarado on 10/02/18.
//

#include "Shape.h"


//Definición de métodos
Shape::Shape() {
    this->color="";
    this->filled=false;
}
Shape::Shape(std::string color, bool filled) {
    this->color=color;
    this->filled=filled;
}
std::string Shape::getColor() {
    return this->color;
}
void Shape::setColor(std::string color) {
    this->color=color;
}
bool Shape::isFilled() {
    return this->filled;
}
void Shape::setFilled(bool filled) {
    this->filled=filled;
}