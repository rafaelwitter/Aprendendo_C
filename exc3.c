#include<stdio.h>
#include <stdlib.h>
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
    verifica_quadrado_magico(tabela, LIN); /* Aqui é verificado e retornado se é um quadrado mágico */
}

void cria_matriz(int matriz[][COL], int nLIN){
    /* Preenche a matriz percorrendo todo o array */
    for (int y=0; y < nLIN; y+=1)
        for(int x=0; x < COL; x+=1)
            matriz[y][x] = rand() % 10; /* Usa numeros aleatorios entre 0 e 10 com a função rand() */
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
    int soma_linha = 0;
    int soma_coluna = 0;
    int soma_linha_1 = 0;
    int soma_coluna_1 = 0;
    for (int y=0; y < nLIN; y+=1)
        for(int x=0; x < COL; x+=1)
            if(y==0)
                soma_linha += matriz[y][x];
            else
            {
                soma_linha_1 += matriz[y][x];
            }
            
    for(int x=0; x<COL; x+=1)
        for(int y=0; y<nLIN; y+=1)
            if(x==0)
                soma_coluna += matriz[y][x];
            else
            {
                soma_coluna_1 += matriz[y][x];
            }         
    /*
    printf("%d \b %d \b linha 0 e 1 \n%d \b %d \b coluna 0 e 1\n", soma_linha, soma_linha_1, soma_coluna,soma_coluna_1);
    */
    if(soma_linha == soma_coluna){
        printf("A matriz é um quadrado magico.\n");
    }
    else{
        printf("A matriz não é um quadrado magico.\n");
    }
} 