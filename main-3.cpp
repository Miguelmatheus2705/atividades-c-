#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int voto, cand1=0, cand2= 0, cand3=0, nulo, branco;
    }
    
    do{
        cout << "digite seu voto:";
        cin >> voto;
     
     switch(voto){
         case:1
         cand1++;
         break;
           
     switch(voto){
         case:2
         cand2++;
         break;
     
       
     switch(voto){
         case:3
         cand3++;
         break;
     
       
     switch(voto){
         case:4
         nulo++;
         break;
         
           
     switch(voto){
         case:5
         branco++;
         break;
         
         
     case6:
     cout << "Finalizado!";
     break;
     
     
    }
    
    while(voto != 6 );
    
        if(cand1 > cand2 && cand2 > cand3){
        cout << "Candidato 1 venceu!!";
        
        
        }else if (cand2 > cand1 && cand2 > cand3){
            cout << "Candidato 2 venceu!!";
            
        }else if (cand3 > cand1 && cand3 > cand2){
            cout << "Candidato 3 venceu!!";
        }
         cout << "Candidato1:" << cand1 <<endl
         cout << "Candidato2:" << cand2 <<endl
         cout << "Candidato3:" << cand3 <<endl
         cout << "Candidato4:" << cand4 <<endl
     }

    return 0;
}