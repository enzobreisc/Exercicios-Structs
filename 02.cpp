#include <cmath>
#include <iostream>

using namespace std;

struct PONTO {
    float x, y;
};

float Distancia(PONTO p1, PONTO p2) {
    return sqrt((p2.x - p1.x) * (p2.x - p1.x) + (p2.y - p1.y) * (p2.y - p1.y));
}

int main() {
    PONTO p1, p2;

    cout << "Digite x e y do primeiro ponto: ";
    cin >> p1.x >> p1.y;

    cout << "Digite x e y do segundo ponto: ";
    cin >> p2.x >> p2.y;

    cout << "Distancia: " << Distancia(p1, p2) << endl;

    return 0;
}