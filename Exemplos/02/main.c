// Crie um programa que leia do teclado seis valores inteiros e em seguida mostra na
// tela os valores lidos.

#include <stdio.h>

int main() {
  int valoresTeclado[6];
  int contador;

  for (contador = 0;  contador < 6 ; contador++){
    printf("Digite o %d° Número: ", contador+1);
    scanf("%d", &valoresTeclado[contador]);
  }

  printf("\nvetor = ");

  for (contador = 0; contador <6; contador++){
    printf("[%d]", valoresTeclado[contador]);
  }
  printf("\n");
  return 0;
}
