#include <stdio.h>
#include <string.h>
#include <ctype.h>

int validarSenha(char senha[]) {
    int i, possuiMaiuscula = 0, possuiMinuscula = 0, possuiNumero = 0, possuiEspecial = 0;
    if (strlen(senha) < 8) {
        return 0;
    }
    for (i = 0; senha[i] != '\0'; i++) {
        if (isupper(senha[i])) {
            possuiMaiuscula = 1;
        } else if (islower(senha[i])) {
            possuiMinuscula = 1;
        } else if (isdigit(senha[i])) {
            possuiNumero = 1;
        } else if (!isalnum(senha[i])) {
            possuiEspecial = 1;
        }
    }

    return (possuiMaiuscula && possuiMinuscula && possuiNumero && possuiEspecial);
}

int main() {
    char senha[100];

    printf("Digite a senha: ");
    scanf("%s", senha);

    if (validarSenha(senha)) {
        printf("Senha válida!\n");
    } else {
        printf("Senha inválida!\n");
    }

    return 0;
}