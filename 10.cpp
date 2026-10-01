#include <iostream>
using namespace std;

struct APARTAMENTO {
    string responsavel;
    int moradores, numeroApp, area;
    float valorMensal;
};

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
    }

    cout << "\nVetor preenchido!\n";
}

void AreaTotal(APARTAMENTO estrutura[40]) {
    int areaTotal = 0;

    for (int i = 0; i < 40; i++) {
        areaTotal += estrutura[i].area;
    }

    cout << "\nA area total do condominio e: " << areaTotal << " m2\n";
}

void MaisMoradores(APARTAMENTO estrutura[40]) {
    int maior = estrutura[0].moradores;

    for (int i = 1; i < 40; i++) {
        if (estrutura[i].moradores > maior) {
            maior = estrutura[i].moradores;
        }
    }

    cout << "\n--- Apartamentos com maior numero de moradores ---\n";

    for (int i = 0; i < 40; i++) {
        if (estrutura[i].moradores == maior) {
            cout << "\nResponsavel: " << estrutura[i].responsavel;
            cout << "\nMoradores: " << estrutura[i].moradores;
            cout << "\nNumero do apartamento: " << estrutura[i].numeroApp;
            cout << "\nArea: " << estrutura[i].area << " m2";
            cout << "\nValor mensal: " << estrutura[i].valorMensal;
            cout << "\n";
        }
    }
}

int main() {
    APARTAMENTO estrutura[40];

    int opcaoMenu;

    PreencherVetor(estrutura);

    do {
        cout << "\n--- Escolha uma opcao do menu ---\n";
        cout << "1. Area Total\n";
        cout << "2. Apartamento com maior numero de moradores\n";
        cout << "3. Sair\n";

        cin >> opcaoMenu;

        switch (opcaoMenu) {
        case 1:
            AreaTotal(estrutura);
            break;

        case 2:
            MaisMoradores(estrutura);
            break;

        case 3:
            cout << "Saindo...\n";
            break;

        default:
            cout << "Opcao invalida!\n";
            break;
        }

    } while (opcaoMenu != 3);

    return 0;
}