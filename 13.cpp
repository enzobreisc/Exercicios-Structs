#include <iostream>
using namespace std;

struct DATA {
    int mes;
    int ano;
};

struct GADO {
    int codigo;
    float leite;
    float alim;
    DATA nasc;
    char abate;
};

void LerBase(GADO gado[2000]) {
    for (int i = 0; i < 2000; i++) {
        cout << "\n--- Gado " << i + 1 << " ---\n";

        cout << "Codigo: ";
        cin >> gado[i].codigo;

        cout << "Litros de leite por semana: ";
        cin >> gado[i].leite;

        cout << "Alimento consumido por semana (kg): ";
        cin >> gado[i].alim;

        cout << "Mes de nascimento: ";
        cin >> gado[i].nasc.mes;

        cout << "Ano de nascimento: ";
        cin >> gado[i].nasc.ano;
    }
}

int CalculaIdade(DATA nascimento, DATA atual) {
    int idade = atual.ano - nascimento.ano;

    if (nascimento.mes > atual.mes) {
        idade--;
    }

    return idade;
}

void DefinirAbate(GADO gado[2000], DATA atual) {
    for (int i = 0; i < 2000; i++) {

        int idade = CalculaIdade(gado[i].nasc, atual);

        if (idade > 5 || gado[i].leite < 40 || (gado[i].leite <= 70 && gado[i].alim > 50)) {

            gado[i].abate = 'S';
        } else {
            gado[i].abate = 'N';
        }
    }
}

float TotalLeite(GADO gado[2000]) {
    float total = 0;

    for (int i = 0; i < 2000; i++) {
        total += gado[i].leite;
    }

    return total;
}

float TotalAlimento(GADO gado[2000]) {
    float total = 0;

    for (int i = 0; i < 2000; i++) {
        total += gado[i].alim;
    }

    return total;
}

float TotalLeiteAposAbate(GADO gado[2000]) {
    float total = 0;

    for (int i = 0; i < 2000; i++) {
        if (gado[i].abate == 'N') {
            total += gado[i].leite;
        }
    }

    return total;
}

float TotalAlimentoAposAbate(GADO gado[2000]) {
    float total = 0;

    for (int i = 0; i < 2000; i++) {
        if (gado[i].abate == 'N') {
            total += gado[i].alim;
        }
    }

    return total;
}

int TotalAbate(GADO gado[2000]) {
    int total = 0;

    for (int i = 0; i < 2000; i++) {
        if (gado[i].abate == 'S') {
            total++;
        }
    }

    return total;
}

int main() {
    GADO gado[2000];

    DATA atual;

    int opcao;

    cout << "Digite o mes atual: ";
    cin >> atual.mes;

    cout << "Digite o ano atual: ";
    cin >> atual.ano;

    LerBase(gado);

    DefinirAbate(gado, atual);

    do {
        cout << "\n========== MENU ==========\n";
        cout << "1 - Total de leite produzido por semana\n";
        cout << "2 - Total de alimento consumido por semana\n";
        cout << "3 - Total de leite apos o abate\n";
        cout << "4 - Total de alimento apos o abate\n";
        cout << "5 - Numero de cabecas para abate\n";
        cout << "6 - Sair\n";
        cout << "Escolha uma opcao: ";
        cin >> opcao;

        switch (opcao) {

        case 1:
            cout << "\nTotal de leite: " << TotalLeite(gado) << " litros por semana\n";
            break;

        case 2:
            cout << "\nTotal de alimento: " << TotalAlimento(gado) << " kg por semana\n";
            break;

        case 3:
            cout << "\nLeite apos o abate: " << TotalLeiteAposAbate(gado) << " litros por semana\n";
            break;

        case 4:
            cout << "\nAlimento apos o abate: " << TotalAlimentoAposAbate(gado)
                 << " kg por semana\n";
            break;

        case 5:
            cout << "\nCabecas para abate: " << TotalAbate(gado) << endl;
            break;

        case 6:
            cout << "\nSaindo...\n";
            break;

        default:
            cout << "\nOpcao invalida!\n";
        }

    } while (opcao != 6);

    return 0;
}