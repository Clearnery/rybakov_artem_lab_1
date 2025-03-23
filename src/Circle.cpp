#include "Circle.h"


Circle::Circle(const std::string& name, double r) 
    : TwoDimensionalShape(name), radius(r) {}


Circle::Circle(const Circle& other) 
    : TwoDimensionalShape(other), radius(other.radius) {}


double Circle::getRadius() const {
    return radius;
}


void Circle::setRadius(double r) {
    radius = r;
}


double Circle::area() const 
{
    double PI = std::acos(-1.0);
    return PI * std::pow(radius, 2); 
}


void Circle::draw() const {
    std::cout << "Drawing a circle with radius " << radius << "." << std::endl;
}


std::ostream& operator<<(std::ostream& os, const Circle& circle) {
    os << "Circle: radius = " << circle.radius 
       << ", area = " << circle.area();
    return os;
}


std::istream& operator>>(std::istream& is, Circle& circle) {
    std::cout << "Enter radius: ";
    is >> circle.radius;
    return is;
}