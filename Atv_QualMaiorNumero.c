#include <stdio.h>
#include <stdlib.h>

// Algoritmo para operador logico e vendo a condicional if
int main(void){
    
    int numero1, numero2;
    
    printf("Me informe o primeiro número:\n");
    scanf("%d", &numero1); // Pegando o primeiro valor 

    printf("Me informe o segundo número:\n");
    scanf("%d", &numero2); // Pegando o segundo valor

    // Usando a condicional if para verificar qual numero é maior e qual o menor
    if (numero1 > numero2){
        printf("O %d é maior que %d\n", numero1, numero2);
    }else if(numero1 == numero2){   
        printf("O %d é igual a %d\n", numero2, numero1);
    }else{
        printf("O %d é maior que %d\n", numero2, numero1);
    }

    system("pause");
    return 0;
}