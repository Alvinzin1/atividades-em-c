#include <stdio.h>
#include <stdlib.h>

// algoritmo que leia um número real e mostre na tela o seu dobro e a sua terça parte
int main(void){
    float num;

    printf("Informe um numero inteiro: ");
    scanf("%f", &num);

    system("cls");

    printf("Numero informado: %f\nO dobro %f\nA terca parte %f\n", num, num*2, num/3);

    system("pause");
    return 0;
}