#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO 100000

// Função para o Insertion Sort em ordem crescente
void insertionSortCrescente(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

// Função para o Insertion Sort em ordem decrescente
void insertionSortDecrescente(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] < key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

// Função para inicializar o vetor com valores aleatórios
void vetorAleatorio(int arr[]) {
    for (int i = 0; i < TAMANHO; i++) {
        arr[i] = rand() % TAMANHO;
    }
}

// Função para medir o tempo de execução de uma função de ordenação
void medirTempo(void (*sortFunc)(int[], int), int arr[], int n, const char* mensagem) {
    printf("%s\n", mensagem);
    clock_t inicio = clock();
    sortFunc(arr, n);
    clock_t fim = clock();
    double tempo = ((double)(fim - inicio)) / CLOCKS_PER_SEC;
    printf("Tempo de execução: %.2f segundos\n", tempo);
}

// Função para ordenar a primeira metade em ordem crescente e a segunda metade em ordem decrescente
void metadeCrescenteMetadeDecrescente(int arr[], int n) {
    insertionSortCrescente(arr, n / 2); // Ordena a primeira metade em ordem crescente
    insertionSortDecrescente(arr + n / 2, n / 2); // Ordena a segunda metade em ordem decrescente
}

// Função para ordenar a primeira metade em ordem decrescente e a segunda metade em ordem crescente
void metadeDecrescenteMetadeCrescente(int arr[], int n) {
    insertionSortDecrescente(arr, n / 2); // Ordena a primeira metade em ordem decrescente
    insertionSortCrescente(arr + n / 2, n / 2); // Ordena a segunda metade em ordem crescente
}

int main() {
    srand(time(NULL)); // Inicializa a semente para valores aleatórios
    int arr[TAMANHO];

    // Vetor com valores aleatórios
    vetorAleatorio(arr);

    // Ordenação decrescente
    medirTempo(insertionSortDecrescente, arr, TAMANHO, "Vetor ordenado decrescentemente:");

    // Ordenação crescente usando o vetor decrescente
    medirTempo(insertionSortCrescente, arr, TAMANHO, "Vetor ordenado crescentemente a partir do vetor decrescente:");

    // Primeira metade ordenada crescente, segunda metade ordenada decrescentemente
    medirTempo(metadeCrescenteMetadeDecrescente, arr, TAMANHO, "Primeira metade ordenada crescente, segunda metade ordenada decrescentemente:");

    // Primeira metade ordenada decrescente, segunda metade ordenada crescentemente
    medirTempo(metadeDecrescenteMetadeCrescente, arr, TAMANHO, "Primeira metade ordenada decrescente, segunda metade ordenada crescentemente:");

    // Elementos totalmente desordenados
    vetorAleatorio(arr); // Reinicializa o vetor com valores aleatórios para desordenação
    medirTempo(insertionSortCrescente, arr, TAMANHO, "Elementos totalmente desordenados:");

    return 0;
}