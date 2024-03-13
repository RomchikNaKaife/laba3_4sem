#ifndef SPHERE_H
#define SPHERE_H

#include "Shape3D.h"
#include <iostream>
#include <cmath>

class Sphere : public Shape3D {
private:
    float radius;

public:
    Sphere(float radius) : radius(radius) {
        CalculateVolume();
    }

    void Scale(float scaleFactor) override {
        radius *= scaleFactor;
        CalculateVolume();
    }

    void ShowInfo() override {
        std::cout << "I am a sphere!" << std::endl;
        std::cout << "My volume = " << volume << std::endl;
        std::cout << "My radius = " << radius << std::endl;
    }

    std::string GetName() const override {
        return "Sphere";
    }

    void CalculateVolume() override {
        volume = (4.0f / 3.0f) * M_PI * pow(radius, 3);
    }
};

#endif // SPHERE_H


