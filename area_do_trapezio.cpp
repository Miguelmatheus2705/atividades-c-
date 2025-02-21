#include <iostream>

int main() {
    // Declaração das variáveis
    double baseMaior, baseMenor, altura, area;

    // Solicita ao usuário as medidas do trapézio
    std::cout << "Digite a medida da base maior: ";
    std::cin >> baseMaior;

    std::cout << "Digite a medida da base menor: ";
    std::cin >> baseMenor;

    std::cout << "Digite a altura do trapézio: ";
    std::cin >> altura;

    // Cálculo da área do trapézio
    area = (baseMaior + baseMenor) * altura / 2;

    // Exibe o resultado
    std::cout << "A área do trapézio é: " << area << std::endl;

    return 0;
}