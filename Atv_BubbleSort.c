#include <stdio.h>
#include <stdlib.h>


int main(void){

    int *array, tamanho, aux = 0;

    printf("Digite o tamanho desejado do array:");
    scanf("%d", &tamanho);

    array = (int *)malloc(tamanho * sizeof(int));

    system("cls");

    for (int i = 0; i < tamanho; i++){
        printf("Qual valor na posicao (%d): ", i);
        scanf("%d", &array[i]);
    }
    
    for (int i=0; i < tamanho; i++) { 
        for (int j=i; j < tamanho; j++) {
            if(array[i] > array[j]){
                aux = array[j];
                array[j] = array[i];
                array[i] = aux;
            }
        }
    }

    for (int i = 0; i < tamanho; i++){
        printf("\nNovo valor na posicao (%d): %d", i, array[i]);
    }

    free(array);
    return 0;
}