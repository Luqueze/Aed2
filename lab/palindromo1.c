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
    char palavra[100];
    do {
        scanf(" %[^\n\r]", palavra);


        if (strcmp(palavra, "FIM") == 0) {
            break;
        }

        if (ispalindromo(palavra)) {
            printf("SIM\n");
        } else {
            printf("NAO\n");
        }
    } while (1);

    return 0;
}
