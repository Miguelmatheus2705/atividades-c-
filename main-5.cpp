#include <iostream>

using namespace std;

class Estoque {
private:
    int quantidade;

public:
    Estoque() : quantidade(0) {}

    void adicionar(int qtd) {
        quantidade += qtd;
        cout << qtd << " itens adicionados. Total no estoque: " << quantidade << endl;
    }

    void remover(int qtd) {
        if (qtd > quantidade) {
            cout << "Quantidade insuficiente no estoque!" << endl;
        } else {
            quantidade -= qtd;
            cout << qtd << " itens removidos. Total no estoque: " << quantidade << endl;
        }
    }

    void consultar() {
        cout << "Quantidade atual no estoque: " << quantidade << endl;
    }
};

int main() {
    Estoque estoque;
    int opcao, quantidade;

    do {
        cout << "\nEscolha uma opção:\n";
        cout << "1 - Adicionar itens ao estoque\n";
        cout << "2 - Remover itens do estoque\n";
        cout << "3 - Consultar quantidade no estoque\n";
        cout << "4 - Sair\n";
        cout << "Digite sua opção: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                cout << "Quantos itens adicionar? ";
                cin >> quantidade;
                estoque.adicionar(quantidade);
                break;
            case 2:
                cout << "Quantos itens remover? ";
                cin >> quantidade;
                estoque.remover(quantidade);
                break;
            case 3:
                estoque.consultar();
                break;
            case 4:
                cout << "Saindo do programa." << endl;
                break;
            default:
                cout << "Opção inválida! Tente novamente." << endl;
        }
    } while (opcao != 4);

    return 0;
}