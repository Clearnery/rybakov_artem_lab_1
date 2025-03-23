#pragma once


#include "Shape.h"
#include <iostream>


class ThreeDimensionalShape : public Shape 
{
public:
    
    ThreeDimensionalShape() : Shape("3D Shape") {} 
    ThreeDimensionalShape(const std::string& name) : Shape(name) {} 
    ThreeDimensionalShape(const ThreeDimensionalShape& other) : Shape(other) {}

    
    void draw() const override 
    {
        std::cout << "Drawing a 3D shape: " << getName() << "." << std::endl;
    }

    
    virtual double area() const override = 0;

    
    virtual double volume() const = 0;

    
    virtual ~ThreeDimensionalShape() {}
};

