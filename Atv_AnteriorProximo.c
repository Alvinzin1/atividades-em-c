#include <stdio.h>
#include <stdlib.h>

// Algoritmo que lê um número inteiro e mostra o seu antecessor e seu sucessor
int main(void){
    int num;

    printf("Informe um numero inteiro: ");
    scanf("%d", &num);

    system("cls");

    printf("Numero informado: %d\nO antecessor %d\nO sucessor %d\n", num, num - 1, num + 1);

    system("pause");
    return 0;
}