#include <iostream>
using namespace std;


double ringArea(double innerRadius, double outerRadius) {
    const double pi = 3.14;
    double area = pi * (outerRadius * outerRadius - innerRadius * innerRadius);
    return area;
}

int main() {
    setlocale(LC_ALL, "Russian");
    double inner, outer;
    cout << "Введите внутренний радиус: ";
    cin >> inner;
    cout << "Введите внешний радиус: ";
    cin >> outer;
    cout << "Площадь кольца равна: " << ringArea(inner, outer);
    return 0;
}