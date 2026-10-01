#include <iostream>
using namespace std;

struct LIVROS {
    string titulo, autor;
    int paginas;
};

void CheckPaginas(LIVROS edicao[15], int minPaginas) {
    int contMinPaginas = 0;

    for (int i = 0; i < 15; i++) {
        if (edicao[i].paginas > minPaginas) {
            contMinPaginas++;
        }
    }

    cout << "Livros com mais de " << minPaginas << " paginas: " << contMinPaginas << endl;
}

int main() {
    LIVROS edicao[15] = {{"Dom Casmurro", "Machado de Assis", 256},
                         {"O Cortico", "Aluisio Azevedo", 180},
                         {"O Alienista", "Machado de Assis", 64},
                         {"Memorias Postumas", "Machado de Assis", 160},
                         {"Capitaes da Areia", "Jorge Amado", 280},
                         {"Vidas Secas", "Graciliano Ramos", 175},
                         {"A Hora da Estrela", "Clarice Lispector", 88},
                         {"Iracema", "Jose de Alencar", 70},
                         {"O Guarani", "Jose de Alencar", 295},
                         {"Macunaima", "Mario de Andrade", 208},
                         {"Sagarana", "Joao Guimaraes Rosa", 320},
                         {"Grande Sertao", "Joao Guimaraes Rosa", 624},
                         {"Quincas Borba", "Machado de Assis", 180},
                         {"A Moreninha", "Joaquim Manuel de Macedo", 120},
                         {"Triste Fim de Policarpo", "Lima Barreto", 200}};

    CheckPaginas(edicao, 80);

    return 0;
}