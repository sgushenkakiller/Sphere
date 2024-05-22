#include "../Library/Point.h"
#include "../Library/sphere.h"
#include <iostream>

int main() {
    setlocale(LC_ALL, "ru");
    int x = 0, y = 0, z = 0;
    std::cout << "¬ведите координаты (x, y, z) центра сферы: ";
    std::cin >> x >> y >> z;
    Point pt(x, y, z);
    std::cout << "¬ведите радиус сферы: ";
    int radius = 0;
    std::cin >> radius;
    Sphere sph(pt, 3);
    std::cout << "—фера: ";
    std::cout << sph << std::endl;
    std::cout << "¬ведите координаты центра и радиус сферы: ";
    std::cin >> sph;
    std::cout << "ќбъЄм: ";
    std::cout << sph.getVolume() << std::endl;
    std::cout << "ѕлощадь поверхности: ";
    std::cout << sph.getSurfaceArea() << std::endl;
    return 0;
}
