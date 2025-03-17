#include<stdio.h>

//TESTE PEDRO H C MOURA
int main(){
    char estado1[2], estado2[2];            //váriaveis para armazenamento da letra que representa o estado.
    char id1[3], id2[3];                    //váriaveis para armazenamento do código que representa a cidade.
    char nomeCid1[15], nomeCid2[15];        //váriaveis para armazenamento do nome da cidade.
    int populacao1, populacao2;             //váriaveis para armazenamento da quantidade de população
    float area1, area2;                     //váriaveis para armazenamento da área territorial.
    float PIB1, PIB2;                       //váriaveis para armazenamento do valor do PIB.
    int pTur1, pTur2;                       //váriaveis para armazenamento da quantidade de pontos turisticos. 
    float densPopul1, densPopul2;            //váriaveis para armazenamento da Densidade Populacional.
    float PIBperCapita1, PIBperCapita2;      //váriaveis para armazenamento do PIB per Capita.

    //inicio da solicitação dos dados referente a 1ª carta.
    printf("Informe os dados da 1ª carta a seguir\n");
    printf("Digite o estado: ");            //Solicitando o dado.
    scanf("%s", &estado1);                  //Recebendo do usuário e armazenando o dado na váriavel.
    
    printf("Digite o Código da Cidade: ");  //Solicitando o dado.
    scanf("%s",&id1);                       //Recebendo do usuário e armazenando o dado na váriavel.

    printf("Nome da Cidade: ");             //Solicitando o dado.
    scanf("%s", &nomeCid1);                 //Recebendo do usuário e armazenando o dado na váriavel.

    printf("População: ");                  //Solicitando o dado.
    scanf("%d", &populacao1);               //Recebendo do usuário e armazenando o dado na váriavel.

    printf("Area: ");                       //Solicitando o dado.
    scanf("%f", &area1);                    //Recebendo do usuário e armazenando o dado na váriavel.

    printf("Informe o PIB: ");              //Solicitando o dado.
    scanf("%f", &PIB1);                     //Recebendo do usuário e armazenando o dado na váriavel.

    printf("Quantidade de Pontos Turisticos: ");    //Solicitando o dado.
    scanf("%d", &pTur1);                            //Recebendo do usuário e armazenando o dado na váriavel.

    //inicio da solicitação dos dados referente a 2ª carta.
    printf("\nInforme os dados da 2ª carta a seguir\n");
    printf("Digite o estado: ");            //Solicitando o dado.
    scanf("%s", &estado2);                  //Recebendo do usuário e armazenando o dado na váriavel.
    
    printf("Digite o Código da Cidade: ");  //Solicitando o dado.
    scanf("%s",&id2);                       //Recebendo do usuário e armazenando o dado na váriavel.

    printf("Nome da Cidade: ");             //Solicitando o dado.
    scanf("%s", &nomeCid2);                 //Recebendo do usuário e armazenando o dado na váriavel.

    printf("População: ");                  //Solicitando o dado.
    scanf("%d", &populacao2);               //Recebendo do usuário e armazenando o dado na váriavel.

    printf("Area: ");                       //Solicitando o dado.
    scanf("%f", &area2);                    //Recebendo do usuário e armazenando o dado na váriavel.

    printf("Informe o PIB: ");              //Solicitando o dado.
    scanf("%f", &PIB2);                     //Recebendo do usuário e armazenando o dado na váriavel.

    printf("Quantidade de Pontos Turisticos: ");    //Solicitando o dado.
    scanf("%d", &pTur2);                            //Recebendo do usuário e armazenando o dado na váriavel.

    //Inicio da exibição do dados das cartas
    //Inicio da exibição do dados da 1ª carta.
    printf("\nCarta 1:\n");                                 //Mensagem de inicio
    printf("Estado: %s\n", estado1);                        //exibindo a letra do estado 
    printf("Código: %s%s\n", estado1, id1);                 //exibindo o código da carta formado pela letra do estado + código da cidade.
    printf("Nome da Cidade: %s\n", nomeCid1);               //exibindo o nome da cidade.
    printf("População: %d\n", populacao1);                   //exibindo a quantidade da população.
    printf("Área: %.2f km²\n", area1);                      //exibindo o tamanho em área da cidade.
    printf("PIB: %.2f bilhões de reais\n", PIB1);           //exibindo o PIB da cidade.
    printf("Número de Pontos Turísticos: %d\n", pTur1);     //exibindo a quantidade de pontos turisticos da cidade.
    
    //Inicio da operação para armazenar os dados referentes a Densidade Populacional e PIB per Capita da carta 01.
    densPopul1 = (float) populacao1/area1;          //Operação Densidade.
    PIB1 = PIB1*1000000000;
    PIBperCapita1 = (float) PIB1/populacao1;        //Operação PIB per Capita.
    printf("Densidade Populacional: %.2f hab/km²\n", densPopul1); //exibindo a densidade populacional.
    printf("PIB per Capita: %.2f reais\n", PIBperCapita1);        //exibindo o PIB per Capita.

    //Inicio da exibição do dados da 2ª carta.
    printf("\nCarta 2:\n");                                 //Mensagem de inicio
    printf("Estado: %s\n", estado2);                        //exibindo a letra do estado 
    printf("Código: %s%s\n", estado2, id2);                 //exibindo o código da carta formado pela letra do estado + código da cidade.
    printf("Nome da Cidade: %s\n", nomeCid2);               //exibindo o nome da cidade.
    printf("População: %d\n", populacao2);                   //exibindo a quantidade da população.
    printf("Área: %.2f km²\n", area2);                      //exibindo o tamanho em área da cidade.
    printf("PIB: %.2f bilhões de reais\n", PIB2);           //exibindo o PIB da cidade.
    printf("Número de Pontos Turísticos: %d\n", pTur2);     //exibindo a quantidade de pontos turisticos da cidade.

    //Inicio da operação para armazenar os dados referentes a Densidade Populacional e PIB per Capita da carta 02.
    densPopul2 = (float) populacao2/area2;          //Operação Densidade.
    PIB2 = PIB2*1000000000;
    PIBperCapita2 = (float) PIB2/populacao2;        //Operação PIB per Capita.
    printf("Densidade Populacional: %.2f hab/km²\n", densPopul2); //exibindo a densidade populacional.
    printf("PIB per Capita: %.2f reais\n", PIBperCapita2);        //exibindo o PIB per Capita.

    return 0;
}