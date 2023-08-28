#include<stdio.h>
//1
typedef struct {
    int tam;
    int* elems;
} Vetor;

Vetor* CriarVetor(int tam) {
    Vetor* v = (Vetor*) malloc(sizeof(Vetor));
    v->tam = tam;
    v->elems = (int*)malloc(tam * sizeof(int));
    return v;
}

//2
void FillVector(Vetor *v, int tam) {
    for (int i = 0; i < v->tam; i++) {
        v->elems[i] = i;
    }
}
//3
void Inserir(Vetor *v, int i, int elem) {
    if (i >= v->tam) {
        v->elems = (int*)realloc(v->elems, (i + 1) * sizeof(int));
        v->tam = i + 1;
    }
    v->elems[i] = elem;
}

//4
int Retornar(Vetor *v, int i){
    if (i >= v->tam) {
        printf("Nao esta no limite\n");
        return 1;
    }
    return v->elems;
}

//5
void ApagarElementos(Vetor *v){
    free(v->elems);
    free(v);
}

//6
void ExibirVetor(Vetor *v){
    for (int i = 0; i < v->tam; i++) {
        printf("%d", v->elems[i]);

    }

}






