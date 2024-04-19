/******************************************************************************

Crie um programa que pede para o usuário digitar 5 inteiros pelo teclado. 

*******************************************************************************/
#include <stdio.h>

int main() {
    int numeros[5];
    int i;

    printf("Digite 5 números inteiros:\n");
    for (i = 0; i < 5; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("\nVocê digitou os seguintes números:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    return 0; 
}
