
    #include <iostream>
using namespace std;

int main() {
    double numero;
    double soma = 0.0;
    int contador = 0;

    cout << "Digite números reais maiores que zero (0 para terminar): " << endl;

    while (true) {
        cin >> numero;

        if (numero == 0) {
            break; 
        }

        if (numero > 0) {
            soma += numero; 
            contador++; 
        } else {
            cout << "Por favor, insira um número maior que zero." << endl;
        }
    }

    if (contador > 0) {
        double media = soma / contador; 
        cout << "Você inseriu " << contador << " números." << endl;
        cout << "A média dos números inseridos é: " << media << endl;
    } else {
        cout << "Nenhum número válido foi inserido." << endl;
    }

    return 0;

}
 