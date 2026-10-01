#include <iostream>
using namespace std;

struct RETANGULO {
    float base, altura;
};

float CalcArea(RETANGULO r) {
    return r.base * r.altura;
}

int main() {
    RETANGULO r;

    cout << "Digite a base e a altura do seu Retangulo: " << endl;
    cin >> r.base >> r.altura;

    cout << CalcArea(r);

    return 0;
}