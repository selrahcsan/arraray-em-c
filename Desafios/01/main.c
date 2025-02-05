//Crie um algoritmo que leia do teclado seis letras e em seguida mostra na
//tela os valores lidos.

#include <stdio.h>

int main() {
  char valoresTeclado[6];
  int contador;

  for (contador = 0;  contador < 6 ; contador++){
    printf("Digite a %dº letra: ", contador+1);
    scanf(" %c", &valoresTeclado[contador]);
  }

  printf("\nvetor = ");

  for (contador = 0; contador <6; contador++){
    printf("[%c]", valoresTeclado[contador]);
  }
  printf("\n");
  return 0;
}
