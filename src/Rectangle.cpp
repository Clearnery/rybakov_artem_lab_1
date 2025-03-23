#include "Rectangle.h"


Rectangle::Rectangle(const std::string& name, double w, double h) 
    : TwoDimensionalShape(name), width(w), height(h) {}


Rectangle::Rectangle(const Rectangle& other) 
    : TwoDimensionalShape(other), width(other.width), height(other.height) {}


double Rectangle::getWidth() const {
    return width;
}


double Rectangle::getHeight() const {
    return height;
}


void Rectangle::setWidth(double w) {
    width = w;
}


void Rectangle::setHeight(double h) {
    height = h;
}


double Rectangle::area() const {
    return width * height; 
}


void Rectangle::draw() const {
    std::cout << "Drawing a rectangle with width " << width 
              << " and height " << height << "." << std::endl;
}


std::ostream& operator<<(std::ostream& os, const Rectangle& rect) {
    os << "Rectangle: width = " << rect.width 
       << ", height = " << rect.height 
       << ", area = " << rect.area();
    return os;
}