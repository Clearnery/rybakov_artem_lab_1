#ifndef CIRCLE_H
#define CIRCLE_H

#include "TwoDimensionalShape.h"
#include <iostream> 
#include <cmath>






class Circle : public TwoDimensionalShape 
{
private:
    double radius; 

public:
    
    Circle(const std::string& name = "Circle", double r = 1.0);

    
    Circle(const Circle& other);

   
    double getRadius() const;
    void setRadius(double r);

    
    double area() const override;

    
    void draw() const override;

    
    friend std::ostream& operator<<(std::ostream& os, const Circle& circle);

    
    friend std::istream& operator>>(std::istream& is, Circle& circle);
};

#endif


