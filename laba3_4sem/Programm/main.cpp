//
//  main.cpp
//  laba3_4sem
//
//  Created by Роман Перепонов on 10.03.2024.
//
#include "Shape.h"
#include "Shape2D.h"
#include "Shape3D.h"
#include "Square.h"
#include "Triangle.h"
#include "Circle.h"
#include "TriangularPyramid.h"
#include "Cylinder.h"
#include "Sphere.h"
#include <iostream>

void TestShapes() {
    Square square(4.0f);
    Triangle triangle(3.0f, 4.0f);
    Circle circle(5.0f);
    TriangularPyramid triangularPyramid(Triangle(3.0f, 4.0f), 5.0f);
    Cylinder cylinder(Circle(5.0f), 7.0f);
    Sphere sphere(3.0f);

    square.ShowInfo();
    triangle.ShowInfo();
    circle.ShowInfo();
    triangularPyramid.ShowInfo();
    cylinder.ShowInfo();
    sphere.ShowInfo();
}

int main() {
    TestShapes();
    return 0;
}
