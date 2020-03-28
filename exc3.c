#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define LIN 2
#define COL 2

void cria_matriz(int matriz[][COL], int); /* Cria a tabela */
void imprime_matriz(int matriz[][COL], int); /* Imprime a tabela */
void verifica_quadrado_magico(int matriz[][COL], int); /* Verifica se a determinada matriz é um quadrado mágico */

int main(){
    int tabela[LIN][COL]; /* Aqui é inicializado um array 2D */
    cria_matriz(tabela, LIN); /* Aqui é criado os elementos que compoem o array */
    printf("Matriz gerada: \n\n");
    imprime_matriz(tabela, LIN); /* Aqui é mostrado os valores do array */
    printf("Verificando se a matriz é um quadrado mágico.\n\n");
    printf("----------------------------------\n");
    verifica_quadrado_magico(tabela, LIN); /* Aqui é verificado e retornado se é um quadrado mágico */
}

void cria_matriz(int matriz[][COL], int nLIN){
    /* Preenche a matriz percorrendo todo o array */
    for (int y=0; y < nLIN; y+=1)
        for(int x=0; x < COL; x+=1)
            matriz[y][x] = rand() % 13; /* Usa numeros aleatorios entre 0 e 10 com a função rand() */
}
void imprime_matriz(int matriz[][COL], int nLIN){
    /* Essa função mostra o array no console com espaçamento de 4 digitos de largura e 2 linhas puladas */
    int y = 0;
    while (y < nLIN) {
        int x = 0;
        while (x < COL) {
            printf("%4d ", matriz[y][x]);
            x += 1;
        }
        printf("\n\n");
        y += 1;
    }
}
void verifica_quadrado_magico(int matriz[][COL], int nLIN){
    int i, j, soma_inicial, soma1, soma2, igual = true;
    matriz[nLIN][nLIN];
    soma_inicial = 0;
    soma2 = 0;
    for (j = 0; j < nLIN; j++){
        soma_inicial += matriz[0][j];
        soma2 += matriz[j][0];
    }

    igual = soma_inicial == soma2;
    for (i = 1; igual && i < nLIN; i++) {
        /* soma1 é a soma da linha i
           soma2 é a soma da coluna i */
        soma1 = 0;
        soma2 = 0;
        for (j = 0; j < nLIN; j++){
            soma1 += matriz[i][j];
            soma2 += matriz[j][i];
        }

        igual = (soma1 == soma2 && soma2 == soma_inicial);
    }
    
    if (igual == 1){
        /* Calcula a soma das diagonais */
        soma1 = 0;
        soma2 = 0;
        for (j = 0; j < nLIN; j++){
            soma1 += matriz[j][j];
            soma2 += matriz[j][nLIN-j-1];
        }
        igual = (soma1 == soma2 && soma2 == soma_inicial);
    }
    if (igual)
        printf("A matriz é um quadrado magico!\n");
    else
        printf("A matriz não é um quadrado magico!\n");
        printf("----------------------------------\n");
}