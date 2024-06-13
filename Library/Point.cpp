#include "point.h"
#include <sstream>

Point::Point(const int x, const int y, const int z) :x(x), y(y), z(z) {}
Point::Point() :x(0), y(0), z(0) {}
std::string Point::toString() const {
    std::stringstream ss;
    ss << "X: " << this->x << "     " << "Y: " << this->y << "      " << "Z: " << this->z << std::endl;
    return ss.str();
}

/**
* @brief Получает координату по x
* @return Возвращает координату по x
*/
int Point::getX() {
    return this->x;
}

/**
* @brief Получает координату по y
* @return Возвращает координату по y
*/
int Point::getY() {
    return this->y;
}

/**
* @brief Получает координату по z
* @return Возвращает координату по z
*/
int Point::getZ() {
    return this->z;
}

/**
* @brief Устанавливает координату по x
* @return Возвращает координату по x
*/
void Point::setX(const int x) {
    this->x = x;
}

/**
* @brief Устанавливает координату по y
* @return Возвращает координату по y
*/

void Point::setY(const int y) {
    this->y = y;
}

/**
* @brief Устанавливает координату по z
* @return Возвращает координату по z
*/
void Point::setZ(const int z) {
    this->z = z;
}
