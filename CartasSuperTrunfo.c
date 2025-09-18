//Código nível aventureiro com Densidade e PIB adicionados

#include <stdio.h>

int main() {
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
    float dens1;
    float dens2;
    float pibcapita1;
    float pibcapita2;

    

    printf("Digite As informações da Carta 01:\n");
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

    dens1 = populacao1 / areaa1;
    pibcapita1 = pib1 / populacao1;


    printf("\nDigite As informações da Carta 02:\n");


    printf("Escolha um estado: ");
    scanf(" %c", &B2);

    printf("Digite o código da cidade: ");
    scanf(" %s", codb2);

    printf("Digite o nome da cidade: ");
    scanf(" %s", codigob2);

    printf("Digite a população: ");
    scanf("%d", &populacao2);

    printf("Digite a área: ");
    scanf("%f", &areab2);

    printf("Digite o PIB estimado: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &turistico2);

    dens2 = populacao2 / areab2;
    pibcapita2 = pib2 / populacao2;


    printf("Carta 1:\n");
    printf("Estádo: %c\n", A1);
    printf("Código: %s\n", coda1);
    printf("Nome da Cidade: %s\n", codigoa1);
    printf("População: %d\n", populacao1);
    printf("Área: %f\n", areaa1);
    printf("PIB: %f\n", pib1);
    printf("Número de Pontos turísticos: %d\n", turistico1);
    printf("Densidade Populacional: %.2f", dens1);
    printf(" hab/km²\n");
    printf("PIB per capita: %.2f", pibcapita1);
    printf(" Reais\n\n");
    printf("");

    printf("Carta 2:\n");
    printf("Estádo: %c\n", B2);
    printf("Código: %s\n", codb2);
    printf("Nome da Cidade: %s\n", codigob2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", areab2);
    printf("PIB: %f\n", pib2);
    printf("Número de Pontos turísticos: %d\n", turistico2);
    printf("Densidade Populacional: %.2f", dens2);
    printf(" hab/km²\n");
    printf("PIB per capita: %.2f", pibcapita2);
    printf(" Reais²");

    return 0;
}
