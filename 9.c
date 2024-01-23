#include <stdio.h>

int ehBissexto(int ano);

int main() {
    int ano;
    char opcao;

    do {
        printf("Digite o ano para verificar se eh bissexto: ");
        scanf("%d", &ano);

        if (ehBissexto(ano)) {
            printf("%d eh um ano bissexto.\n", ano);
        } else {
            printf("%d nao eh um ano bissexto.\n", ano);
        }

        printf("Deseja realizar outro calculo? (S/N): ");
        scanf(" %c", &opcao);

    } while (opcao == 'S' || opcao == 's');

    return 0;
}

int ehBissexto(int ano) {
    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
        return 1; 
    } else {
        return 0; 
    }
}