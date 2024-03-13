#ifndef SHAPE3D_H
#define SHAPE3D_H

#include "Shape.h"

class Shape3D : public Shape {
protected:
    float volume;

public:
    virtual float GetVolume() const;
    virtual bool operator>(const Shape3D& other) const;
    virtual bool operator<(const Shape3D& other) const;
    virtual bool operator==(const Shape3D& other) const;
    virtual void CalculateVolume() = 0;
};

#endif // SHAPE3D_H

