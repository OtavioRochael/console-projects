//Nome: Otavio Rochael Cunha. Matricula: 12211BSI218
//Nome: Mário Lúcio Santos Júnior. Matricula: 12211BSI252
#include <stdio.h>
#include <stdlib.h>

int main () {
    int tabuleiro [3][3] = {{0,0,0},
                            {0,0,0},
                            {0,0,0}};
    int linha=0, coluna=0;

    int jogador[] = {1,2};
    int jogo = 1, turno=0, vencedor=2;
    
    while(jogo == 1){
        //Insere no tabuleiro o valor do jogador de acordo com a posicao de destino
        while(1){
                printf("Jogador %d insira a posicao de destino: \nLinha:", jogador[turno]); scanf("%d", &linha);
                printf("Coluna:", jogador[turno]); scanf("%d", &coluna);
                printf("\n");

            //Condiçoes invalidas
            if(tabuleiro[linha][coluna] != 0){
                printf("Essa posicao ja tem um valor ou excede o tamanho do tabuleiro!\n");
            }
            else{
                tabuleiro[linha][coluna] = jogador[turno];
                break;
            }
        }

        //Imprime tabuleiro
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                printf("%d ", tabuleiro[i][j]);
            }
            printf("\n");
        }
        printf("\n");

        //Condicoes de vitoria
        for(int i=0; i<2; i++){
            //Verificação das Linhas
            if((tabuleiro[0][0] == jogador[i]) && (tabuleiro[1][0] == jogador[i]) && (tabuleiro[2][0] == jogador[i])){
                jogo = 0; 
                vencedor = i;
            }
            else if((tabuleiro[0][1] == jogador[i]) && (tabuleiro[1][1] == jogador[i]) && (tabuleiro[2][1] == jogador[i])){
                jogo = 0;
                vencedor = i;
            }
            else if((tabuleiro[0][2] == jogador[i]) && (tabuleiro[1][2] == jogador[i]) && (tabuleiro[2][2] == jogador[i])){
                jogo = 0;
                vencedor = i;
            }
            //Verificação das Colunas
            else if((tabuleiro[0][0] == jogador[i]) && (tabuleiro[0][1] == jogador[i]) && (tabuleiro[0][2] == jogador[i])){
                jogo = 0;
                vencedor = i;
            }
            else if((tabuleiro[1][0] == jogador[i]) && (tabuleiro[1][1] == jogador[i]) && (tabuleiro[1][2] == jogador[i])){
                jogo = 0;
                vencedor = i;
            }
            else if((tabuleiro[2][0] == jogador[i]) && (tabuleiro[2][1] == jogador[i]) && (tabuleiro[2][2] == jogador[i])){
                jogo = 0;
                vencedor = i;
            }
            //Verificacao das Diagonais
            else if((tabuleiro[0][0] == jogador[i]) && (tabuleiro[1][1] == jogador[i]) && (tabuleiro[2][2] == jogador[i])){
                jogo = 0;
                vencedor = i;
            }
            else if((tabuleiro[2][0] == jogador[i]) && (tabuleiro[1][1] == jogador[i]) && (tabuleiro[0][2] == jogador[i])){
                jogo = 0;
                vencedor = i;
            }
        }
           
        //Troca de turno
        if(turno == 0){
            turno = 1;
        }
        else{
            turno = 0;
        }
    }

    printf("FIM DE JOGO!\nO VENCEDOR EH O JOGADOR %d\n!", jogador[vencedor]);
    system("pause");
}