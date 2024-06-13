#pragma once
#include <string>
#include <istream>
#include <ostream>

struct Point {
    double x;
    double y;
    double z;
    friend std::ostream &operator<<(std::ostream &os, const Point &point) {
        os << point.toString();
        return os;
    }
    friend std::istream &operator>>(std::istream &is, Point &point) {
        is >> point.x >> point.y >> point.z;
        return is;
    }
    bool operator==(const Point &other) {
        if (this->x == other.x && this->y == other.y && this->z == other.z) return True;
        return False;
    }
    bool operator!=(const Point &other) {
        if (this->x != other.x || this->y != other.y || this->z != other.z) return !(*this == other);; 
    }
};
