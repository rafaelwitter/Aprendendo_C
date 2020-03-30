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

    int escolha;
    goto inicio;
    inicio:
        
        printf("Escolha uma opção ou digite 0 para sair. \n 1- Para ver o consumo mensal em reais.\n 2- Para ver quem consumiu mais que 170Kw no mes.\n3- Para media da cidade.\n");
        scanf("%d", &escolha);
    while (escolha > 0){

        printf("%d\n",escolha);
        if(escolha == 3){
            /* Aqui é feita a média da cidade */
            int total_reais = 0;
            int total_kw = 0;
            for (int i = 0; i < 5; i++){
                total_reais += valores_totais[i];
                total_kw += consumidores[i];}
            printf("%d é a média de kw/h consumidos na cidade.\n", total_kw/5);
            goto inicio;}

        else if ((escolha == 1))
        {
            /* Aqui é somado o total do consumo em reais */
            for (int i = 0; i < 5; i++){
                valores_totais[i] = consumidores[i] * valor_kwh;
                printf("R$%.2f é o total consumido pelo cliente de conta: %d\n", valores_totais[i], i);
            }
            goto inicio;
        }
        
            

        else if (escolha == 2){
            /* Aqui é filtrado os que consumiram mais do que o esperado */
            for (int i = 0; i < 5; i++){
                if (consumidores[i]>170){
                    printf("O consumidor da conta %d consumiu mais que %d Kw no mes. Total consumido: %d\n",i,maximo, consumidores[i]);}}
            goto inicio;}
    
    }       

}