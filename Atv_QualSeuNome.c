#include <stdio.h>
#include <stdlib.h>

// Algoritmo que lê o nome de uma pessoa e mostre uma mensagem de boas-vindas para ela
int main(void){

    char nome[100];
    
    printf("Qual o seu nome?\n");
    fgets(nome, sizeof(nome), stdin);

    printf("Ola, %s\n", nome);

    system("pause");
    return 0;
}