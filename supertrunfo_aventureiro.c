#include <stdio.h>

int main()
{
    // Declaração das variáveis para carta 1
    char carta1_estado;
    char carta1_code[4];
    char carta1_nome[50];
    int carta1_populacao;
    float carta1_area_km2;
    float carta1_pib;
    int carta1_pontos_turisticos;

    // Declaração das variáveis para carta 2
    char carta2_estado;
    char carta2_code[4];
    char carta2_nome[50];
    int carta2_populacao;
    float carta2_area_km2;
    float carta2_pib;
    int carta2_pontos_turisticos;

    // Declaração das variáveis para os cálculos
    float densidade_pop1;
    float pib_per_capita1;
    float densidade_pop2;
    float pib_per_capita2;
    float superpoder_carta1;
    float superpoder_carta2;

    printf("\n");
    printf("[ Seja bem-vindo ao Super Trunfo nível Mestre! ]\n");
    printf("\nAbaixo digite os dados correspondentes\n");

    printf("\n--- DADOS DA CARTA 1 ---\n");

    printf("Estado (A-H): ");
    scanf(" %c", &carta1_estado);

    printf("Código da Carta (Ex: A01): ");
    scanf(" %3s", carta1_code);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", carta1_nome);

    printf("População: ");
    scanf("%d", &carta1_populacao);

    printf("Área em km²: ");
    scanf("%f", &carta1_area_km2);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &carta1_pib);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &carta1_pontos_turisticos);

    printf("\n--- DADOS DA CARTA 2 ---\n");

    printf("Estado (A-H): ");
    scanf(" %c", &carta2_estado);

    printf("Código da Carta (Ex: B02): ");
    scanf(" %3s", carta2_code);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", carta2_nome);

    printf("População: ");
    scanf("%d", &carta2_populacao);

    printf("Área em km²: ");
    scanf("%f", &carta2_area_km2);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &carta2_pib);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &carta2_pontos_turisticos);

    // Cálculos
    densidade_pop1 = (float)carta1_populacao / carta1_area_km2;
    pib_per_capita1 = carta1_pib / (float)carta1_populacao;

    densidade_pop2 = (float)carta2_populacao / carta2_area_km2;
    pib_per_capita2 = carta2_pib / (float)carta2_populacao;

    superpoder_carta1 = carta1_populacao + carta1_area_km2 + carta1_pib + carta1_pontos_turisticos + pib_per_capita1 + densidade_pop1;
    superpoder_carta2 = carta2_populacao + carta2_area_km2 + carta2_pib + carta2_pontos_turisticos + pib_per_capita2 + densidade_pop2;

    // Exibição das cartas
    printf("\n\n========== EXIBIÇÃO DAS CARTAS ==========\n");
    printf("\n--- CARTA 1 ---\n");
    printf("Estado: %c\n", carta1_estado);
    printf("Código: %s\n", carta1_code);
    printf("Cidade: %s\n", carta1_nome);
    printf("População: %d habitantes\n", carta1_populacao);
    printf("Área: %.2f km²\n", carta1_area_km2);
    printf("PIB: %.2f bilhões de reais\n", carta1_pib);
    printf("Pontos Turísticos: %d\n", carta1_pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_pop1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);

    printf("\n--- CARTA 2 ---\n");
    printf("Estado: %c\n", carta2_estado);
    printf("Código: %s\n", carta2_code);
    printf("Cidade: %s\n", carta2_nome);
    printf("População: %d habitantes\n", carta2_populacao);
    printf("Área: %.2f km²\n", carta2_area_km2);
    printf("PIB: %.2f bilhões de reais\n", carta2_pib);
    printf("Pontos Turísticos: %d\n", carta2_pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_pop2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);

    // compração de população com if/else

    printf("\n\n========== COMPARAÇÃO DAS CARTAS ==========\n");

    int escolha;

    printf("Escolha um atributo para comparar\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("Opção: ");
    scanf("%d", &escolha);


    //resultados comparação 

    switch (escolha) {

    case 1:
        if (carta1_populacao > carta2_populacao) {
            printf("Carta 1 venceu na População!\n");
        } else if (carta1_populacao < carta2_populacao) {
            printf("Carta 2 venceu na População!\n");
        } else {
            printf("Empate na População!\n");
        }
        break;

    case 2:
        if (carta1_area_km2 > carta2_area_km2) {
            printf("Carta 1 venceu na Área!\n");
        } else if (carta1_area_km2 < carta2_area_km2) {
            printf("Carta 2 venceu na Área!\n");
        } else {
            printf("Empate na Área!\n");
        }
        break;

    case 3:
        if (carta1_pib > carta2_pib) {
            printf("Carta 1 venceu no PIB!\n");
        } else if (carta1_pib < carta2_pib) {
            printf("Carta 2 venceu no PIB!\n");
        } else{
            printf("Empate no PIB!\n");
        }
        break;
        
    case 4:
        if (carta1_pontos_turisticos > carta2_pontos_turisticos) {
            printf("Carta 1 venceu nos Pontos Turísticos!\n");
        }
        else if (carta1_pontos_turisticos < carta2_pontos_turisticos) {
            printf("Carta 2 venceu nos Pontos Turísticos!\n");
        }
        else{
            printf("Empate nos Pontos Turísticos!\n");
        }
        break;

    case 5:
        if (densidade_pop1 > densidade_pop2) {
            printf("Carta 2 venceu na Densidade Populacional!\n");
        } else if (densidade_pop1 < densidade_pop2) {
            printf("Carta 1 venceu na Densidade Populacional!\n");
        } else {
            printf("Empate na Densidade Populacional!\n");
        }
        break;

    default:

        printf("Opção inválida!\n");
        break;
    }

    return 0;
}
