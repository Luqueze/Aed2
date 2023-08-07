#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool ispalindromo(char palavra[]) {
    int i, j, tamanho;
    tamanho = strlen(palavra);
    for (i = 0, j = tamanho - 1; i < tamanho / 2; i++, j--) {
        if (palavra[i] != palavra[j]) {
            return false;
        }
    }
    return true;
}

int main() {

    int i = 0;
    char palavra[100];
    do{

        fgets(palavra, 100, stdin);

        palavra[i] = '\0';
        if (strcmp(palavra, "FIM") == 0) {
            break;
        }
        if (ispalindromo(palavra)) {
            printf("SIM\n");
        } else {
            printf("NAO\n");
        }
    }while(strcmp(palavra, "FIM") != 0);  
    
    return 0;

}
