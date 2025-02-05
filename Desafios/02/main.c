#include <stdio.h>
#include <stdlib.h>
int main()
{
    int tamanhoLinha,tamanhoColuna, linha, coluna;

    printf("Digite o Numero de linhas:");
    scanf("%d", &tamanhoLinha);

    printf("Digite o Numero de colunas:");
    scanf("%d", &tamanhoColuna);

    int matriz[tamanhoLinha][tamanhoColuna];

    for (linha = 0; linha < tamanhoLinha; linha++){
        for (coluna = 0; coluna < tamanhoColuna; coluna++){
            matriz[linha][coluna] = 0;
        }
    }

    printf("\n\nMatriz %dx%d:\n\n", tamanhoLinha, tamanhoColuna);
    for (linha = 0; linha < tamanhoLinha; linha++){
        for (coluna = 0; coluna < tamanhoColuna; coluna++){
            printf("%d\t", matriz[linha][coluna]);
        }
        printf("\n\n");
    }

    return 0;
}
