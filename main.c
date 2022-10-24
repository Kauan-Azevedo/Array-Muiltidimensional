#include <stdio.h>
#include <stdlib.h>

int main() {
  int linha = 0, coluna = 0;
  int *l = &linha, *c = &coluna;

  printf("valor para Linha e Coluna respectivamente: ");
  scanf("%d %d", l, c);

  int numbers[linha][coluna];
  for (int x = 0; x < linha; x++) {
    for (int y = 0; y < coluna; y++) {
      printf("Digite o valor de [%d] [%d]: ", x, y);
      scanf("%d", &numbers[x][y]);
    }
  }
  printf("\n");
  for (int a = 0; a < linha; a++) {
    for (int b = 0; b < coluna; b++) {
      printf("%d ", numbers[a][b]);
    }
    printf("\n");
  }

  return 0;
}
