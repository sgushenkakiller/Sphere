#include "../Library/Point.h"
#include "../Library/sphere.h"
#include <iostream>

int main() {
    setlocale(LC_ALL, "ru");
    int x = 0, y = 0, z = 0;
    std::cout << "Введите координаты (x, y, z) центра сферы: ";
    std::cin >> x >> y >> z;
    Point pt(x, y, z);
    std::cout << "Введите радиус сферы: ";
    double radius = 0;
    std::cin >> radius;
    Sphere sph(pt, 3);
    std::cout << "Ñôåðà: ";
    std::cout << sph << std::endl;
    std::cout << "Ââåäèòå êîîðäèíàòû öåíòðà è ðàäèóñ ñôåðû: ";
    std::cin >> sph;
    std::cout << "Îáú¸ì: ";
    std::cout << sph.getVolume() << std::endl;
    std::cout << "Ïëîùàäü ïîâåðõíîñòè: ";
    std::cout << sph.getSurfaceArea() << std::endl;
    return 0;
}
