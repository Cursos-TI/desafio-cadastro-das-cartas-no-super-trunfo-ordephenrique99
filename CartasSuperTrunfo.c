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
    printf("Populção: %d\n", populacao1);                   //exibindo a quantidade da população.
    printf("Área: %.2f km²\n", area1);                      //exibindo o tamanho em área da cidade.
    printf("PIB: %.2f bilhões de reais\n", PIB1);           //exibindo o PIB da cidade.
    printf("Número de Pontos Turísticos: %d\n", pTur1);     //exibindo a quantidade de pontos turisticos da cidade.

    //Inicio da exibição do dados da 2ª carta.
    printf("\nCarta 2:\n");                                 //Mensagem de inicio
    printf("Estado: %s\n", estado2);                        //exibindo a letra do estado 
    printf("Código: %s%s\n", estado2, id2);                 //exibindo o código da carta formado pela letra do estado + código da cidade.
    printf("Nome da Cidade: %s\n", nomeCid2);               //exibindo o nome da cidade.
    printf("Populção: %d\n", populacao2);                   //exibindo a quantidade da população.
    printf("Área: %.2f km²\n", area2);                      //exibindo o tamanho em área da cidade.
    printf("PIB: %.2f bilhões de reais\n", PIB2);           //exibindo o PIB da cidade.
    printf("Número de Pontos Turísticos: %d\n", pTur2);     //exibindo a quantidade de pontos turisticos da cidade.

    return 0;
}