//
// Created by Vanessa Paola Alvarado on 10/02/18.
//

#ifndef SHAPES_RECTANGLE_H
#define SHAPES_RECTANGLE_H

#include "Shape.h"


class Rectangle : virtual public Shape {
protected:
    double width,lenght;
public:
    Rectangle();
    Rectangle(double width, double lenght,std::string color, bool filled);
    double getWidth();
    void setWidth(double width);
    double getLenght();
    void setLenght(double lenght);

    double getArea();
    double getPerimeter();
    std::string toString();


};


#endif //SHAPES_RECTANGLE_H
