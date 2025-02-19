#include <stdio.h>
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

        // Variáveis das cartas separadas em 1 e 2 no final, para identificar de qual carta é cada variável
        char estado1, estado2;
        char codigo1[3], codigo2[3];
        char nome_cidade1[30], nome_cidade2[30];
        unsigned long int populacao1, populacao2;
        float area1, area2;
        float pib1, pib2;
        int num_ponto_turistico1, num_ponto_turistico2;
        float densidade1, densidade2;
        float ppc1, ppc2; //ppc = PIB per Capita
        float superpoder1, superpoder2;
        //Cadastro da primeira carta
        printf("---- CARTA 1 ----\n\n");
                
            printf("Digite o estado (Uma letra de 'A' a 'H'): \n"); //Pede ao usuário a letra que representa o estado exemplo: A, B, C... H
            scanf(" %c", &estado1);
                
            printf("Digite o código da cidade (A letra do estado e um número de 01 a 04): \n"); //Pede o usuário o código da cidade exemplo: A01, B01...
            scanf("%s", codigo1);
    
            printf("Digite o nome da cidade: \n"); //Pede ao usuário o nome da cidade da carta
            scanf(" %30[^\n]", nome_cidade1);
    
            printf("Digite a população da cidade: \n"); //Pede ao usuário a população da cidade escolhida
            scanf("%lu", &populacao1);
    
            printf("Digite a área da cidade em KM²: \n"); //Pede ao usuário a área em km² da cidade escolhida
            scanf("%f", &area1);
    
            printf("Digite o PIB da cidade em bilhões: \n"); //Pede ao usuário o PIB da cidade escolhida
            scanf("%f", &pib1);
    
            printf("Digite o número de pontos turísticos: \n"); //Pede ao usuário o número de pontos turísticos da cidade escolhida
            scanf("%d", &num_ponto_turistico1);
    
            densidade1 = populacao1 / area1; //calcula a densidade populacional, de acordo com os dados cadastrados pelo usuário, da população e da área

            ppc1 = (pib1 * 1e9) / populacao1; //calcula o PIB per capita utilizando os dados da população e do PIB cadastrados pelo usuário
            //usamos 1e9 (que é 10^9) porque o pib é pedido em bilhões, sendo assim o jeito certo de se calcular o pib per capita
                
            superpoder1 = (float) populacao1 + area1 + pib1 + num_ponto_turistico1 + ppc1 - densidade1; //Super Poder da carta, Cálculo de todos atributos que o usuário escolheu menos o estado, código e nome
    
            //Imprime o cadastro completo da cidade e seus atributos que o usuário escolheu
            printf("\n--Carta 1--\n\n");
            printf("-Estado: %c\n", estado1);
            printf("-Código da cidade: %s\n", codigo1);
            printf("-Nome da Cidade: %s\n", nome_cidade1);
            printf("-População da cidade: %d\n", populacao1);
            printf("-Área da cidade em km²: %.2f KM²\n", area1);
            printf("-PIB da cidade em bilhões de reais: %.2f bilhões de reais\n", pib1);
            printf("-Número de pontos turísticos: %d\n", num_ponto_turistico1);
            printf("-Densidade populacional: %.2f hab/km²\n", densidade1);
            printf("-PIB per capita: %.2f reais\n", ppc1);
            printf("-Super Poder da carta 1: %.2f\n", superpoder1);
    
        printf("\n---- CARTA 2 ----\n\n"); //Cadastro da segunda carta
    
            //As mesmas etapas da primeira carta, porém usando as váriaveis da segunda carta exemplo: estado2, codigo2...
    
            printf("Digite o estado (Uma letra de 'A' a 'H'): \n");
            scanf(" %c", &estado2);
                
            printf("Digite o código da cidade (A letra do estado e um número de 01 a 04): \n");
            scanf("%s", codigo2);
    
            printf("Digite o nome da cidade: \n");
            scanf(" %30[^\n]", nome_cidade2);
    
            printf("Digite a população da cidade: \n");
            scanf("%lu", &populacao2);
    
            printf("Digite a área da cidade em KM²: \n");
            scanf("%f", &area2);
    
            printf("Digite o PIB da cidade em bilhões: \n");
            scanf("%f", &pib2);
    
            printf("Digite o número de pontos turísticos: \n");
            scanf("%d", &num_ponto_turistico2);
    
            densidade2 = populacao2 / area2;
    
            ppc2 =  (pib2 * 1e9) / populacao2;

            superpoder2 = (float) populacao2 + area2 + pib2 + num_ponto_turistico2 + ppc2 - densidade2;             
                
            //Imprime ao usuário os dados da segunda carta cadastrada
            printf("\n--Carta 2--\n\n");
            printf("-Estado: %c\n", estado2);
            printf("-Código da cidade: %s\n", codigo2);
            printf("-Nome da Cidade: %s\n", nome_cidade2);
            printf("-População da cidade: %d\n", populacao2);
            printf("-Área da cidade em km²: %.2f KM²\n", area2);
            printf("-PIB da cidade em bilhões de reais: %.2f bilhões de reais\n", pib2);
            printf("-Número de pontos turísticos: %d\n", num_ponto_turistico2);
            printf("-Densidade populacional: %.2f hab/km²\n", densidade2);
            printf("-PIB per capita: %.2f reais\n", ppc2);
            printf("-Super Poder da carta 2: %.2f\n", superpoder2);
    
                //Imprime o Resultado de uma comparação simples das cartas, o resultado exibido será 1 e 0, onde 1 é que a carta 1 venceu e 0 para que a carta 2 venceu
        printf("\n----Resultados (1= carta 1 vence, 0= carta 2 vence)----\n\n");
            printf("-População: %d\n", populacao1 > populacao2);
            printf("-Área: %d\n", area1 > area2);
            printf("-PIB: %d\n", pib1 > pib2);
            printf("-Número de pontos turísticos: %d\n", num_ponto_turistico1 > num_ponto_turistico2);
            printf("-Densidade populacional: %d\n", densidade1 < densidade2);
            printf("-PIB per Capita: %d\n", ppc1 > ppc2);
            printf("-Super Poder da carta: %d\n", superpoder1 > superpoder2);
    
         return 0;
}
       