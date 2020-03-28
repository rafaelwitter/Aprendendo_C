#include <stdio.h>
#include <stdlib.h>

int calcula_total_sim(int m_s, int h_s){
    /* Aqui é calculado o total de pessoas que responderam sim*/
    int total_sim = m_s + h_s;
    return total_sim;
}
int calcula_total_nao(int m_n, int h_n){
    /* Aqui é calculado o total de pessoas que responderam nao*/
    int total_nao = m_n + h_n;
    return total_nao;
}
float calcula_porcentagem_mulheres(float m_s){
    /* Aqui é calculado a porcetagem de mulheres que responderam sim em meio a todos os participantes*/
    float pessoas = 150.00;
    return m_s/150*100;
}
float calcula_porcentagem_homens(float h_n){
    /* Aqui é calculado a porcetagem de mulheres que responderam sim em meio a todos os participantes*/
    float pessoas = 150.00;
    return h_n/150*100;
}
int main (){
    /* O numero de homens e mulheres são gerados aleatoriamente atraves da função rand() */
    int homens = rand() % 150;
    int mulheres = 150 - homens;
    int homens_sim = rand() % homens;
    int homens_nao = homens - homens_sim;
    int mulheres_sim = rand() % mulheres;
    int mulheres_nao = mulheres - mulheres_sim;
    int t_s = calcula_total_sim(mulheres_sim, homens_sim);
    printf("O total de pessoas que votaram SIM foi: %d \n", t_s);
    int t_n = calcula_total_nao(mulheres_nao, homens_nao);
    printf("O total de pessoas que votaram NAO foi: %d\n", t_n);
    float p_m_s = calcula_porcentagem_mulheres(mulheres_sim);
    float p_h_n = calcula_porcentagem_homens(homens_nao);
    printf("A porcetagem de mulheres que responderam SIM ");
    printf("foi de: %f%% \n", p_m_s);
    printf("A porcetagem de homens que responderam NÃO ");
    printf("foi de: %f%%\n", p_h_n);
}
