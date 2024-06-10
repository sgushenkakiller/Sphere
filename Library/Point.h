#pragma once
#include <string>
#include <istream>
#include <ostream>

struct Point {
    int x;
    int y;
    int z;
    Point(const int x, const int y, const int z);
    Point();
    std::string toString() const;
    int getX();
    int getY();
    int getZ();
    friend std::ostream &operator<<(std::ostream &os, const Point &point) {
        os << point.toString();
        return os;
    }
    friend std::istream &operator>>(std::istream &is, Point &point) {
        is >> point.x >> point.y >> point.z;
        return is;
    }
    int operator==(const Point &other) {
        if (this->x == other.x && this->y == other.y && this->z == other.z) return 1;
        return 0;
    }
    int operator!=(const Point &other) {
        if (this->x != other.x || this->y != other.y || this->z != other.z) return 1;
        return 0;
    }
};
