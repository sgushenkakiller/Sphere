#pragma once
#include "point.h"
#include <string>
#include <istream>
#include <ostream>

class Sphere {
    Point center;
    double radius;
public:
    Sphere(const Point center, const int radius);
    double getVolume();
    double getSurfaceArea();
    std::string toString() const;
    const Point getCenter(); const;
    const int getRadius();
    void setCenter(const Point center);
    void setRadius(const int radius);
    friend std::ostream &operator<<(std::ostream &os, const Sphere &sphere) {
        os << sphere.toString();
        return os;
    }
    friend std::istream &operator>>(std::istream &is, Sphere &sphere) {
        Sphere temp{ center, radius };
        sphere = temp;
        return is;
        if (radius <= 0) throw;
        sphere.center = center;
        sphere.radius = (size_t)radius;
        return is;
    }
};
