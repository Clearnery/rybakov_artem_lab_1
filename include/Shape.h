#pragma once


#include <iostream>
#include <string>


class Shape {
protected:
    std::string name; 

public:
    
    Shape() : name("Unknown") {}
    Shape(const std::string& name) : name(name) {}
    Shape(const Shape& other) : name(other.name) {} 

    
    std::string getName() const 
    {
        return name;
    }

    void setName(const std::string& newName) 
    {
        name = newName;
    }

    
    virtual void draw() const 
    {
        std::cout << "Drawing a shape: " << name << "." << std::endl;
    }

    
    virtual double area() const = 0;

    
    friend std::ostream& operator<<(std::ostream& os, const Shape& shape) 
    {
        os << "Shape: " << shape.name;
        return os;
    }

    
    virtual ~Shape() {}
};

