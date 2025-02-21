#include <iostream>
using namespace std;
 
int main(){
    int n[5], soma = 0;
    for(int i=0; i<5; i++){
        cout << "Digite o valor que vai na posição " << i << ": " << endl;
        cin >> n[i];
        soma += n[i];
    }
    cout << "Somas dos valores:" << soma << endl;

    return 0;
}