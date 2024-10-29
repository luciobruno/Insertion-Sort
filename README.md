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

- **Ordenação com `Insertion Sort`**: Ordena o array de entrada em ordem crescente utilizando o método de `Insertion Sort`.
- **Impressão do Array**: Exibe o array antes e após a ordenação para facilitar a visualização dos resultados.

## Funcionalidades e Resultados

### `codigo_base.c`

O codigo_base.c implementa e avalia o desempenho do Insertion Sort em diferentes cenários:

- **Ordenação Completa**: O vetor é ordenado em ordem crescente e decrescente para analisar o desempenho do algoritmo em listas completamente ordenadas.
- **Ordenação Parcial**: O vetor é dividido em duas metades, com uma metade ordenada em ordem crescente e a outra em ordem decrescente (e vice-versa), simulando situações de ordenação parcial.
- **Inicialização e Aleatoriedade**: O vetor é inicializado com valores aleatórios entre as operações de ordenação, permitindo testar o algoritmo em listas desordenadas.
- **Medição do Tempo de Execução**: Para cada ordenação, o tempo de execução é exibido, permitindo observar como a disposição dos dados afeta o desempenho do Insertion Sort.

### `codigo_com_10_interacoes.c`

O codigo_com_10_interacoes.c implementa uma versão simples do Insertion Sort, permitindo a observação direta de sua funcionalidade:

- **Exibição dos Dados**: O array é exibido na tela antes da ordenação, facilitando a comparação com o array ordenado.
- **Ordenação e Exibição**: Após a ordenação, o array ordenado é exibido, permitindo visualizar o efeito da ordenação.

O Insertion Sort é eficiente em pequenos arrays ou em listas quase ordenadas, sendo prático para estudos e demonstração dos princípios básicos de ordenação.
