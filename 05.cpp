#include <iostream>
using namespace std;

struct Data {
    int dia;
    int mes;
    int ano;
};

bool AnoBissexto(int ano) {
    if (ano % 400 == 0) {
        return true;
    }

    if (ano % 100 == 0) {
        return false;
    }

    if (ano % 4 == 0) {
        return true;
    }

    return false;
}

bool DataValida(Data data) {
    if (data.mes < 1 || data.mes > 12) {
        return false;
    }

    int diasNoMes;

    if (data.mes == 2) {
        if (AnoBissexto(data.ano)) {
            diasNoMes = 29;
        } else {
            diasNoMes = 28;
        }
    } else if (data.mes == 4 || data.mes == 6 || data.mes == 9 || data.mes == 11) {
        diasNoMes = 30;
    } else {
        diasNoMes = 31;
    }

    if (data.dia < 1 || data.dia > diasNoMes) {
        return false;
    }

    return true;
}

int main() {
    Data data;

    cout << "Digite o dia: ";
    cin >> data.dia;

    cout << "Digite o mes: ";
    cin >> data.mes;

    cout << "Digite o ano: ";
    cin >> data.ano;

    if (DataValida(data)) {
        cout << "Data valida!" << endl;
    } else {
        cout << "Data invalida!" << endl;
    }

    return 0;
}