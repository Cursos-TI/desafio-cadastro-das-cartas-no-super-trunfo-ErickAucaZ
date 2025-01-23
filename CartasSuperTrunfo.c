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

    int codigodacidade;
    char nome[30];
    int populacao;
    float area;
    float pib;
    int pontosturisticos;

    /*Utilização da funções printf e scanf para o úsuario definir cada atributo da cidade*/

    printf("Código da cidade: /n");
    scanf("%d", &codigodacidade);

    printf("Nome da cidade: \n");
    scanf("%s", &nome);

    printf("População da cidade: \n");
    scanf("%d", &populacao);

    printf("Área da cidade: \n");
    scanf("%f", &area);

    printf("PIB da cidade: \n");
    scanf("%f", &pib);

    printf("Número de pontos turísticos: \n");
    scanf("%d", &pontosturisticos);

    /*Resumo de todos atributos que o úsuario deu a cidade*/

    printf("Código da cidade: %d\n", codigodacidade);
    printf("Nome da cidade: %s\n", nome);
    printf("População da cidade: %d\n", populacao);
    printf("Área da cidade: %f\n", area);
    printf("PIB da cidade: %f\n", pib);
    printf("Números de pontos turísticos da cidade: %d\n", pontosturisticos);

    return 0;
}
