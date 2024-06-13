#define _USE_MATH_DEFINES
#include <cmath>
#include <sstream>
#include "sphere.h"


Sphere::Sphere(const Point center, const double radius) {
    if (this->setRadius(radius) <= 0) throw std::invalid_argument("Неверно введет радиус");
    this->center = center;
    this->radius = radius;
}


double Sphere::getVolume() {
    return (4.0/3.0) * M_PI * radius * radius * radius;
}


double Sphere::getSurfaceArea() {
    return 4 * M_PI * radius * radius;
}


std::string Sphere::toString() const {
    std::stringstream ss;
    ss << "center: " << this->center << "radius: " << (int)this->radius << std::endl;
    return ss.str();
}

const Point Sphere::getCenter() {
    return center;
}
const int Sphere::getRadius() {
    return radius;
}
void Sphere::setCenter(const Point center) {
    this->center = center;
}
void Sphere::setRadius(const double radius) {
    if (radius <= 0) throw std::invalid_argument("Неверно введет радиус");
    this->radius = radius;
}
