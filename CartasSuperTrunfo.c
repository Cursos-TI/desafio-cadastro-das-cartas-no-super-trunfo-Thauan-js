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

    char A1;
    char B2;
    char coda1[20];
    char codb2[20];
    char codigoa1[20];
    char codigob2[20];
    int populacao1;
    int populacao2;
    float areaa1;
    float areab2;
    float pib1;
    float pib2;
    int turistico1;
    int turistico2;

    printf("Digite as informações da Carta 01:\n");
    printf("Escolha um estado: ");
    scanf("%c", &A1);

    printf("Digite o código da cidade: ");
    scanf(" %s", &coda1);

    printf("Digite o nome da cidade: ");
    scanf("%s", &codigoa1);

    printf("Digite a população: ");
    scanf("%d", &populacao1);

    printf("Digite a área: ");
    scanf("%f", &areaa1);

    printf("Digite o PIB estimado: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &turistico1);


    printf("Digite as informações da Carta 02:\n");


    printf("Escolha um estado: ");
    scanf(" %c", &B2);

    printf("Digite o código da cidade: ");
    scanf(" %s", &codb2);

    printf("Digite o nome da cidade: ");
    scanf("%s", &codigob2);

    printf("Digite a população: ");
    scanf("%d", &populacao2);

    printf("Digite a área: ");
    scanf("%f", &areab2);

    printf("Digite o PIB estimado: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &turistico2);

    printf("Segue as informações:\n");

    printf("Carta 1:\n");
    printf("Estado: %c\n", A1);
    printf("Código: %s\n", coda1);
    printf("Nome da Cidade: %s\n", codigoa1);
    printf("População: %d\n", populacao1);
    printf("Área: %f\n", areaa1);
    printf("PIB %f\n", pib1);
    printf("Número de Pontos turísticos: %d\n", turistico1);
    
    printf("Carta 2:\n");
    printf("Estado: %c\n", B2);
    printf("Código: %s\n", codb2);
    printf("Nome da Cidade: %s\n", codigob2);
    printf("População: %d\n", populacao2);
    printf("Área: %f\n", areab2);
    printf("PIB %f\n", pib2);
    printf("Número de Pontos turísticos: %d\n", turistico2);

    return 0;
}
