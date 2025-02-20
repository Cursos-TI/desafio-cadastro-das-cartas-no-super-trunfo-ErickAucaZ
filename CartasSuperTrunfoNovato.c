#include <stdio.h>

    int main() {

        char estado1, estado2;
        char codigo1[3], codigo2[3];
        char nome_cidade1[30], nome_cidade2[30];
        int populacao1, populacao2;
        float area1, area2;
        float pib1, pib2;
        int num_ponto_turistico1, num_ponto_turistico2;

         //Cadastro da primeira carta
         printf("---- CADASTRO CARTA 1 ----\n\n");
                
         printf("Digite o estado (Uma letra de 'A' a 'H'): \n"); //Pede ao usuário a letra que representa o estado exemplo: A, B, C... H
         scanf(" %c", &estado1);
             
         printf("Digite o código da cidade (A letra do estado e um número de 01 a 04): \n"); //Pede o usuário o código da cidade exemplo: A01, B01...
         scanf("%s", codigo1);
 
         printf("Digite o nome da cidade: \n"); //Pede ao usuário o nome da cidade da carta
         scanf(" %30[^\n]", nome_cidade1);
 
         printf("Digite a população da cidade: \n"); //Pede ao usuário a população da cidade escolhida
         scanf("%d", &populacao1);
 
         printf("Digite a área da cidade em KM²: \n"); //Pede ao usuário a área em km² da cidade escolhida
         scanf("%f", &area1);
 
         printf("Digite o PIB da cidade em bilhões: \n"); //Pede ao usuário o PIB da cidade escolhida
         scanf("%f", &pib1);
 
         printf("Digite o número de pontos turísticos: \n"); //Pede ao usuário o número de pontos turísticos da cidade escolhida
         scanf("%d", &num_ponto_turistico1);

        //Imprime o cadastro completo da cidade e seus atributos que o usuário escolheu
        printf("\n--Carta 1--\n\n");
        printf("-Estado: %c\n", estado1);
        printf("-Código da cidade: %s\n", codigo1);
        printf("-Nome da Cidade: %s\n", nome_cidade1);
        printf("-População da cidade: %d\n", populacao1);
        printf("-Área da cidade em km²: %.2f KM²\n", area1);
        printf("-PIB da cidade em bilhões de reais: %.2f bilhões de reais\n", pib1);
        printf("-Número de pontos turísticos: %d\n", num_ponto_turistico1);

        printf("\n---- CADASTRO CARTA 2 ----\n\n"); //Cadastro da segunda carta

        //As mesmas etapas da primeira carta, porém usando as váriaveis da segunda carta exemplo: estado2, codigo2...
    
        printf("Digite o estado (Uma letra de 'A' a 'H'): \n");
        scanf(" %c", &estado2);
            
        printf("Digite o código da cidade (A letra do estado e um número de 01 a 04): \n");
        scanf("%s", codigo2);

        printf("Digite o nome da cidade: \n");
        scanf(" %30[^\n]", nome_cidade2);

        printf("Digite a população da cidade: \n");
        scanf("%d", &populacao2);

        printf("Digite a área da cidade em KM²: \n");
        scanf("%f", &area2);

        printf("Digite o PIB da cidade em bilhões: \n");
        scanf("%f", &pib2);

        printf("Digite o número de pontos turísticos: \n");
        scanf("%d", &num_ponto_turistico2);

        //Imprime ao usuário os dados da segunda carta cadastrada
        printf("\n--Carta 2--\n\n");
        printf("-Estado: %c\n", estado2);
        printf("-Código da cidade: %s\n", codigo2);
        printf("-Nome da Cidade: %s\n", nome_cidade2);
        printf("-População da cidade: %d\n", populacao2);
        printf("-Área da cidade em km²: %.2f KM²\n", area2);
        printf("-PIB da cidade em bilhões de reais: %.2f bilhões de reais\n", pib2);
        printf("-Número de pontos turísticos: %d\n", num_ponto_turistico2);

        return 0;

    }