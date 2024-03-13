#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape2D.h"
#include <iostream>
#include <string>
#include <cmath>

class Circle : public Shape2D {
private:
    float radius;

public:
    Circle(float radius) : radius(radius) {
        CalculateArea();
    }

    void Scale(float scaleFactor) override {
        radius *= scaleFactor;
        CalculateArea();
    }

    void ShowInfo() override {
        std::cout << "I am a circle!" << std::endl;
        std::cout << "My area = " << area << std::endl;
        std::cout << "Radius of my base = " << radius << std::endl;
    }

    std::string GetName() const override {
        return "Circle";
    }

    void CalculateArea() override {
        area = M_PI * radius * radius;
    }

    float GetArea() const override {
        return area;
    }

    bool operator>(const Shape2D& other) const override {
        return this->area > other.GetArea();
    }

    bool operator<(const Shape2D& other) const override {
        return this->area < other.GetArea();
    }

    bool operator==(const Shape2D& other) const override {
        return this->area == other.GetArea();
    }
};

#endif // CIRCLE_H


