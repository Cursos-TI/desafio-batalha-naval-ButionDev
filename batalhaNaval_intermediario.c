#include <stdio.h>


int main(){
    int tabuleiro[10][10];
    char coluna[10] = {'A','B','C','D','E','F','G','H','I','J'};
    char *linha[10] = {"L1", "L2", "L3", "L4", "L5", "L6", "L7", "L8", "L9", "L0"};

    printf("TABULEIRO BATALHA NAVAL\n");
    printf("\n");

    //Gera o Array para o tabuleiro;
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            tabuleiro[i][j] = 0;
        }
    }


    //Imprime as colunas
    printf("   ");
    for (int i = 0; i < 10; i++){
        printf("%c ", coluna[i]);
    }
    printf("\n");

    //Imprime o tabuleiro
    for(int i = 0; i < 10; i++){
        printf("%s ", linha[i]);
            for(int j = 0; j < 10; j++){
                printf("%i ", tabuleiro[i][j]);
            }
        printf("\n");
    }

    printf("\n");
    printf("\n");
    printf("\n");

    //Gera o navio na horizontal em L3 e C
    for(int i = 2; i < 5; i++ ){
        tabuleiro[2][i] = 3;
    }

    //Gera o navio na verical em L5 e H
    for(int i = 4; i < 7; i++){
        tabuleiro[i][7] = 3;
    }

    //Gera os navios na diagonal L9 e A
    for (int i = 8,j = 0; i > 5 && j < 3 ; i--, j++){
        tabuleiro[i][j] = 3;
    }

    //Gera os navios na diagonal contraria L3 E H
    for (int i = 0, j = 7; i < 3 && j < 10; i++, j++){
        tabuleiro[i][j] = 3;
    }


     //Imprime o tabuleiro com os navios já posicionados
    printf("   ");
    for (int i = 0; i < 10; i++){
        printf("%c ", coluna[i]);
    }
    printf("\n");
    for(int i = 0; i < 10; i++){
        printf("%s ", linha[i]);
            for(int j = 0; j < 10; j++){
                printf("%i ", tabuleiro[i][j]);
            }
        printf("\n");
    }



    return 0;
}