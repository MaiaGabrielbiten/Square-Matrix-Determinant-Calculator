##English🇺🇸🇺🇸

## 📚 Concepts Applied
*   **Recursion:** Handling nested function calls to solve sub-problems.
*   **Flow Control:** Using `continue` and manual increments to manage complex loops.
*   **Linear Algebra:** Practical implementation of the Laplace Theorem.

---

# NxN Matrix Determinant Calculator

A robust and efficient C program designed to calculate the determinant of any square matrix NxN using the **Laplace Expansion** theorem (cofactor expansion). This project serves as an excellent demonstration of **recursion**, **memory management**, and **matrix manipulation** in C.

## 🚀 Features

*   **Recursive Algorithm:** Implements the Laplace Expansion method to break down complex matrices into smaller sub-matrices.
*   **Dynamic Support:** Handles matrices of any size (1x1, 2x2, 3x3, NxN) using Variable Length Arrays (VLA).
*   **Precise Index Control:** Uses a custom "shadow index" logic to generate accurate sub-matrices by skipping specific rows and columns without leaving memory gaps.
*   **English Interface:** Clean terminal interface for user input and results.

## 🧠 How it Works

The core of the program lies in two functions:

1.  **`getsubmatrix`**: This function is the "filter." When calculating the determinant, we must ignore the current row and column. This function copies the remaining elements into a smaller $(n-1) \times (n-1)$ matrix.
2.  **`getdet`**: The recursive engine. It calculates the determinant by multiplying elements by their corresponding cofactors and alternating signs ($+ - + -$). It stops when it reaches the base cases ($1 \times 1$ or $2 \times 2$).

## 🛠️ Installation & Usage

### Prerequisites
*   A C compiler (such as `gcc`, `clang`, or `msvc`).

### Steps
1.  **Clone the repository:**
    ```bash
    git clone [https://github.com/your-username/recursive-matrix-det.git](https://github.com/your-username/recursive-matrix-det.git)
    ```
2.  **Compile the source code:**
    ```bash
    gcc main.c -o determinant_calc
    ```
3.  **Run the application:**
    ```bash
    ./determinant_calc
    ```

## 📝 Example Output
```
Insert a VALID number of rows and columns (square matrix): 3

Insert element [1][1]: 1
Insert element [1][2]: 2
Insert element [1][3]: 3
...
Input Matrix:
1 2 3 
4 5 6 
7 8 9 

Determinant: 0

```
###Portuguese🇧🇷🇧🇷


## 📚 Conceitos Aplicados
*   **Recursividade:** Manipulação de chamadas de função aninhadas para resolver subproblemas.
*   **Controle de Fluxo:** Uso de `continue` e incrementos manuais para gerenciar loops complexos.
*   **Álgebra Linear:** Implementação prática do Teorema de Laplace.

---

# Calculador de Determinante de Matriz NxN

Um programa em C robusto e eficiente projetado para calcular o determinante de qualquer matriz quadrada NxN utilizando o teorema da **Expansão de Laplace** (expansão por cofatores). Este projeto serve como uma excelente demonstração de **recursividade**, **gerenciamento de memória** e **manipulação de matrizes** em C.

## 🚀 Funcionalidades

*   **Algoritmo Recursivo:** Implementa o método de Expansão de Laplace para decompor matrizes complexas em submatrizes menores.
*   **Suporte Dinâmico:** Lida com matrizes de qualquer tamanho (1x1, 2x2, 3x3, NxN) usando *Variable Length Arrays* (VLA).
*   **Controle de Índice Preciso:** Utiliza uma lógica personalizada de "índice sombra" para gerar submatrizes precisas, pulando linhas e colunas específicas sem deixar lacunas na memória.
*   **Interface em Inglês:** Interface de terminal limpa para entrada de dados e exibição de resultados.

## 🧠 Como Funciona

O núcleo do programa reside em duas funções:

1.  **`getsubmatrix`**: Esta função é o "filtro". Ao calcular o determinante, devemos ignorar a linha e a coluna atual. Esta função copia os elementos restantes para uma matriz menor de tamanho $(n-1) \times (n-1)$.
2.  **`getdet`**: O motor recursivo. Calcula o determinante multiplicando os elementos por seus respectivos cofatores e alternando os sinais ($+ - + -$). O processo para ao atingir os casos base ($1 \times 1$ ou $2 \times 2$).

## 🛠️ Instalação e Uso

### Pré-requisitos
*   Um compilador C (como `gcc`, `clang` ou `msvc`).

### Passos
1.  **Clone o repositório:**
    ```bash
    git clone [https://github.com/seu-usuario/nome-do-repositorio.git](https://github.com/seu-usuario/nome-do-repositorio.git)
    ```
2.  **Compile o código-fonte:**
    ```bash
    gcc main.c -o determinant_calc
    ```
3.  **Execute a aplicação:**
    ```bash
    ./determinant_calc
    ```

## 📝 Exemplo de Saída
```text
Insert a VALID number of rows and columns (square matrix): 3

Insert element [1][1]: 1
Insert element [1][2]: 2
Insert element [1][3]: 3
...
Input Matrix:
1 2 3 
4 5 6 
7 8 9 

Determinant: 0
