#include <iostream>
using namespace std;

template <typename T> T Maior(T vetor[], int N) {
    T maior = vetor[0];

    for (int i = 1; i < N; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
    }

    return maior;
}

int main() {
    float notas[30] = {7.5, 8.2, 6.0, 9.1, 5.5, 8.7, 7.0, 9.5, 6.8, 8.0, 7.9, 5.0, 9.8, 6.5, 8.4,
                       7.2, 9.0, 6.3, 8.9, 7.7, 5.8, 9.3, 8.6, 6.9, 7.4, 8.1, 9.6, 6.7, 7.8, 8.8};

    float maiorNota = Maior(notas, 30);

    cout << "Maior nota: " << maiorNota << endl;

    return 0;
}