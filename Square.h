#ifndef SQUARE_H
#define SQUARE_H

#include "Shape2D.h"
#include <iostream>
#include <cmath>

class Square : public Shape2D {
private:
    float side;

public:
    Square(float side) : side(side) {
        CalculateArea();
    }

    void Scale(float scaleFactor) override {
        side *= scaleFactor;
        CalculateArea();
    }

    void ShowInfo() override {
        std::cout << "I am a square!" << std::endl;
        std::cout << "My area = " << area << std::endl;
        std::cout << "The length of my side = " << side << std::endl;
    }

    std::string GetName() const override {
        return "Square";
    }

    void CalculateArea() override {
        area = side * side;
    }
};

#endif // SQUARE_H

