#include <stdio.h>

float jursoSimples (float capitalInicial, float taxa, float periodo) {
    float juros = capitalInicial * taxa * periodo;

    return juros;
}


int main(void) {
    float capitalInicial, taxa;
    int periodo;
    float montanteFinal, juros;

    printf("Digite o Capital Inicial: \n");
    scanf("%f", &capitalInicial);
    printf("Digite a taxa de juros: \n");
    scanf("%f", &taxa);
    printf("Digite o periodo de tempo (em anos): \n");
    scanf("%d", &periodo);

     juros = jursoSimples(capitalInicial, taxa, periodo);


    printf("O juros obtido foi de: %.2f\n", juros);

    montanteFinal = capitalInicial + juros;

    printf("Seu montante final foi de: %.2f", montanteFinal);
    
    return 0;
}