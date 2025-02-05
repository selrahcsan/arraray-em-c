#include <stdio.h>
#include <stdlib.h>
int main()
{
    int matriz[3][3];
    int linha, coluna;

    printf("\nDigite o numeros da matriz 3x3:\n");
    for (linha = 0; linha <3; linha++){
        for (coluna = 0; coluna <3; coluna++){
            printf("Posição [%d][%d]: ", linha, coluna);
            scanf("%d", &matriz[linha][coluna]);
        }
    }

    printf("\n\nMatriz 3x3:\n\n");
    for (linha = 0; linha <3; linha++){
        for (coluna = 0; coluna <3; coluna++){
            printf("%d\t", matriz[linha][coluna]);
        }
        printf("\n\n");
    }

    return 0;
}
