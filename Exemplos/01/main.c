#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int notas[4 ];
  int contador;

  for (contador = 0; contador < 4; contador++) {
    printf("Digite a nota do aluno %d: ", contador + 1);
    scanf("%d", &notas[contador]);
  }

  printf("\nNotas dos alunos:\n");
  for (contador = 0; contador < 4; contador++) {
    printf("Aluno %d: %d\n", contador + 1, notas[contador]);
  }
  }
