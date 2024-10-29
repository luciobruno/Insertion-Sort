# Insertion Sort

Este repositório contém dois programas em C que implementam e demonstram o funcionamento de algoritmos de ordenação utilizando o método `Insertion Sort`. Cada programa possui uma função específica para ordenar arrays, além de medir o tempo de execução para avaliar a eficiência do algoritmo.

## Estrutura dos Arquivos

### 1. `codigo_base.c`

Este arquivo contém uma implementação mais complexa do algoritmo de ordenação com as seguintes funcionalidades:

- **Ordenação Crescente**: Ordena o vetor em ordem crescente.
- **Ordenação Decrescente**: Ordena o vetor em ordem decrescente.
- **Metade Crescente e Metade Decrescente**: Ordena a primeira metade do vetor em ordem crescente e a segunda metade em ordem decrescente.
- **Metade Decrescente e Metade Crescente**: Ordena a primeira metade do vetor em ordem decrescente e a segunda metade em ordem crescente.
- **Vetor Aleatório**: Inicializa o vetor com valores aleatórios, utilizado para resetar o vetor entre as operações.
- **Medição do Tempo de Execução**: Mede e exibe o tempo de execução para cada tipo de ordenação.

### 2. `codigo_com_10_interacoes.c`

Este arquivo possui as seguintes funcionalidades:

- **Ordenação com Insertion Sort**: Ordena o array de entrada em ordem crescente utilizando o método de `Insertion Sort`.
- **Impressão do Array**: Exibe o array antes e após a ordenação para facilitar a visualização dos resultados.

## Resultados

<br>

| **Tabela de Comparação de Tempos para 100000 Números** |                        |
|------------------------------------|------------------------|
| **Passos**                         | **Tempo de execução**  |
| Vetor totalmente ordenado decrescentemente | 6,05s           |
| Vetor totalmente ordenado crescentemente   | 12,05s          |
| Primeira metade ordenada crescente, segunda metade ordenada decrescentemente | 3,11s |
| Primeira metade ordenada decrescente, segunda metade ordenada crescentemente | 5,83s |
| Elementos totalmente desordenados           | 6,16s           |
