#pragma once
#include "point.h"
#include <string>
#include <istream>
#include <ostream>

class Sphere {
    Point center;
    size_t radius;
public:
    Sphere(const Point center, const int radius);
    double getVolume();
    double getSurfaceArea();
    std::string toString() const;
    const Point &getCenter();
    const int getRadius();
    void setCenter(const Point center);
    void setRadius(const int radius);
    friend std::ostream &operator<<(std::ostream &os, const Sphere &sphere) {
        os << sphere.toString();
        return os;
    }
    friend std::istream &operator>>(std::istream &is, Sphere &sphere) {
        Point center(0, 0, 0);
        int radius = 0;
        is >> center >> radius;
        if (radius <= 0) throw;
        sphere.center = center;
        sphere.radius = (size_t)radius;
        return is;
    }
};
