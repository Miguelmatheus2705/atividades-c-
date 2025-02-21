#include <iostream>
using namespace std;

int main()
{
{
    double altura, peso, imc;
    string sexo;
    
    cout << "Digite 'M' para masculino, e 'F' para feminino: "<< endl;
    cin >> sexo;
    
    cout << "Digite o peso da pessoa: " << endl;
    cin >> peso;
    
    cout << "Digite a altura da pessoa: " << endl;
    cin >> altura;
    
    imc = peso / (altura * altura);
    
    cout << "O gênero é: " << sexo << endl;
    
    if(sexo == "f"){
            if(imc <= 19){
                cout << "IMC abaixo do normal!" << endl;
            }
            else if (imc > 19 and imc <= 23.9){
                cout << "IMC normal!" << endl;
            }
            else if (imc >= 24 and imc <= 28.9){
                cout << "IMC obesidade leve!" << endl;
            }
            else if (imc >= 29 and imc <= 38.9){
                cout << "IMC obesidade moderada!" << endl;
            }
            else {
                cout << "IMC Mórbida!" << endl;
            }
    }
    else{
            if(imc >= 43){
                cout << "IMC Mórbida!" << endl;
            }
            
            else if (imc >= 30 and imc <= 39.9){
                cout << "IMC obesidade moderada!" << endl;
            }
            else if (imc >= 25 and imc <= 29.9){
                cout << "IMC obesidade leve!" << endl;
            }
            else if (imc > 20 and imc <= 24.9){
                cout << "IMC normal!" << endl;
            }
            
            else{
                cout << "IMC Mórbida!" << endl;
            }
        }
     cout << "O IMC é: " << imc << endl;
    }
    
       

    return 0;
}