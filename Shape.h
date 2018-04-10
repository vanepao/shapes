//
// Created by Vanessa Paola Alvarado on 10/02/18.
//

#ifndef SHAPES_SHAPE_H
#define SHAPES_SHAPE_H

#include <iostream>

class Shape {
protected:
    std::string color;
    bool filled;


    //Métodos
public:
    Shape();
    Shape(std::string color, bool filled);

    //Getters and Setters
    std::string getColor();
    void setColor(std::string color);
    bool isFilled();
    void setFilled(bool filled);

    virtual double getArea()=0;
    virtual double getPerimeter()=0;
    virtual std::string toString()=0;
};


#endif //SHAPES_SHAPE_H
