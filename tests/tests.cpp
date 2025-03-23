#include "gtest/gtest.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Sphere.h"
#include "Cube.h"
#include <cmath>
#include <iostream>

// Тесты для класса Circle
TEST(CircleTest, CreateCircleWithPositiveRadius) {
    Circle circle("Test Circle", 5.0);
    EXPECT_NEAR(5.0, circle.getRadius(), 0.0001);
}

TEST(CircleTest, CreateCircleWithNegativeRadiusThrows) {
    EXPECT_THROW(Circle("Test Circle", -5.0), std::invalid_argument);
}

TEST(CircleTest, CalculateArea) {
    Circle circle("Test Circle", 5.0);
    EXPECT_NEAR(78.5398, circle.area(), 0.0001);
}

TEST(CircleTest, OutputOperator) {
    Circle circle("Test Circle", 5.0);
    testing::internal::CaptureStdout();
    std::cout << circle;
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_TRUE(output.find("Circle: radius = 5") != std::string::npos);
}

// Тесты для класса Rectangle
TEST(RectangleTest, CreateRectangleWithPositiveDimensions) {
    Rectangle rectangle("Test Rectangle", 4.0, 6.0);
    EXPECT_NEAR(4.0, rectangle.getWidth(), 0.0001);
    EXPECT_NEAR(6.0, rectangle.getHeight(), 0.0001);
}

TEST(RectangleTest, CreateRectangleWithNegativeWidthThrows) {
    EXPECT_THROW(Rectangle("Test Rectangle", -4.0, 6.0), std::invalid_argument);
}

TEST(RectangleTest, CalculateArea) {
    Rectangle rectangle("Test Rectangle", 4.0, 6.0);
    EXPECT_NEAR(24.0, rectangle.area(), 0.0001);
}

TEST(RectangleTest, OutputOperator) {
    Rectangle rectangle("Test Rectangle", 4.0, 6.0);
    testing::internal::CaptureStdout();
    std::cout << rectangle;
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_TRUE(output.find("Rectangle: width = 4") != std::string::npos);
    EXPECT_TRUE(output.find("height = 6") != std::string::npos);
}

// Тесты для класса Sphere
TEST(SphereTest, CreateSphereWithPositiveRadius) {
    Sphere sphere("Test Sphere", 3.0);
    EXPECT_NEAR(3.0, sphere.getRadius(), 0.0001);
}

TEST(SphereTest, CreateSphereWithNegativeRadiusThrows) {
    EXPECT_THROW(Sphere("Test Sphere", -3.0), std::invalid_argument);
}

TEST(SphereTest, CalculateArea) {
    Sphere sphere("Test Sphere", 3.0);
    EXPECT_NEAR(113.097, sphere.area(), 0.001);
}

TEST(SphereTest, CalculateVolume) {
    Sphere sphere("Test Sphere", 3.0);
    EXPECT_NEAR(113.097, sphere.volume(), 0.001);
}

TEST(SphereTest, OutputOperator) {
    Sphere sphere("Test Sphere", 3.0);
    testing::internal::CaptureStdout();
    std::cout << sphere;
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_TRUE(output.find("Sphere: radius = 3") != std::string::npos);
}

// Тесты для класса Cube
TEST(CubeTest, CreateCubeWithPositiveSide) {
    Cube cube("Test Cube", 4.0);
    EXPECT_NEAR(4.0, cube.getSide(), 0.0001);
}

TEST(CubeTest, CreateCubeWithNegativeSideThrows) {
    EXPECT_THROW(Cube("Test Cube", -4.0), std::invalid_argument);
}

TEST(CubeTest, CalculateArea) {
    Cube cube("Test Cube", 4.0);
    EXPECT_NEAR(96.0, cube.area(), 0.0001);
}

TEST(CubeTest, CalculateVolume) {
    Cube cube("Test Cube", 4.0);
    EXPECT_NEAR(64.0, cube.volume(), 0.0001);
}

TEST(CubeTest, OutputOperator) {
    Cube cube("Test Cube", 4.0);
    testing::internal::CaptureStdout();
    std::cout << cube;
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_TRUE(output.find("Cube: side = 4") != std::string::npos);
}

int main(int argc, char **argv) 
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}