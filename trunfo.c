#include<stdio.h>

int main(){

    //Declaração das variáveis
    char estado [10];
    char carta[10];
    char cidade[50];
    int populacao, pturisticos;
    float area, pib, densidadeP, percapita;


    //Interação inicial e coleta dos dados
    printf("Digite a sigla do estado: \n");
    scanf("%s", &estado);

    printf("Digite o código da carta: \n");
    scanf("%s", &carta);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade);

    printf("Digite a população: \n");
    scanf("%d", &populacao);

    printf("Digite a Área: \n");
    scanf("%f", &area);

    printf("Digite o PIB: \n");
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d", &pturisticos);

    //Calculos
    densidadeP = (float) populacao / area;
    percapita = pib / (float)populacao;

    //Exibição dos Resultados
    printf("\n");
    printf("_________________________________________________________________________");
    printf("\n \n");
    printf("Dados Digitados: \n");
    printf("Estado: %s\n", estado);
    printf("Código da carta:  %s\n", carta);
    printf("Nome da cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("Densidade Populacional: %.2f pessoas/km²\n", densidadeP);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("PIB per Capita: %.2f reais\n", percapita);
    printf("Pontos turisticos: %d\n", pturisticos);


    return 0;


}
