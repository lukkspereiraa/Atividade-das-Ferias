#include <stdio.h>

long long calcularFatorial(long long num) {
    if(num == 0) {
        return 1;
    } else {
        return num * calcularFatorial(num - 1);
    }
}

long long main() {
    long long num, res;

    printf("Digite um numero: ");
    scanf("%lld", &num);
    
    res = calcularFatorial(num);

    printf("O resultado do fatorial de %lld eh: %lld", num, res);
}