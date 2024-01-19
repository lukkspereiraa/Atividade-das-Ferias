#include <stdio.h>

void separarParImpar(int *numeros, int quantidade, int *pares, int *impares) {
    for (int i = 0; i < quantidade; i++) {
        if (numeros[i] % 2 == 0) {
            *pares++ = numeros[i];
        } else {
            *impares++ = numeros[i];
        }
    }
}

int main() {
    int quantidade;

    printf("Digite a quantidade de números: ");
    scanf("%d", &quantidade);

    int numeros[quantidade];
    int pares[quantidade];
    int impares[quantidade];

    printf("Digite os números separados por espaço:\n");

    for (int i = 0; i < quantidade; i++) {
        scanf("%d", &numeros[i]);
    }

    separarParImpar(numeros, quantidade, pares, impares);

    printf("%-15s%-15s\n", "Números Pares", "Números Ímpares");

    for (int i = 0; i < quantidade; i++) {
        if (pares[i] != 0 && impares[i] != 0) {
            printf("%-15d%-15d\n", pares[i], impares[i]);
        } else {
            break;
        }
    }

    return 0;
}
