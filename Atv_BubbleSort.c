#include <stdio.h>
#include <stdlib.h>

// Algoritmo para ordenação via Bubble Sort
int main(void){

    int *array, tamanho, aux = 0;

    printf("Digite o tamanho desejado do array:");
    scanf("%d", &tamanho);

    // Alocando dinamicamente memória para o array
    array = (int *)malloc(tamanho * sizeof(int));

    system("cls");

    for (int i = 0; i < tamanho; i++){
        printf("Qual valor na posicao (%d): ", i);
        scanf("%d", &array[i]);
    }
    
    // Ordenando o array usando o algoritmo de ordenação Bubble Sort
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
        printf("Novo valor na posicao (%d): %d\n", i, array[i]);
    }

    // Liberando a memória alocada para o array
    free(array);

    system("pause");
    return 0;
}