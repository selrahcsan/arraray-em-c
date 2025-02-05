#include <stdio.h>

int main() {
    int matriz[5][2];
    int contador;

    for (contador = 0; contador < 5; contador++) {
        matriz[contador][0] = (contador + 1) * 2;
        matriz[contador][1] = (contador + 1) * 2 - 1;
    }

    // Impressão da matriz
    printf("Par\tÍmpar \n");
    for (int i = 0; i < 5; i++) {
        printf("%d\t%d\n", matriz[i][0], matriz[i][1]); // \t separa os números com tabulação
    }

    return 0;
}
