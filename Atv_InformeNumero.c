#include <stdio.h>
#include <stdlib.h>

// Esse programa simples de entrada e saida de informações 
int main(void){

    int numero; // Variavel inteira chamada numero

    printf("Me informe um numero\n");
    scanf("%d", &numero); // Pegando o valor informado 
    
    // Mostrando na tela o numero informado guardado na variavel numero
    printf("O numero informado foi: %d", numero);
    
    system("pause");
    return 0;
}