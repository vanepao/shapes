#include <iostream>
#include "Circle.h"
#include "Rectangle.h"

int main() {

Circle cirl= *new Circle();
    cirl.setRadius(2);
    cirl.setColor("rojo");
    cirl.setFilled(false);
    std::cout<<"Area: " <<cirl.getArea()<<"\n";
    std::cout<<"Perimetro: " <<cirl.getPerimeter()<<"\n";
    std::cout<<"RADIO: " <<cirl.getRadius()<<"\n";
    std::cout<<cirl.toString()<<"\n";

//ancho, largo per ar str
Rectangle rect= *new Rectangle();
    rect.setLenght(4);
    rect.setWidth(7);
    rect.setFilled(true);
    rect.setColor("rosa");
    std::cout<<"Lenght:"<<rect.getLenght()<<"\n";
    std::cout<<"Width:"<<rect.getWidth()<<"\n";
    std::cout<<"Area: " <<rect.getArea()<<"\n";
    std::cout<<"Perimetro: " <<rect.getPerimeter()<<"\n";
    std::cout<<rect.toString();
    return 0;
}