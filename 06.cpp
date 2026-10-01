#include <iostream>
using namespace std;

template <typename T> void Trocar(T &a, T &b) {
    T aux = a;
    a = b;
    b = aux;
}

int main() {
    int a = 10;
    int b = 20;

    cout << "Antes da troca: " << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    Trocar(a, b);

    cout << "\nDepois da troca: " << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}