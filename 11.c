#include <stdio.h>
#include <string.h>
#include <ctype.h>

int ehPalindromo(char *texto) {
    int i, j;
    int tamanho = strlen(texto);

    char semEspacos[tamanho + 1];
    int index = 0;
    for (i = 0; i < tamanho; i++) {
        if (!isspace(texto[i])) {
            semEspacos[index++] = tolower(texto[i]);
        }
    }
    semEspacos[index] = '\0';

    for (i = 0, j = index - 1; i < j; i++, j--) {
        if (semEspacos[i] != semEspacos[j]) {
            return 0;
        }
    }

    return 1;
}

int main() {
    char entrada[100];

    printf("Digite uma palavra ou frase: ");
    fgets(entrada, sizeof(entrada), stdin);
    entrada[strcspn(entrada, "\n")] = '\0';

    if (ehPalindromo(entrada)) {
        printf("É um palíndromo.\n");
    } else {
        printf("Não é um palíndromo.\n");
    }

    return 0;
}
