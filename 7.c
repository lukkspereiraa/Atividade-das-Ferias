#include <stdio.h>

float calcularQuadrado(float numero) {
    return numero * numero;
}

int main() {
    char opcao;
    float numero;

    do {
        printf("Digite um numero: ");

        if (scanf("%f", &numero) != 1) {
            while (getchar() != '\n');
            
            printf("Entrada invalida. Tente novamente.\n");
            
            continue;
        }

        while (getchar() != '\n');

        float quadrado = calcularQuadrado(numero);

        printf("O quadrado de %.2f eh %.2f\n", numero, quadrado);

        printf("Deseja realizar outro calculo? (S/N): ");
        scanf(" %c", &opcao);

    } while (opcao == 'S' || opcao == 's');

    printf("Programa encerrado.\n");

    return 0;
}