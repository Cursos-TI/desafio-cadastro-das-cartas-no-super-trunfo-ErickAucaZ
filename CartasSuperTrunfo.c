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

    /*Atributos da cidade*/
    char estado[20];
    char pais[20];
    char nome[30];
    int codigodacidade;
    int populacao;
    int pontosturisticos;
    float area;
    double pib;

    /*Utilização das funções printf e scanf para o usuário definir cada atributo da cidade*/
    printf("escolha um país: \n");
    fgets( pais, 20, stdin);
    printf("Escolha o estado A: \n");
    fgets( estado, 20, stdin);

    printf("Nome da cidade: \n");
    scanf("%s", &nome);
    
    printf("Código da cidade: \n");
    scanf("%d", &codigodacidade);

    printf("População da cidade: \n");
    scanf("%d", &populacao);

    printf("Área da cidade: \n");
    scanf("%f", &area);

    printf("PIB da cidade: \n");
    scanf("%lf", &pib);

    printf("Número de pontos turísticos: \n");
    scanf("%d", &pontosturisticos);

    /*apresentação de cada atributo que o usuário deu a cidade*/
    printf("-----Cidade 1-----\n");
    printf("Nome da cidade: %s\n", nome);
    printf("Código da cidade: %d\n", codigodacidade);
    printf("População da cidade: %d\n", populacao);
    printf("Área da cidade: %f Km²\n", area);
    printf("PIB da cidade: %lf\n", pib);
    printf("Números de pontos turísticos da cidade: %d\n", pontosturisticos);

    return 0;
}