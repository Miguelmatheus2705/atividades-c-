#include <iostream>

int main() {

    int valor1, valor2;

    std::cout << "Digite o primeiro valor: ";
    std::cin >> valor1;

    std::cout << "Digite o segundo valor: ";
    std::cin >> valor2;

    if (valor1 > valor2) {
        std::cout << "O maior valor é: " << valor1 << std::endl;
    } else {
        std::cout << "O maior valor é: " << valor2 << std::endl;
    }

    return 0;
