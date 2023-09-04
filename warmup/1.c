#include <stdio.h>

void combinador(char *str1, char *str2, char *str3) {
    int i = 0, j = 0, k = 0;
    while (str1[i] != '\0' && str2[j] != '\0') {
        str3[k++] = str1[i++];
        str3[k++] = str2[j++];
    }
    while (str1[i] != '\0') {
        str3[k++] = str1[i++];
    }
    while (str2[j] != '\0') {
        str3[k++] = str2[j++];
    }
    str3[k] = '\0';
}

int main() {
    int N;
    scanf("%d", &N);

    while (N--) { 
        char str1[100], str2[100], str3[200];
        scanf("%s %s", str1, str2);

        combinador(str1, str2, str3);
        printf("%s\n", str3);
    }

    return 0;
}
