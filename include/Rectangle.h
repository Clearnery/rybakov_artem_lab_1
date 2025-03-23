#pragma once

#include "TwoDimensionalShape.h"
#include <iostream> 


class Rectangle : public TwoDimensionalShape {
private:
    double width;  
    double height; 

public:
    
    Rectangle(const std::string& name = "Rectangle", double w = 1.0, double h = 1.0);

    
    Rectangle(const Rectangle& other);

    
    double getWidth() const;
    double getHeight() const;
    void setWidth(double w);
    void setHeight(double h);

   
    double area() const override;

    
    void draw() const override;

   
    friend std::ostream& operator<<(std::ostream& os, const Rectangle& rect);
};


