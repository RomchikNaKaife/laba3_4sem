#ifndef TRIANGULARPYRAMID_H
#define TRIANGULARPYRAMID_H

#include "Shape3D.h"
#include "Triangle.h"
#include <iostream>
#include <cmath>

class TriangularPyramid : public Shape3D {
private:
    Triangle baseTriangle;
    float height;

public:
    TriangularPyramid(const Triangle &baseTriangle, float height)
        : baseTriangle(baseTriangle), height(height) {
        CalculateVolume();
    }

    void Scale(float scaleFactor) override {
        baseTriangle.Scale(scaleFactor);
        height *= scaleFactor;
        CalculateVolume();
    }

    void ShowInfo() override {
        std::cout << "I am a triangular pyramid!" << std::endl;
        std::cout << "My volume = " << volume << std::endl;
        baseTriangle.ShowInfo();
        std::cout << "My height = " << height << std::endl;
    }

    std::string GetName() const override {
        return "TriangularPyramid";
    }

    void CalculateVolume() override {
        volume = (baseTriangle.GetArea() * height) / 3.0f;
    }
};

#endif // TRIANGULARPYRAMID_H
