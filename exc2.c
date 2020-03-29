#include<stdio.h>
#define valor_kwh 1.75
#define maximo 170

int main(){
    int consumidores[5];
    float valores_totais[5];
    int consumo;
    
    /* Aqui é obtido todos os dados necessarios */
    for (int i = 0; i < 5; i++){
        printf("Digite a quantidade de Kw consumidos no mês pelo cliente %d: ", i);
        scanf("%i", &consumo);        
        consumidores[i] = consumo;}

    /* Aqui é somado o total do consumo em reais */
    for (int i = 0; i < 5; i++){
        valores_totais[i] = consumidores[i] * valor_kwh;
        printf("R$%.2f é o total consumido pelo cliente de conta: %d\n", valores_totais[i], i);}

    /* Aqui é filtrado os que consumiram mais do que o esperado */
    for (int i = 0; i < 5; i++){
        if (consumidores[i]>170){
            printf("O consumidor da conta %d consumiu mais que %d Kw no mes. Total consumido: %d\n",i,maximo, consumidores[i]);}}
    
}