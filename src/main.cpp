#include "Circle.h"
#include "Rectangle.h"
#include "Sphere.h"
#include "Cube.h"
#include <iostream>
#include <vector>

int main() {
    // Создаем объекты
    Circle circle("My Circle", 5.0);
    Rectangle rectangle("My Rectangle", 4.0, 6.0);
    Sphere sphere("My Sphere", 3.0);
    Cube cube("My Cube", 4.0);

    // Используем полиморфизм: создаем вектор указателей на базовый класс Shape
    std::vector<Shape*> shapes = { &circle, &rectangle, &sphere, &cube };

    // Проходим по всем фигурам и вызываем их методы
    for (Shape* shape : shapes) {
        shape->draw(); // Отрисовка фигуры
        std::cout << "Area: " << shape->area() << std::endl;

        // Проверяем, является ли фигура трехмерной
        if (auto* threeDShape = dynamic_cast<ThreeDimensionalShape*>(shape)) {
            std::cout << "Volume: " << threeDShape->volume() << std::endl;
        }

        std::cout << std::endl;
    }

    // Демонстрация перегрузки оператора вывода
    std::cout << "Details of each shape:" << std::endl;
    std::cout << circle << std::endl;
    std::cout << rectangle << std::endl;
    std::cout << sphere << std::endl;
    std::cout << cube << std::endl;

    return 0;
}