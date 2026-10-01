#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

struct TData {
    int Mes;
    int Ano;
    int Dia;
};

struct Pessoa {
    string nome;
    TData nascimento;
};

void CriaData(TData &D) {
    D.Mes = 1 + (rand() % 12);
    D.Ano = 1940 + (rand() % 74);
    D.Dia = 1 + (rand() % 30);
}

bool DataValida(TData D) {
    if (D.Mes < 1 || D.Mes > 12) {
        return false;
    }

    if (D.Dia < 1 || D.Dia > 30) {
        return false;
    }

    return true;
}

int CalculaIdade(TData nascimento, int anoReferencia) {
    return anoReferencia - nascimento.Ano;
}

void ListarPessoas(Pessoa pessoas[], int quantidade, int anoReferencia) {
    cout << "\n--- PESSOAS E IDADES ---\n";

    for (int i = 0; i < quantidade; i++) {
        int idade = CalculaIdade(pessoas[i].nascimento, anoReferencia);

        cout << "Nome: " << pessoas[i].nome << endl;
        cout << "Nascimento: " << pessoas[i].nascimento.Dia << "/" << pessoas[i].nascimento.Mes
             << "/" << pessoas[i].nascimento.Ano << endl;
        cout << "Idade: " << idade << " anos" << endl;
        cout << endl;
    }
}

void ListarMaisVelhos(Pessoa pessoas[], int quantidade, int idadeMinima, int anoReferencia) {
    cout << "\n--- PESSOAS MAIS VELHAS QUE " << idadeMinima << " ANOS ---\n";

    for (int i = 0; i < quantidade; i++) {
        int idade = CalculaIdade(pessoas[i].nascimento, anoReferencia);

        if (idade > idadeMinima) {
            cout << pessoas[i].nome << " - " << idade << " anos" << endl;
        }
    }
}

int main() {
    srand(time(NULL));

    Pessoa pessoas[10];
    int quantidade;
    int anoReferencia;
    int idadeMinima;

    cout << "Quantas pessoas deseja cadastrar (maximo 10)? ";
    cin >> quantidade;

    for (int i = 0; i < quantidade; i++) {
        cout << "\nDigite o nome da pessoa " << i + 1 << ": ";
        cin >> pessoas[i].nome;

        do {
            CriaData(pessoas[i].nascimento);
        } while (!DataValida(pessoas[i].nascimento));
    }

    cout << "\nDigite o ano de referencia: ";
    cin >> anoReferencia;

    cout << "Digite uma idade: ";
    cin >> idadeMinima;

    ListarPessoas(pessoas, quantidade, anoReferencia);

    ListarMaisVelhos(pessoas, quantidade, idadeMinima, anoReferencia);

    return 0;
}