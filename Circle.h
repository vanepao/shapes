//
// Created by Vanessa Paola Alvarado on 10/02/18.
//

#ifndef SHAPES_CIRCLE_H
#define SHAPES_CIRCLE_H

#include "Shape.h"

class Circle : virtual public Shape{
protected:
    double radius;
public:
    Circle();
    Circle(double radius, std::string color, bool filled);
    double getRadius();
    void setRadius(double radius);
    double getArea();
    double getPerimeter();
    std::string toString();
};


#endif //SHAPES_CIRCLE_H
