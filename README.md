# 🗂️ Arrays em C 

## 🤔 O que é ?
Array é uma estrutura de dados fundamental usada para armazenar uma coleção de elementos do mesmo tipo, como números inteiros, ponteiros, caracteres ou até mesmo outros arrays. Cada elemento em um array é identificado por um índice numérico, permitindo acesso rápido e eficiente a qualquer elemento na coleção.


### ✏️ Tipos de Arrays: 

- Arrays Unidimensionais -> Vetores
- Arrays Multidimensionais -> Matrizes


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
int numerosPares[2][2] = {{2,4},{6,8}};
```

### Acessando dados de uma Matriz

```
printf("Na linha 1 e coluna 2, se encontra o numero par: %d\n", numerosPares[1][2]);
```

## ⏱️ Vamos Praticar ?

### 🧑🏼‍💻 Exemplo 03 :

Crie um algoritmo em C, usando uma matriz, para o cadastro da matricula e nota de 10 anos e em seguida mostre na tela.

### 🧑🏼‍💻 Exemplo 04 :

Crie um algoritmo que separe os números pares e impares até 10.

## 🤯 Desafio 02 : 

Crie um algoritmo em C, onde é possível o usuário determinar o tamanho da matriz, depois represente a matriz em tela usando 0.

# 🖥️ Programas Utilizados  para a criação desse material:

- Gnome Builder - IDE;
- Gosthwriter - Editor de Markdown
- Characters - Utilitário de Emojis