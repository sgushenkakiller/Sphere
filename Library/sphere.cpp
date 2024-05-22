#include "sphere.h"
#include <cmath>
#define _USE_MATH_DEFINES
#include <sstream>

#ifndef M_PI
#define M_PI 	3.14159265358979323846
#endif

Sphere::Sphere(const Point center, const int radius) {
    if (radius <= 0) throw;
    this->center = center;
    this->radius = (size_t)radius;
}

double Sphere::getVolume() {
    return (4/3) * M_PI * (double)this->radius * (double)this->radius * (double)this->radius;
}
double Sphere::getSurfaceArea() {
    return 4 * M_PI * (double)this->radius * (double)this->radius;
}
std::string Sphere::toString() const {
    std::stringstream ss;
    ss << "center: " << this->center << "radius: " << (int)this->radius << std::endl;
    return ss.str();
}

const Point &Sphere::getCenter() {
    return center;
}
const int Sphere::getRadius() {
    return (int)radius;
}
void Sphere::setCenter(const Point center) {
    this->center = center;
}
void Sphere::setRadius(const int radius) {
    if (radius <= 0) throw;
    this->radius = (size_t)radius;
}
