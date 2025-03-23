#pragma once


#include "Shape.h"
#include <iostream>


class TwoDimensionalShape : public Shape 
{
public:
    
    TwoDimensionalShape() : Shape("2D Shape") {} 
    TwoDimensionalShape(const std::string& name) : Shape(name) {} 
    TwoDimensionalShape(const TwoDimensionalShape& other) : Shape(other) {}

    
    void draw() const override 
    {
        std::cout << "Drawing a 2D shape: " << getName() << "." << std::endl;
    }

    
    virtual double area() const override = 0;

    
    virtual ~TwoDimensionalShape() {}
};


