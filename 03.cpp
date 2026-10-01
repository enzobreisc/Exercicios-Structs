#include <iostream>
using namespace std;

struct ALUNO {
    string nome;
    float nota;
};

void CheckStatus(ALUNO a) {
    if (a.nota >= 7) {
        cout << a.nome << ", foi aprovado com nota " << a.nota;
    }
}

int main() {
    ALUNO a;

    cout << "Qual o nome do aluno?" << endl;
    cin >> a.nome;

    cout << "Qual foi a nota do aluno?" << endl;
    cin >> a.nota;

    cout << "\n";

    CheckStatus(a);

    return 0;
}