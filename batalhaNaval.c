#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0
    int tabuleiro[10][10]; //= {
        //     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        //     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        //     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        //     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        //     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        //     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        //     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        //     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        //     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        //     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
        // };
      //setar mariz com zeo->0
      for (int x = 0; x < 10; x++)
      {
          for (int y = 0; y < 10; y++){
              tabuleiro[x][y]=0;
          }
      }
    
        //navio 1 horizontal
        for (int x = 3; x < 4; x++)
        {
            for (int y = 4; y < 7; y++){
                tabuleiro[x][y]=3;
            }
        }
        //navio 2 vertical
        for (int x = 7; x < 10; x++)
        {
            for (int y = 7; y < 8; y++){
               tabuleiro[x][y]=3;
             }
        }
    
         //navio 3 diagonal1
         for (int x = 1; x < 2; x++)
         {
             for (int y = 1; y < 2; y++){
                tabuleiro[x][y]=3;
                tabuleiro[x+1][y+1]=3;
                tabuleiro[x-1][y-1]=3;
              }
         }
    
           //navio 4 diagonal2
           for (int x = 7; x < 8; x++)
           {
               for (int y = 3; y < 4; y++){
                  tabuleiro[x][y]=3;
                  tabuleiro[x-1][y+1]=3;
                  tabuleiro[x+1][y-1]=3;
                  
                }
           }
    
         //cabeçalho
        char letras='A';
        printf("   "); 
        for (int i = 0; i < 10; i++) {
            printf("%3c ", letras); 
            letras++;
            if(i==9){ printf("\n"); }
        }
            // Loop para imprimir a matriz como tabela
            for (int i = 0; i < 10; i++) {
                printf("%3d",i+1); // Pula para a próxima linha
                for (int j = 0; j < 10; j++) {
                    printf("%3d ", tabuleiro[i][j]); // %4d alinha os números em 4 espaços
                }
                printf("\n"); // Pula para a próxima linha
            }
    return 0;
}
