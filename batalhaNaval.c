#include <stdio.h>

int main()
{
    // criando tabuleiro nível novato
    int tabuleiro[10][10] = {
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}};
    // criando navios horizontal e vertical
    int navioshorizontal[3] = {1, 2, 3};
    int naviosvertical[3] = {3, 2, 1};

    for (int i = 0; i < 3; i++)
    {
        // a esturuta a seguir é uma matriz[x][y]
        tabuleiro[0][navioshorizontal[i]] = 3; // posicionando o navio substituindo a água linha
        tabuleiro[naviosvertical[i]][5] = 3;   // posicionando o navio substituindo a água coluna
    }

    // criando navios diagonais
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++) 
        {   //navio diagonal 1 (esquerda para direita)
            if (i == j && (i >= 4 && i <= 6))
            {
                tabuleiro[i][j] = 3;
            }
            // navio diagonal 2 (direita para esquerda)
            if (i + j == 9 && (i >= 7 && i <= 9)) // teste soma dos índices
            {                            
                tabuleiro[i][j] = 3; // se for verdadeiro, posiciona o navio
            }
        }
    }
    //criar habilidades

    // habilidade em cone
    tabuleiro[4][2] = 5; // cima do cone
   for (int i = 0; i < 3; i++)
   {
         tabuleiro[5][1 + i] = 5; // meio do cone
   }
   for (int i = 0; i < 5; i++)
   {
         tabuleiro[6][0 + i] = 5; // baixo
   }
   
   //habilidade em cruz
   for (int j = 0; j < 5; j++)
   {
    tabuleiro[7][7] = 5; // centro da cruz
    tabuleiro[8][6] = 5; // vertical cima e baixo
    tabuleiro[9][7] = 5; // horizontal esquerda e direita
    //meio da cruz
    tabuleiro[8][5 + j] = 5;
   }

   //habilidade em octaedro
    tabuleiro[2][7] = 5; // cima
    tabuleiro[3][6]=5;
    tabuleiro[3][7]=5;
    tabuleiro[3][8]=5;
    tabuleiro[4][7]=5;
    tabuleiro[4][7]=5;
    
   
   
    
    
    // imprimindo o tabuleiro
    for (int lin = 0; lin < 10; lin++)
    {
        for (int col = 0; col < 10; col++)
        {
            printf("%d ", tabuleiro[lin][col]);
        }
        // quebra de linha para organizar o tabuleiro
        printf("\n");
    }

    return 0;
}