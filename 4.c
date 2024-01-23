#include <stdio.h>

void contarCaracteres(char frase[]) {
    int ocorrencias[256] = {0}; 

    for (int i = 0; frase[i] != '\0'; i++) {
        if (frase[i] != ' ') {
            ocorrencias[(int)frase[i]]++;
        }
    }

    printf("Ocorrencias de cada caractere:\n");
    for (int i = 0; i < 256; i++) {
        if (ocorrencias[i] > 0) {
            printf("%c: %d\n", (char)i, ocorrencias[i]);
        }
    }
}

int main() {
    char frase[1000];

    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    contarCaracteres(frase);

    return 0;
}