#include <iostream>
using namespace std;

int main() {
    const int senhaCorreta = 123; // Defina a senha correta aqui
    int senha;

    cout << "Digite a senha de 3 números inteiros: ";

    while (true) {
        cin >> senha; // Lê a senha do usuário

        if (senha == senhaCorreta) {
            cout << "Senha Correta" << endl; // Mensagem de sucesso
            break; // Sai do loop
        } else {
            cout << "Senha incorreta. Tente novamente: "; // Mensagem de erro
        }
    }

    return 0;
}
