#ifndef SPHERE_H
#define SPHERE_H

#include "ThreeDimensionalShape.h"
#include <iostream> 
#include <cmath>




class Sphere : public ThreeDimensionalShape 
{
private:
    double radius; 

public:
   
    Sphere(const std::string& name = "Sphere", double r = 1.0);

    
    Sphere(const Sphere& other);

    
    double getRadius() const;
    void setRadius(double r);

    
    double area() const override;

    
    double volume() const override;

    
    void draw() const override;

    
    friend std::ostream& operator<<(std::ostream& os, const Sphere& sphere);
};

#endif 
