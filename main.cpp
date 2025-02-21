#include <iostream>

int main() {

    double horasTrabalhadasNoMes, salarioPorHora;
    const double horasPorSemana = 40.0;
    const double semanasNoMes = 4.5;
    const double horasNoMes = horasPorSemana * semanasNoMes;
    const double percentualHoraExtra = 0.50; // 50%

    std::cout << "Digite o número de horas trabalhadas no mês: ";
    std::cin >> horasTrabalhadasNoMes;

    std::cout << "Digite o salário por hora: ";
    std::cin >> salarioPorHora;

    double salarioBase = horasPorSemana * salarioPorHora * semanasNoMes;
    double salarioTotal;

    if (horasTrabalhadasNoMes > horasNoMes) {
        double horasExtras = horasTrabalhadasNoMes - horasNoMes;
        double salarioHoraExtra = salarioPorHora * (1 + percentualHoraExtra);
        salarioTotal = (horasNoMes * salarioPorHora) + (horasExtras * salarioHoraExtra);
    } else {
        salarioTotal = horasTrabalhadasNoMes * salarioPorHora;
    }

    std::cout << "O salário total do funcionário é: R$ " << salarioTotal << std::endl;

    return 0;
}