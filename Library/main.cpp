#include "sphere.h"
#include "point.h"
#include <iostream>

int main() {
    Point pt(1, 2, 3);
    Sphere sph(pt, 3);
    std::cout << sph << std::endl;
    std::cin >> sph;
    std::cout << sph.getVolume() << std::endl;
    std::cout << sph.getSurfaceArea() << std::endl;
    return 0;
}
