#include "Sphere.h"

// Конструктор с параметрами по умолчанию
Sphere::Sphere(const std::string& name, double r) 
    : ThreeDimensionalShape(name), radius(r) {}

// Конструктор копирования
Sphere::Sphere(const Sphere& other) 
    : ThreeDimensionalShape(other), radius(other.radius) {}


double Sphere::getRadius() const {
    return radius;
}


void Sphere::setRadius(double r) {
    radius = r;
}


double Sphere::area() const 
{
    double PI = std::acos(-1.0);
    return 4 * PI * std::pow(radius, 2); 
}

// Переопределение метода volume()
double Sphere::volume() const
{
    double PI = std::acos(-1.0);
    return (4.0 / 3.0) * PI * std::pow(radius, 3); // Объем сферы: (4/3) * π * r^3
}

// Переопределение метода draw()
void Sphere::draw() const {
    std::cout << "Drawing a sphere with radius " << radius << "." << std::endl;
}

// Перегрузка оператора вывода
std::ostream& operator<<(std::ostream& os, const Sphere& sphere) {
    os << "Sphere: radius = " << sphere.radius 
       << ", area = " << sphere.area() 
       << ", volume = " << sphere.volume();
    return os;
}