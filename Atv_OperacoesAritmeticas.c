#include <stdio.h>
#include <stdlib.h>

// Esse programa realiza todos os tipos de operações aritmeticas no C 
int main(void){
    
    int numero1, numero2, soma, subtracao, multiplicacao, divisao, resto;
    
    printf("Me informe o primeiro número:\n");
    scanf("%d", &numero1); // Pegando o primeiro valor 

    printf("Me informe o segundo número:\n");
    scanf("%d", &numero2); // Pegando o segundo valor

    soma = numero1 + numero2; // Encontrando a soma dos dois valores
    subtracao = numero1 - numero2; // Encontrando a subtracao dos dois valores
    multiplicacao = numero1 * numero2; // Encontrando a multiplicacao dos dois valores
    divisao = numero1 / numero2; // Encontrando a divisao dos dois valores
    resto = numero1 % numero2; // Encontrando o resto dos dois valores

    printf("Soma é %d + %d = %d\n", numero1, numero2, soma); // Mostrando a soma dos dois valores
    printf("Subtracao é %d - %d = %d\n", numero1, numero2, subtracao); // Mostrando a subtracao dos dois valores
    printf("Multiplicacao é %d * %d = %d\n", numero1, numero2, multiplicacao); // Mostrando a multiplicacao dos dois valores
    printf("Divisao é %d / %d = %d\n", numero1, numero2, divisao); // Mostrando a divisao dos dois valores
    printf("Resto é %d %% %d = %d\n", numero1, numero2, resto); // Mostrando o resto dos dois valores

    system("pause");
    return 0;
}