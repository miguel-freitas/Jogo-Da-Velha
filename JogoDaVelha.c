#include <stdlib.h>
#include <stdio.h>

int main()
{
    char tab[3][3] = {{' ', ' ', ' '},
                      {' ', ' ', ' '},
                      {' ', ' ', ' '}},
                    
        jogada, T;
    int i, j, jogador = 1, continua = 1, pos = 0, linha = 0, coluna = 0, numJogadas = 0;
   
    while(continua==1) {
        system("clear");
     
        for(i = 0; i < 3; i++){
            for(j = 0; j < 3; j++) {
                if(j == 0)
                    printf("|");
                printf(" %c |", tab[i][j]);
            }
            printf("\n");
        }
        if(numJogadas%2==0){
            jogada = 'X';
            T = '1';
        }
        else{
            jogada = 'O';
            T = '2';
        }

        printf("Entre com a linha:\n");
        scanf("%d", &i);
        printf("Entre com a coluna:\n");
        scanf("%d", &j);
      
        tab [i][j] = jogada;
        if(tab [0][0] != ' ' && tab [0][0] == tab[0][1] && tab[0][1] == tab[0][2]){
            printf("O ganhador é o jogador %c\n", T);
            continua++;
        }
            else if(tab [1][0] != ' ' && tab [1][0] == tab[1][1] && tab[1][1] == tab[1][2]){
                printf("O ganhador é o jogador %c\n", T);
                continua++;
            }
            else if(tab [2][0] != ' ' &&tab [2][0] == tab[2][1] && tab[2][1] == tab[2][2]){
                printf("O ganhador é o jogador %c\n", T);
                continua++;
            }
            else if(tab [0][0] != ' '&&tab [0][0] == tab[1][0] && tab[1][0] == tab[2][0]){
            printf("O ganhador é o jogador %c\n", T);
            continua++;
            }
            else if(tab [0][1] != ' '&&tab [0][1] == tab[1][1] && tab[1][1] == tab[2][1]){
            printf("O ganhador é o jogador %c\n", T);
            continua++;
            }
            else if(tab [0][2] != ' ' && tab[0][2] == tab[1][2] && tab[1][2] == tab[2][2]){
            printf("O ganhador é o jogador %c\n", T);
            continua++;
            }
            else if(tab [0][0] != ' '&&tab [0][0] == tab[1][1] && tab[1][1] == tab[2][2]){
            printf("O ganhador é o jogador %c\n", T);
            continua++;
            }
            else if(tab [0][2] != ' '&&tab [0][2] == tab[1][1] && tab[1][1] == tab[2][0]){
            printf("O ganhador é o jogador %c\n", T);
            continua++;
            }
        numJogadas++;
        if(numJogadas == 9){
            printf("empate\n");
            continua++;
        }

    }
}
// se jogador 1 -> jogada = 'X'; else jogada = 'O'
// pede posição para jogar (linha + coluna)
// verifica se posição escolhida está vazia
// para preencher a posição: tab[linha][coluna] = jogada;
// verifica se jogador ganhou e o número de jogadas (se 9, para)
// troca jogador (se jogador 1 -> 2; senão 1