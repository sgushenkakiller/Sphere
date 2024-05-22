#include "../Library/Point.h"
#include "../Library/sphere.h"
#include <iostream>

int main() {
    setlocale(LC_ALL, "ru");
    int x = 0, y = 0, z = 0;
    std::cout << "������� ���������� (x, y, z) ������ �����: ";
    std::cin >> x >> y >> z;
    Point pt(x, y, z);
    std::cout << "������� ������ �����: ";
    int radius = 0;
    std::cin >> radius;
    Sphere sph(pt, 3);
    std::cout << "�����: ";
    std::cout << sph << std::endl;
    std::cout << "������� ���������� ������ � ������ �����: ";
    std::cin >> sph;
    std::cout << "�����: ";
    std::cout << sph.getVolume() << std::endl;
    std::cout << "������� �����������: ";
    std::cout << sph.getSurfaceArea() << std::endl;
    return 0;
}
