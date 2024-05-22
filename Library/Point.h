#pragma once
#include <string>
#include <istream>
#include <ostream>

class Point {
    int x;
    int y;
    int z;
public:
    Point(const int x, const int y, const int z);
    Point();
    std::string toString() const;
    int getX();
    int getY();
    int getZ();
    void setX(const int x);
    void setY(const int y);
    void setZ(const int z);
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
