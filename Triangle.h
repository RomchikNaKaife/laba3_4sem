#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Shape2D.h"
#include <iostream>
#include <string>

class Triangle : public Shape2D {
private:
    float base;
    float height;

public:
    Triangle(float base, float height) : base(base), height(height) {
        CalculateArea();
    }

    void Scale(float scaleFactor) override {
        base *= scaleFactor;
        height *= scaleFactor;
        CalculateArea();
    }

    void ShowInfo() override {
        std::cout << "I am a triangle!" << std::endl;
        std::cout << "My area = " << area << std::endl;
        std::cout << "Length of my base = " << base << std::endl;
        std::cout << "My height = " << height << std::endl;
    }

    std::string GetName() const override {
        return "Triangle";
    }

    void CalculateArea() override {
        area = 0.5f * base * height;
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

#endif // TRIANGLE_H


