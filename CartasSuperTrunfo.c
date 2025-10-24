#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char A1, B2;
    char coda1[20], codb2[20];
    char codigoa1[20], codigob2[20];

    unsigned long int populacao1, populacao2;
    float areaa1, areab2;
    float pib1, pib2;
    int turistico1, turistico2;

    float dens1, dens2;
    float pibcapita1, pibcapita2;
    float superpoder1, superpoder2;

    int opcao;
    char primeiroAtributo, segundoAtributo;
    int ataque1, ataque2, defesa1, defesa2, recuo1, recuo2;
    int resultado1 = 0, resultado2 = 0;

 
    printf("Digite as informações da Carta 01:\n");
    printf("Escolha um estado (letra): ");
    scanf(" %c", &A1);

    printf("Digite o código da cidade: ");
    scanf(" %s", coda1);

    printf("Digite o nome da cidade: ");
    scanf(" %s", codigoa1);

    printf("Digite a população: ");
    scanf("%lu", &populacao1);

    printf("Digite a área: ");
    scanf("%f", &areaa1);

    printf("Digite o PIB estimado: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &turistico1);

    dens1 = populacao1 / areaa1;
    pibcapita1 = pib1 / populacao1;


    printf("\nDigite as informações da Carta 02:\n");
    printf("Escolha um estado (letra): ");
    scanf(" %c", &B2);

    printf("Digite o código da cidade: ");
    scanf(" %s", codb2);

    printf("Digite o nome da cidade: ");
    scanf(" %s", codigob2);

    printf("Digite a população: ");
    scanf("%lu", &populacao2);

    printf("Digite a área: ");
    scanf("%f", &areab2);

    printf("Digite o PIB estimado: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &turistico2);

    dens2 = populacao2 / areab2;
    pibcapita2 = pib2 / populacao2;

    superpoder1 = populacao1 + areaa1 + pib1 + turistico1 + pibcapita1;
    superpoder2 = populacao2 + areab2 + pib2 + turistico2 + pibcapita2;


    printf("\n===== CARTA 1 =====\n");
    printf("Estado: %c\n", A1);
    printf("Código: %s\n", coda1);
    printf("Cidade: %s\n", codigoa1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", areaa1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turísticos: %d\n", turistico1);
    printf("Densidade Populacional: %.2f hab/km²\n", dens1);
    printf("PIB per Capita: %.2f\n", pibcapita1);

    printf("\n===== CARTA 2 =====\n");
    printf("Estado: %c\n", B2);
    printf("Código: %s\n", codb2);
    printf("Cidade: %s\n", codigob2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", areab2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", turistico2);
    printf("Densidade Populacional: %.2f hab/km²\n", dens2);
    printf("PIB per Capita: %.2f\n", pibcapita2);


    printf("\nComparando os atributos:\n");
    printf("População: Carta %d venceu!\n", (populacao1 > populacao2) ? 1 : 2);
    printf("Área: Carta %d venceu!\n", (areaa1 > areab2) ? 1 : 2);
    printf("PIB: Carta %d venceu!\n", (pib1 > pib2) ? 1 : 2);
    printf("Pontos Turísticos: Carta %d venceu!\n", (turistico1 > turistico2) ? 1 : 2);
    printf("Densidade Populacional: Carta %d venceu!\n", (dens1 < dens2) ? 1 : 2);
    printf("PIB per Capita: Carta %d venceu!\n", (pibcapita1 > pibcapita2) ? 1 : 2);
    printf("Super Poder: Carta %d venceu!\n", (superpoder1 > superpoder2) ? 1 : 2);


    printf("\nAgora escolha qual atributo comparar:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Você escolheu População!\n");
            printf("Carta %d venceu!\n", (populacao1 > populacao2) ? 1 : 2);
            break;
        case 2:
            printf("Você escolheu Área!\n");
            printf("Carta %d venceu!\n", (areaa1 > areab2) ? 1 : 2);
            break;
        case 3:
            printf("Você escolheu PIB!\n");
            printf("Carta %d venceu!\n", (pib1 > pib2) ? 1 : 2);
            break;
        case 4:
            printf("Você escolheu Pontos Turísticos!\n");
            printf("Carta %d venceu!\n", (turistico1 > turistico2) ? 1 : 2);
            break;
        case 5:
            printf("Você escolheu Densidade Demográfica!\n");
            printf("Carta %d venceu!\n", (dens1 < dens2) ? 1 : 2);
            break;
        default:
            printf("Opção inválida!\n");
            break;
    }

    srand(time(0));
    ataque1 = rand() % 10 + 1;
    ataque2 = rand() % 10 + 1;
    defesa1 = rand() % 10 + 1;
    defesa2 = rand() % 10 + 1;
    recuo1 = rand() % 10 + 1;
    recuo2 = rand() % 10 + 1;

    printf("\nEscolha o primeiro atributo:\nA. Ataque\nB. Defesa\nC. Recuo\n");
    printf("Digite sua escolha: ");
    scanf(" %c", &primeiroAtributo);

    switch (primeiroAtributo) {
        case 'A': case 'a':
            printf("Você escolheu Ataque!\n");
            resultado1 = ataque1 > ataque2;
            break;
        case 'B': case 'b':
            printf("Você escolheu Defesa!\n");
            resultado1 = defesa1 > defesa2;
            break;
        case 'C': case 'c':
            printf("Você escolheu Recuo!\n");
            resultado1 = recuo1 > recuo2;
            break;
        default:
            printf("Atributo inválido!\n");
            break;
    }

    printf("\nEscolha o segundo atributo:\nA. Ataque\nB. Defesa\nC. Recuo\n");
    printf("Digite sua escolha: ");
    scanf(" %c", &segundoAtributo);

    if (primeiroAtributo == segundoAtributo) {
        printf("Você escolheu o mesmo atributo duas vezes!\n");
    } else {
        switch (segundoAtributo) {
            case 'A': case 'a':
                printf("Você escolheu Ataque!\n");
                resultado2 = ataque1 > ataque2;
                break;
            case 'B': case 'b':
                printf("Você escolheu Defesa!\n");
                resultado2 = defesa1 > defesa2;
                break;
            case 'C': case 'c':
                printf("Você escolheu Recuo!\n");
                resultado2 = recuo1 > recuo2;
                break;
            default:
                printf("Atributo inválido!\n");
                break;
        }
    }

    if (resultado1 && resultado2) {
        printf("\nParabéns, você ganhou!\n");
    } else if (resultado1 || resultado2) {
        printf("\nEmpate!\n");
    } else {
        printf("\nInfelizmente, você perdeu...\n");
    }

    return 0;
}
