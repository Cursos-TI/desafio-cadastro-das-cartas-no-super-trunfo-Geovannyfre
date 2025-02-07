#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int pontosTurist;
    float pib,area, populacao;     
    char nome[30],nome2[30],codigo[30];
    


    printf("       *** Bem vindo ao Desafio Super trunfo ***\n");
    printf("\n");
    printf("Por favor digite seu nome para que possamos dar seguimento: ");
    scanf ("%s",&nome);
    printf("\n");
    printf("\n");
    printf("              Bem vindo Sr. %s\n",nome);
    printf("\n");
    printf("\n");   
    
    printf("Muito bem, agora vamos dar seguimento abaixo!!!\n");

    printf("\n");

    printf("Digite o codigo da carta! : ");
    scanf("%29s",&codigo,"\n");

    printf("Digite a populacao : ");
    scanf("%f",&populacao,"\n");

    printf("Digite a area : ");
    scanf("%f",&area,"\n");

    printf("Digite o PIB : ");
    scanf("%f",&pib,"\n");

    printf("Numero de pontos turisticos aprox.: ");
    scanf("%d",&pontosTurist,"\n");
     
    printf("\n");
    printf("\n"); 
    
    printf("           Sua carta selecionada e:%5s\n",codigo,"\n");
    printf("           Populacao:%.1f\n",populacao,"\n");
    printf("           Area:%.2f\n",area,"\n");
    printf("           PIB:%.1f\n",pib,"\n");
    printf("           Pontos turisticos:%d\n",pontosTurist,"\n");
    
    printf("\n");
    printf("\n");
    printf("Fim de jogo!");
    printf("\n");

return 0;
}
