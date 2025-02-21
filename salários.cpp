#include <iostream>

int main() {
    
    double salarioMinimo, salarioFuncionario, quantidadeSalarios;

    std::cout << "Digite o valor do salário mínimo: ";
    std::cin >> salarioMinimo;

    std::cout << "Digite o salário do funcionário: ";
    std::cin >> salarioFuncionario;

    quantidadeSalarios = salarioFuncionario / salarioMinimo;

    std::cout << "O funcionário ganha " << quantidadeSalarios << " salários mínimos." << std::endl;

    return 0;
}