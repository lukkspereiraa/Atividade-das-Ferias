#include <stdio.h>
#include <limits.h>

int calcularMinimo(int numeros[], int tamanho);
int calcularMaximo(int numeros[], int tamanho);

int main() {
    const int tamanhoMaximo = 100; 
    int numeros[tamanhoMaximo];
    int contador = 0;
    int num;

    printf("Digite os numeros (insira um valor negativo para encerrar):\n");

    do {
        scanf("%d", &num);

        if (num >= 0) {
            numeros[contador] = num;
            contador++;
        }

    } while (num >= 0 && contador < tamanhoMaximo);

    if (contador == 0) {
        printf("Nenhum numero inserido.\n");
        return 0;
    }

    int minimo = calcularMinimo(numeros, contador);
    int maximo = calcularMaximo(numeros, contador);

    printf("Valor Minimo: %d\n", minimo);
    printf("Valor Maximo: %d\n", maximo);

    return 0;
}

int calcularMinimo(int numeros[], int tamanho) {
    int minimo = INT_MAX;

    for (int i = 0; i < tamanho; i++) {
        if (numeros[i] < minimo) {
            minimo = numeros[i];
        }
    }

    return minimo;
}

int calcularMaximo(int numeros[], int tamanho) {
    int maximo = INT_MIN;

    for (int i = 0; i < tamanho; i++) {
        if (numeros[i] > maximo) {
            maximo = numeros[i];
        }
    }

    return maximo;
}