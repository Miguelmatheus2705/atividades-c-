#include <iostream>

int main() {
    int anoNascimento, anoAtual;

    std::cout << "Digite o ano de nascimento: ";
    std::cin >> anoNascimento;

    std::cout << "Digite o ano atual: ";
    std::cin >> anoAtual;

    int idadeAnos = anoAtual - anoNascimento;

    int idadeMeses = idadeAnos * 12;
    int idadeDias = idadeAnos * 365; 
    int idadeSemanas = idadeDias / 7;

    std::cout << "Idade em anos: " << idadeAnos << std::endl;
    std::cout << "Idade em meses: " << idadeMeses << std::endl;
    std::cout << "Idade em dias: " << idadeDias << std::endl;
    std::cout << "Idade em semanas: " << idadeSemanas << std::endl;

    return 0;
}