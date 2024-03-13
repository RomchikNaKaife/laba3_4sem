#ifndef CYLINDER_H
#define CYLINDER_H

#include "Shape3D.h"
#include "Circle.h"
#include <iostream>
#include <cmath>

class Cylinder : public Shape3D {
private:
    Circle baseCircle;
    float height;

public:
    Cylinder(const Circle &baseCircle, float height)
        : baseCircle(baseCircle), height(height) {
        CalculateVolume();
    }

    void Scale(float scaleFactor) override {
        baseCircle.Scale(scaleFactor);
        height *= scaleFactor;
        CalculateVolume();
    }

    void ShowInfo() override {
        std::cout << "I am a cylinder!" << std::endl;
        std::cout << "My volume = " << volume << std::endl;
        baseCircle.ShowInfo();
        std::cout << "My height = " << height << std::endl;
    }

    std::string GetName() const override {
        return "Cylinder";
    }

    void CalculateVolume() override {
        volume = baseCircle.GetArea() * height;
    }
};

#endif // CYLINDER_H

