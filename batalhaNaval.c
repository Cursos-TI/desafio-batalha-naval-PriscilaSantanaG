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