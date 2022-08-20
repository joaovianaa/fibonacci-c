#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main (){
    int a, b, auxiliar, i, n;
    a = 0;
    b = 1;

    printf("Digite um numero: ");
    scanf("%d", &n);
    printf("\n Serie de Fibonacci:\n\n");

    if (n >= 0){
        printf("%d\n", a);
    }
    if (n >= 1){
        printf("%d\n", b);
    }
    for(i = 2; i <= n; i++){

        auxiliar = a + b;
        a = b;
        b = auxiliar;

        printf("%d\n", auxiliar);
        }
    return 0;
}
