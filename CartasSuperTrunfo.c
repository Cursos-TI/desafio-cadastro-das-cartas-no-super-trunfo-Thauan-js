#include <stdio.h>

int main() {
    char A1;
    char B2;

    char coda1[20];
    char codb2[20];

    char codigoa1[20];
    char codigob2[20];

    unsigned long int populacao1;
    unsigned long int populacao2;

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

    float superpoder1;
    float superpoder2;
    float superpoder;
    int opcao;


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

    superpoder1 = (populacao1 + areaa1 + pib1 + turistico1 + pibcapita1);
    superpoder2 = (populacao2 + areab2 + pib2 + turistico2 + pibcapita2);

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
    printf(" Reais²\n\n");


    printf("População: Carta %d venceu (%d)\n", (populacao1 > populacao2) ? 1 : 2, populacao1 > populacao2);

    printf("Área: Carta %d venceu (%d)\n", (areaa1 > areab2) ? 1 : 2, areaa1 > areab2);

    printf("PIB: Carta %d venceu (%d)\n", (pib1 > pib2) ? 1 : 2, pib1 > pib2);

    printf("Pontos Turísticos: Carta %d venceu (%d)\n", (turistico1 > turistico2) ? 1 : 2, turistico1 > turistico2);

    printf("Densidade Populacional: Carta %d venceu (%d)\n", (dens1 < dens2) ? 1 : 2, dens1 < dens2);

    printf("PIB per Capita: Carta %d venceu (%d)\n", (pibcapita1 > pibcapita2) ? 1 : 2, pibcapita1 > pibcapita2);

    printf("Super Poder: Carta %d venceu (%d)\n\n", (superpoder1 > superpoder2) ? 1 : 2, superpoder1 > superpoder2);

    if (populacao1 > populacao2){
        printf("A carta 1 venceu com a população de: %d\n", populacao1);
    }else {
        printf("A carta 2 venceu com a população de: %d\n", populacao2);
    }
    
    if (areaa1 > areab2){
        printf("A carta 1 venceu com a área de: %d\n", areaa1);
    }else {
        printf("A carta 2 venceu com a área de: %d\n", areab2);
    }

    if (pib1 > pib2){
        printf("A carta 1 venceu com o PIB de: %d\n", pib1);
    }else {
        printf("A carta 2 venceu com o PIB de: %d\n", pib2);
    }

    if (turistico1 > turistico2){
        printf("A carta 1 venceu com os pontos turisticos de: %d\n", turistico1);
    }else {
        printf("A carta 2 venceu com os pontos turisticos de: %d\n", turistico2);
    }

    if (populacao1 > populacao2){
        printf("A carta 1 venceu com a população de: %d\n", populacao1);
    }else {
        printf("A carta 2 venceu com a população de: %d\n", populacao2);
    }

    if (dens1 < dens2){
        printf("A carta 1 venceu com a densidade de: %d\n", dens1);
    }else {
        printf("A carta 2 venceu com a densidade de: %d\n", dens2);
    }

    if (pibcapita1 > pibcapita2){
        printf("A carta 1 venceu com o PIB per Capita de: %d\n", pibcapita1);
    }else {
        printf("A carta 2 venceu com o PIB per Capita de: %d\n", pibcapita2);
    }

    if (populacao1 > populacao2){
        printf("A carta 1 venceu com a população de: %d\n", populacao1);
    }else {
        printf("A carta 2 venceu com a população de: %d\n", populacao2);
    }

    printf("\nAgora escolham quais atributos serão comparados!\n");
    printf("1. Populção\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade demográfica\n");
    printf("Escolha a opção: ");
    scanf("%d", &opcao);


    switch (opcao)
    {
    case 1:
        printf("Você escolheu **População!**\n");
        if (populacao1 > populacao2){
            printf("A carta **%c** venceu!\n", A1);
        } else{
            printf("A carta **%c** venceu!\n", B2);
        }
        break;
        case 2:
        printf("Você escolheu **Área!**\n");
        if (areaa1 > areab2){
            printf("A carta **%d** venceu!\n", areaa1);
        } else{
            printf("A carta **%d** venceu!\n", areab2);
        }
        break;
        case 3:
        printf("Você escolheu **PIB!**\n");
        if (pib1 > pib2){
            printf("A carta **%d** venceu!\n", pib1);
        } else{
            printf("A carta **%d** venceu!\n", pib2);
        }
        break;
        case 4:
        printf("Você escolheu **Pontos Turísticos!**\n");
        if (turistico1 > turistico2){
            printf("A carta **%d** venceu!\n", turistico1);
        } else{
            printf("A carta **%d** venceu!\n", turistico2);
        }
        break;
        case 5:
        printf("Você escolheu **Densidade demográfica!**\n");
        if (dens1 < dens2){
            printf("A carta **%d** venceu!\n", dens1);
        } else{
            printf("A carta **%d** venceu!\n", dens2);
        }
        break;
        while (opcao != 6)
        {
            printf("Saindo do jogo...");
        }
        
    default:
        printf("Opção inválida!");
        break;
    }

    while (opcao != 6)
        {
            printf("Saindo do jogo...");
        }
    return 0;

}
