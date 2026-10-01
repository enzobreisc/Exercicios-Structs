#include <iostream>
using namespace std;

struct APARTAMENTO {
    string responsavel;
    int moradores, numeroApp, area;
    float valorMensal;
};

template <typename T> T somaVetor(T vetor[], int N) {
    T soma = 0;

    for (int i = 0; i < N; i++) {
        soma += vetor[i];
    }

    return soma;
}

void PreencherVetor(APARTAMENTO estrutura[40]) {
    for (int i = 0; i < 40; i++) {
        cout << "\n---- Dados Apartamento " << i + 1 << " ----\n";

        cout << "Digite o nome do responsavel: ";
        cin >> estrutura[i].responsavel;

        cout << "Digite a quantidade de moradores: ";
        cin >> estrutura[i].moradores;

        cout << "Digite o numero do apartamento: ";
        cin >> estrutura[i].numeroApp;

        cout << "Digite a area do apartamento: ";
        cin >> estrutura[i].area;

        cout << "Digite o valor mensal: ";
        cin >> estrutura[i].valorMensal;
    }
}

float SomarValores(APARTAMENTO estrutura[40]) {
    float valores[40];

    for (int i = 0; i < 40; i++) {
        valores[i] = estrutura[i].valorMensal;
    }

    return somaVetor(valores, 40);
}

int main() {
    APARTAMENTO estrutura[40];

    PreencherVetor(estrutura);

    cout << "\nSoma dos valores mensais: R$ " << SomarValores(estrutura) << endl;

    return 0;
}