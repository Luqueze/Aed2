#include<iostream>

using namespace std;

bool estacontido(int vetor[], int num){
    for(int i = 0; i < 10; i++){
        if(vetor[i] == num){
            return true;
        }
    } 
    return false;
} 