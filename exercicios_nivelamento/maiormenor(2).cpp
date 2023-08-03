#include<iostream>

using namespace std;

void maior_menor(int vetor[], int tam){
    int maior = vetor[0];
    int menor = vetor[0];
    for(int i = 0; i < tam; i++){
        if(vetor[i] < menor)
            menor = vetor[i];
        if(vetor[i] > maior)
            maior = vetor[i];    
    }

    cout << "O maior elemento e: " << maior;
    cout << "O menor elemento e: " << menor;
}