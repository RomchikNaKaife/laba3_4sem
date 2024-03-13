#ifndef SHAPE2D_H
#define SHAPE2D_H

#include "Shape.h"

class Shape2D : public Shape {
protected:
    float area;

public:
    virtual float GetArea() const;
    virtual bool operator>(const Shape2D& other) const;
    virtual bool operator<(const Shape2D& other) const;
    virtual bool operator==(const Shape2D& other) const;
    virtual void CalculateArea() = 0;
};

#endif // SHAPE2D_H

