#include <iostream>
#include <iomanip>

using namespace std;

double converterMoeda(double valor, char moeda) {
    switch (moeda) {
        case 'D': // Dólar
            return valor * 0.19; // Exemplo de taxa de conversão
        case 'E': // Euro
            return valor * 0.18; // Exemplo de taxa de conversão
        case 'L': // Libra
            return valor * 0.16; // Exemplo de taxa de conversão
        default:
            return 0.0;
    }
}

int main() {
    double valorReais;
    char moeda;

    cout << "Digite a quantia em reais (BRL): ";
    cin >> valorReais;

    cout << "Escolha a moeda para conversão: " << endl;
    cout << "D - Dólar" << endl;
    cout << "E - Euro" << endl;
    cout << "L - Libra" << endl;
    cout << "Digite a letra correspondente: ";
    cin >> moeda;

    moeda = toupper(moeda); // Para garantir que a letra seja maiúscula

    double valorConvertido = converterMoeda(valorReais, moeda);

    if (valorConvertido > 0) {
        cout << fixed << setprecision(2); // Formata a saída para 2 casas decimais
        cout << "Valor convertido: " << valorConvertido << " " 
             << (moeda == 'D' ? "USD" : (moeda == 'E' ? "EUR" : "GBP")) 
             << endl;
    } else {
        cout << "Moeda inválida. Por favor, escolha D, E ou L." << endl;
    }

    return 0;
}