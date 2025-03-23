#include "Cube.h"


Cube::Cube() : ThreeDimensionalShape("Cube"), side(1.0) {}


Cube::Cube(const std::string& name, double s) : ThreeDimensionalShape(name) 
{
    setSide(s); 
}


double Cube::getSide() const 
{
    return side;
}


void Cube::setSide(double s) 
{
    if (s < 0) {
        throw std::invalid_argument("Side length cannot be negative.");
    }
    side = s;
}


double Cube::area() const 
{
    return 6 * side * side; 
}


double Cube::volume() const 
{
    return side * side * side; 
}


void Cube::draw() const 
{
    std::cout << "Drawing a cube with side " << side << "." << std::endl;
}


std::ostream& operator<<(std::ostream& os, const Cube& cube) 
{
    os << "Cube: side = " << cube.side << ", area = " << cube.area() << ", volume = " << cube.volume();
    return os;
}