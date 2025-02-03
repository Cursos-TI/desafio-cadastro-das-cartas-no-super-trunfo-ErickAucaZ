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

    // Constante para estado e cidade por estado
    int const numero_estado = 8;
    int const numero_cidade = 4;

    // Variáveis
    char estado;
    char nome[30];
    char codigo[4];
    int populacao;
    float area;
    float pib;
    int pontosturisticos;

    printf("Cadastro das cartas.\n");
    //loop para cadastrar cada cidade de cada estado
    for (int i = 0; i < numero_estado; i++) { 
        estado = 'A' + i; //determina o estado atual exemplos: A, B

        printf("-Cadastro do estado %c-\n", estado); //Mostra ao usuário qual estado está sendo cadastrado

        for(int j = 0; j < numero_cidade; j = j + 1) {   
        snprintf(codigo, sizeof(codigo), "%c%02d", estado, j + 1); //gera o código da carta, exemplos: A01, A02
            
        printf("Código da cidade: %s\n", codigo);

        //Pede o nome da cidade
        printf("Nome da cidade: ");
        scanf(" %[^\n]", nome);

        //Pede a população da cidade
        printf("População da cidade: ");
        scanf("%d", &populacao);

        //Pede a área da cidade em Km²
        printf("Área da cidade em Km²: ");
        scanf("%f", &area);

        //Pede o PIB da cidade
        printf("PIB da cidade em milhões de reais: ");
        scanf("%f", &pib);

        //Pede o número de pontos turisticos da cidade
        printf("Número de pontos turisticos: ");
        scanf("%d", &pontosturisticos);

        //Mostra para o usuário no final os dados cadastrados
        printf("\n-----Cadastro da cidade-----\n");
        printf("Estado: %c\n", estado);
        printf("Código da carta: %s\n", codigo);
        printf("Nome da cidade: %s\n", nome);
        printf("População da cidade: %d habitantes\n", populacao);
        printf("Área da cidade: %.2f Km²\n", area);
        printf("PIB da cidade: %.2f milhões de reais\n", pib);
        printf("Número de pontos turisticos: %d\n", pontosturisticos);
        printf("------------------------------\n");

        }

        printf("\nEstado %c cadastrado!\n", estado); //Avisa para o usuário que o estado está cadastrado
    }

    return 0;
}