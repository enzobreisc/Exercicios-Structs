#include <iostream>
using namespace std;

struct HORARIO {
    int hora, min, seg;
};

void CheckHorarios(HORARIO h[2]) {
    int horaFinal = h[0].hora + h[1].hora;
    int minFinal = h[0].min + h[1].min;
    int segFinal = h[0].seg + h[1].seg;

    if (segFinal > 60) {
        segFinal = segFinal - 60;
        minFinal += 1;
    }

    if (minFinal > 60) {
        minFinal = minFinal - 60;
        horaFinal += 1;
    }

    cout << "\n";

    cout << "A soma dos horários: " << horaFinal << ":" << minFinal << ":" << segFinal;
}

int main() {
    HORARIO h[2];

    cout << "Digite o Horário 01 (Hora Min Seg): " << endl;
    cin >> h[0].hora >> h[0].min >> h[0].seg;

    cout << "Digite o Horário 02 (Hora Min Seg): " << endl;
    cin >> h[1].hora >> h[1].min >> h[1].seg;

    CheckHorarios(h);

    return 0;
}