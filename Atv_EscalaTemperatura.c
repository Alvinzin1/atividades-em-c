#include <stdio.h>
#include <stdlib.h>

// Algoritmo para conversão de temperatura.
int main(void){

    int escala;
    float valor, celsius, fahrenheit, kelvin;

    printf("Me informe qual a escala você deseja usar:\n(1) Celsius\n(2) Fahrenheit\n(3) Kelvin\n\nEscolha: ");
    scanf("%d", &escala); // Aloca na memoria a escala que deseja usar

    system("cls");

    printf("Qual o valor da temperatura?\n");
    scanf("%f", &valor); // Aloca na memoria o valor da temperatura que deseja usar

    system("cls");

    // Switch case para determinar os valores em cada escala
    switch (escala){
        case 1:
            celsius = valor;
            fahrenheit = (valor * 9/5) + 32;
            kelvin = valor + 273.15;
            break;
        case 2:
            fahrenheit = valor;
            celsius = (valor - 32) * 5/9;
            kelvin = (valor - 32) * 5/9 + 273.15;
            break;
        case 3:
            kelvin = valor;
            celsius = valor - 273.15;
            fahrenheit = (valor - 273.15) * 9/5 + 32;
            break;
        default:
            printf("O valor informado é incorreto, o programa será encerrado!\n");
    }

    if (escala == 1 || escala == 2 || escala == 3){
        printf("As temparaturas indentificadas foi:\nCelsius: %.2f C\nFahrenheit: %.2f F\nKelvin: %.2f K\n", celsius, fahrenheit, kelvin);
    }
    
    system("pause");
    return 0;
}