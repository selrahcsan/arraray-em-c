# 🗂️ Arrays em C 

## 🤔 O que é ?
Array é uma estrutura de dados fundamental usada para armazenar uma coleção de elementos do mesmo tipo, como números inteiros, ponteiros, caracteres ou até mesmo outros arrays. Cada elemento em um array é identificado por um índice numérico, permitindo acesso rápido e eficiente a qualquer elemento na coleção.


### ✏️ Tipos de Arrays: 

- Arrays Unidimensionais -> Vetores
- Arrays Multidimensionais ->Matrizes


## 1️⃣2️⃣3️⃣4️⃣ Arrays Unidimensionais (Vetores)

Um vetor é um conjunto de variáveis do mesmo tipo, usando o mesmo nome. São os arrays mais simples, que se comportam como uma lista linear de elementos. Cada elemento é acessado por um único índice.

### 🗃️ Sintaxe:

```
tipoDadoArray[tamanho]
```


### 🏁 Inicializado de um Vetor :

```
int numerosPares[4] = {2,4,6,8};
```


### 🎲 Acessando dados de um vetor:

```
printf("O segundo item do vetor é: %d\n", numerosPares[1]);
```

### 😱 *No trecho de código acima,é mostrado o segundo item do vetor, mas por que é no vetor é buscada a posição  com índice 1 (numerosPares[1]) ?*

## ⏱️ Vamos Praticar ?

### 🧑🏼‍💻 Exemplo 01 : 

Crie um algoritmo em C que utilize um vetor para armazenar as notas de 4 alunos. O programa deve solicitar ao usuário que digite a nota de cada aluno e, em seguida, armazená-la no vetor. Ao final, o programa deve exibir as notas de todos os alunos. **Desafio**: Aumentar para 100 alunos:


### 🧑🏼‍💻 Exemplo 02 :

Crie um algoritmo que leia do teclado seis valores inteiros e em seguida mostra na
tela os valores lidos.

## 🤯 Desafio 01 : E como seriam com palavras ?

Crie um algoritmo que leia do teclado seis letras e em seguida mostra na
tela os valores lidos.



## 🔢 Arrays Multidimensionais (Matrizes)


São arrays que possuem mais de uma dimensão, como matrizes com mais de 2 dimensões. Cada elemento é acessado por múltiplos índices, um para cada dimensão.

### 🗄️ Sintaxe:

```
tipoArray[linha][coluna]
```


### 🏁 Inicializando  uma Matriz :

```
int numerosPares[2][2] = {{2,4},{6,8};
```



