#pragma once

#include "ThreeDimensionalShape.h"
#include <iostream>
#include <stdexcept>

class Cube : public ThreeDimensionalShape 
{
private:
    double side; 

public:
    
    Cube(); 
    Cube(const std::string& name, double s); 

    
    double getSide() const;
    void setSide(double s);

    
    double area() const override;

    
    double volume() const override;

   
    void draw() const override;

    
    friend std::ostream& operator<<(std::ostream& os, const Cube& cube);
};

