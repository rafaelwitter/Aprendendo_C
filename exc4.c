#include<stdio.h>
#include<string.h>

void contatenarStrings (char  string1[], char string2[], int pos);

int main(void){
    char firstName[20];
    char lastName[20];
    int pos;
 
    printf("Digite seu nome: ");
    scanf("%s", firstName);

    printf("Digite seu sobrenome: ");
    scanf("%s", lastName);
    
    printf("Digite a posição: ");
    scanf("%d", &pos);
    
    contatenarStrings(firstName, lastName, pos);
    
    printf("O resultado da concatenação: %s\n", firstName);
    return 0;
}

void contatenarStrings (char  string1[], char string2[], int pos)
{   
    /* Aqui é feita a alteração das posições, pega a posição da string 1 e coloca a string 2 */
    /* São usadas função da biblioteca string.h */
    char tmp[20];
    strncpy(tmp, string1, pos); /* Faz a copia */
    strcat(tmp, string2);
    strcat(tmp, &string1[pos]);
    strcpy(string1, tmp);
}