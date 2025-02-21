#include <iostream>
using namespace std;

int main() {
    int votosCandidato1 = 0;
    int votosCandidato2 = 0;
    int votosCandidato3 = 0;
    int voto;

    cout << "As opções são:\n";
    cout << "1. Candidato 1\n";
    cout << "2. Candidato 2\n";
    cout << "3. Candidato 3\n";
    cout << "6. Encerrar votação e mostrar resultados\n";

    while (true) {
        cout << "Entre com o seu voto: ";
        cin >> voto;

        if (voto == 6) {
            break;
        }

        switch (voto) {
            case 1:
                votosCandidato1++;
                break;
            case 2:
                votosCandidato2++;
                break;
            case 3:
                votosCandidato3++;
                break;
            default:
                cout << "Voto inválido! Tente novamente." << endl;
                break;
        }
    }
    
    cout << "Resultados da votação:\n";
    cout << "Candidato 1: " << votosCandidato1 << " votos\n";
    cout << "Candidato 2: " << votosCandidato2 << " votos\n";
    cout << "Candidato 3: " << votosCandidato3 << " votos\n";

    return 0;
}
