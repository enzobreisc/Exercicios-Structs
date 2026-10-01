#include <iostream>
#include <string>

using namespace std;

struct CARRO {
    string marca;
    int ano;
    string cor;
    float preco;
};

void PreencherCarros(CARRO vetcarros[20]) {
    for (int i = 0; i < 20; i++) {
        cout << "\n--- Carro " << i + 1 << " ---\n";

        cout << "Marca: ";
        cin >> vetcarros[i].marca;

        cout << "Ano: ";
        cin >> vetcarros[i].ano;

        cout << "Cor: ";
        cin >> vetcarros[i].cor;

        cout << "Preco: ";
        cin >> vetcarros[i].preco;
    }
}

void CarrosAtePreco(CARRO vetcarros[20], float precoMaximo) {
    bool encontrou = false;

    cout << "\n--- Carros ate R$ " << precoMaximo << " ---\n";

    for (int i = 0; i < 20; i++) {
        if (vetcarros[i].preco <= precoMaximo) {
            cout << "Marca: " << vetcarros[i].marca << endl;
            cout << "Cor: " << vetcarros[i].cor << endl;
            cout << "Ano: " << vetcarros[i].ano << endl;
            cout << endl;

            encontrou = true;
        }
    }

    if (!encontrou) {
        cout << "Nenhum carro encontrado.\n";
    }
}

void CarrosDaMarca(CARRO vetcarros[20], string marca) {
    bool encontrou = false;

    cout << "\n--- Carros da marca " << marca << " ---\n";

    for (int i = 0; i < 20; i++) {
        if (vetcarros[i].marca == marca) {
            cout << "Preco: R$ " << vetcarros[i].preco << endl;
            cout << "Ano: " << vetcarros[i].ano << endl;
            cout << "Cor: " << vetcarros[i].cor << endl;
            cout << endl;

            encontrou = true;
        }
    }

    if (!encontrou) {
        cout << "Nenhum carro dessa marca foi encontrado.\n";
    }
}

void BuscarCarro(CARRO vetcarros[20], string marca, int ano, string cor) {
    bool encontrou = false;

    for (int i = 0; i < 20; i++) {
        if (vetcarros[i].marca == marca && vetcarros[i].ano == ano && vetcarros[i].cor == cor) {

            cout << "\nCarro encontrado!\n";
            cout << "Marca: " << vetcarros[i].marca << endl;
            cout << "Ano: " << vetcarros[i].ano << endl;
            cout << "Cor: " << vetcarros[i].cor << endl;
            cout << "Preco: R$ " << vetcarros[i].preco << endl;

            encontrou = true;
        }
    }

    if (!encontrou) {
        cout << "\nCarro nao encontrado.\n";
    }
}

int main() {
    CARRO vetcarros[20];

    int opcao;

    PreencherCarros(vetcarros);

    do {
        cout << "\n========== MENU ==========\n";
        cout << "1 - Mostrar carros ate determinado preco\n";
        cout << "2 - Mostrar carros de uma marca\n";
        cout << "3 - Buscar carro por marca, ano e cor\n";
        cout << "4 - Sair\n";
        cout << "Escolha uma opcao: ";
        cin >> opcao;

        switch (opcao) {

        case 1: {
            float preco;

            cout << "Digite o preco maximo: ";
            cin >> preco;

            CarrosAtePreco(vetcarros, preco);
            break;
        }

        case 2: {
            string marca;

            cout << "Digite a marca: ";
            cin >> marca;

            CarrosDaMarca(vetcarros, marca);
            break;
        }

        case 3: {
            string marca, cor;
            int ano;

            cout << "Digite a marca: ";
            cin >> marca;

            cout << "Digite o ano: ";
            cin >> ano;

            cout << "Digite a cor: ";
            cin >> cor;

            BuscarCarro(vetcarros, marca, ano, cor);
            break;
        }

        case 4:
            cout << "Saindo...\n";
            break;

        default:
            cout << "Opcao invalida!\n";
        }

    } while (opcao != 4);

    return 0;
}