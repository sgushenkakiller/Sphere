#include "point.h"
#include <sstream>

Point::Point(const int x, const int y, const int z) :x(x), y(y), z(z) {}
Point::Point() :x(0), y(0), z(0) {}
std::string Point::toString() const {
    std::stringstream ss;
    ss << "X: " << this->x << "     " << "Y: " << this->y << "      " << "Z: " << this->z << std::endl;
    return ss.str();
}
int Point::getX() {
    return this->x;
}
int Point::getY() {
    return this->y;
}
int Point::getZ() {
    return this->z;
}
void Point::setX(const int x) {
    this->x = x;
}
void Point::setY(const int y) {
    this->y = y;
}
void Point::setZ(const int z) {
    this->z = z;
}
