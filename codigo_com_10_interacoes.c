#include <stdio.h>

void insertionSort(int *lista, int tamanho) {
    int i, j, aux; //Linha declarando contador para fazer a verificação e um auxiliar para armazernar o valor que esta sendo inserido temporariamente 
    for(i = 1; i < tamanho; i++) { // for responsavel pela ordenação
        aux = lista[i];
        j = i - 1;

        // Move elementos maiores que aux uma posição à frente
        while(j >= 0 && lista[j] > aux) {
            lista[j + 1] = lista[j];
            j = j - 1;
        }
        lista[j + 1] = aux;
    }
}

void imprimirLista(int *lista, int tamanho) {
    int i;
    for(i = 0; i < tamanho; i++) {  
        printf("%d ", lista[i]);
    }
    printf("\n");
}


int main() {
    int lista[] = {5, 2, 9, 1, 5, 6, 8, 9, 10}; // Array de exemplo para ordenar
    int tamanho = sizeof(lista) / sizeof(lista[0]); // Calcula o tamanho do array

    printf("Lista antes da ordenacao:\n");
    imprimirLista(lista, tamanho); // Exibe a lista antes da ordenação

    insertionSort(lista, tamanho); // Chama a função de ordenação

    printf("Lista apos a ordenacao:\n");
    imprimirLista(lista, tamanho); // Exibe a lista após a ordenação

    return 0;
}
