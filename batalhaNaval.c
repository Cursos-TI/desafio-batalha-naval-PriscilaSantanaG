#include <stdio.h>

int main() {
	// criando tabuleiro
		int tabuleiro[10][10]={
		{0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0}
	};
	// criando navios horizontal e vertical
	int navioshorizontal[3]={1,2,3};
	int naviosvertical[3]={3,2,1};
	
	for(int i = 0; i < 3; i++){
		//a esturuta a seguir é uma matriz[x][y]
		tabuleiro[0][navioshorizontal[i]]=3; //posicionando o navio substituindo a água linha
		tabuleiro[naviosvertical[i]][5]=3; //posicionando o navio substituindo a água coluna
	}
	
	// criando a estrutura de repetição para linha e coluna	
	for(int lin = 0; lin < 10; lin++){
		for(int col = 0; col < 10; col++){
		printf("%d ", tabuleiro[lin][col]); 
			
		}
		//quebra de linha para organizar o tabuleiro
		printf("\n"); 
	}
	
	

	
	return 0;
}