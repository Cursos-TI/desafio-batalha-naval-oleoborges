#include <stdio.h>

#define linhas 3
#define coluna 5

int main() {
    int matriz1[linhas][coluna]; 
    int matriz2[linhas][coluna];
    int matriz3[linhas][coluna];
    // zerar matriz
for (int i = 0; i < linhas; i++) {
    for (int j = 0; j < coluna; j++) {
        matriz1[i][j]=0;
        matriz2[i][j]=0;
        matriz3[i][j]=0;
    }
}
  
  // cruz
  for (int y = 0; y < linhas; y++) {
      for (int x = 0; x < coluna; x++) {
                  if ((y*2)+1==linhas)
                  {
                      matriz1[y][x] = 3;
                  }else if ((x*2)+1==coluna)
                      {
                          matriz1[y][x] = 3;
                      }else{ matriz1[y][x] = 0;}
      }
         
  }

// triangulo
int meio = coluna / 2; // Calcula a posição central da matriz
  for (int i = 0; i < linhas; i++) {
      for (int j = meio - i; j <= meio + i; j++) {
          matriz2[i][j] = 3;
      }
  }

// octaedro
for (int y = 0; y < linhas; y++) {
  for (int x = 0; x < coluna; x++) {
      if ((y * 2) + 1 == linhas && (x * 2) + 1 == coluna) {
          matriz3[y][x] = 3;  // Centro
          
          if (x - 1 >= 0) matriz3[y][x - 1] = 3;  // Esquerda
          if (x + 1 < coluna) matriz3[y][x + 1] = 3;  // Direita
          if (y - 1 >= 0) matriz3[y - 1][x] = 3;  // Acima
          if (y + 1 < linhas) matriz3[y + 1][x] = 3;  // Abaixo
      }
  }
}



printf("triangulo:\n"); // Pula para a próxima linha
// Loop para imprimir a matriz como tabela
for (int i = 0; i < linhas; i++) {
  for (int j = 0; j < coluna; j++) {
      printf("%d ", matriz2[i][j]); // %4d alinha os números em 4 espaços
  }
  printf("\n"); // Pula para a próxima linha
}

printf("\n"); // Pula  linha
printf("octaedro:\n"); // Pula para a próxima linha
// Loop para imprimir a matriz como tabela
for (int i = 0; i < linhas; i++) {
  for (int j = 0; j < coluna; j++) {
      printf("%d ", matriz3[i][j]); // %4d alinha os números em 4 espaços
  }
  printf("\n"); // Pula para a próxima linha
}

printf("\n"); // Pula  linha
printf("cruz:\n"); // Pula para a próxima linha
// Loop para imprimir a matriz como tabela
for (int i = 0; i < linhas; i++) {
  for (int j = 0; j < coluna; j++) {
      printf("%d ", matriz1[i][j]); // %4d alinha os números em 4 espaços
  }
  printf("\n"); // Pula para a próxima linha
}
    return 0;
}
