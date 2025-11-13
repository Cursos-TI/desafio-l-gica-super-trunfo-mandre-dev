#include <stdio.h>
#include <string.h>

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
    densidade_pop1 = (carta1_area_km2 > 0) ? (float)carta1_populacao / carta1_area_km2 : 0.0f;
    pib_per_capita1 = (carta1_populacao > 0) ? carta1_pib / (float)carta1_populacao : 0.0f;

    densidade_pop2 = (carta2_area_km2 > 0) ? (float)carta2_populacao / carta2_area_km2 : 0.0f;
    pib_per_capita2 = (carta2_populacao > 0) ? carta2_pib / (float)carta2_populacao : 0.0f;

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

    printf("\n\n========== COMPARAÇÃO DAS CARTAS ==========\n");

    int escolha1, escolha2;
    const char *resultado; // Variável para armazenar o resultado da comparação
    const char *nome_atributo; // Variável para armazenar o nome do atributo

    printf("Escolha dois atributos para comparar\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("Opções (Digite dois números):  ");
    scanf("%d %d", &escolha1, &escolha2);

    // --- CÁLCULO DIRETO DA SOMA DOS DOIS ATRIBUTOS ESCOLHIDOS ---
    float somaatributos1 = 0;
    float somaatributos2 = 0;

    // 1. SOMA DO PRIMEIRO ATRIBUTO (escolha1)
    switch (escolha1) {
        case 1: somaatributos1 += (float)carta1_populacao; somaatributos2 += (float)carta2_populacao; break;
        case 2: somaatributos1 += carta1_area_km2; somaatributos2 += carta2_area_km2; break;
        case 3: somaatributos1 += carta1_pib; somaatributos2 += carta2_pib; break;
        case 4: somaatributos1 += (float)carta1_pontos_turisticos; somaatributos2 += (float)carta2_pontos_turisticos; break;
        case 5: somaatributos1 += densidade_pop1; somaatributos2 += densidade_pop2; break;
    }

    // 2. SOMA DO SEGUNDO ATRIBUTO (escolha2)
    switch (escolha2) {
        case 1: somaatributos1 += (float)carta1_populacao; somaatributos2 += (float)carta2_populacao; break;
        case 2: somaatributos1 += carta1_area_km2; somaatributos2 += carta2_area_km2; break;
        case 3: somaatributos1 += carta1_pib; somaatributos2 += carta2_pib; break;
        case 4: somaatributos1 += (float)carta1_pontos_turisticos; somaatributos2 += (float)carta2_pontos_turisticos; break;
        case 5: somaatributos1 += densidade_pop1; somaatributos2 += densidade_pop2; break;
    }


    // --- RESULTADOS COMPARAÇÃO 1 ---
    nome_atributo = (escolha1 == 1) ? "População" : (escolha1 == 2) ? "Área" : (escolha1 == 3) ? "PIB" : (escolha1 == 4) ? "Pontos Turísticos" : (escolha1 == 5) ? "Densidade Populacional" : "Opção Inválida";
    printf("\n--- 1º ATRIBUTO: %s ---\n", nome_atributo);

    switch (escolha1) {
        case 1:
            resultado = (carta1_populacao == carta2_populacao) ? "Empate na População!" :
                        (carta1_populacao > carta2_populacao) ? "Carta 1 (%s) venceu na População com %d \n" :
                        "Carta 2 (%s) venceu na População com %d \n";
            printf(resultado, (carta1_populacao > carta2_populacao) ? carta1_nome : carta2_nome, (carta1_populacao > carta2_populacao) ? carta1_populacao : carta2_populacao);
            break;

        case 2:
            resultado = (carta1_area_km2 == carta2_area_km2) ? "Empate na Área!" :
                        (carta1_area_km2 > carta2_area_km2) ? "Carta 1 (%s) venceu na Área com %.2f km²\n" :
                        "Carta 2 (%s) venceu na Área com %.2f km²\n";
            printf(resultado, (carta1_area_km2 > carta2_area_km2) ? carta1_nome : carta2_nome, (carta1_area_km2 > carta2_area_km2) ? carta1_area_km2 : carta2_area_km2);
            break;

        case 3:
            resultado = (carta1_pib == carta2_pib) ? "Empate no PIB!" :
                        (carta1_pib > carta2_pib) ? "Carta 1 (%s) venceu no PIB com %.2f bilhões de reais\n" :
                        "Carta 2 (%s) venceu no PIB com %.2f bilhões de reais\n";
            printf(resultado, (carta1_pib > carta2_pib) ? carta1_nome : carta2_nome, (carta1_pib > carta2_pib) ? carta1_pib : carta2_pib);
            break;
            
        case 4:
            resultado = (carta1_pontos_turisticos == carta2_pontos_turisticos) ? "Empate nos Pontos Turísticos!" :
                        (carta1_pontos_turisticos > carta2_pontos_turisticos) ? "Carta 1 (%s) venceu nos Pontos Turísticos com %d\n" :
                        "Carta 2 (%s) venceu nos Pontos Turísticos com %d\n";
            printf(resultado, (carta1_pontos_turisticos > carta2_pontos_turisticos) ? carta1_nome : carta2_nome, (carta1_pontos_turisticos > carta2_pontos_turisticos) ? carta1_pontos_turisticos : carta2_pontos_turisticos);
            break;

        case 5:
            // Densidade: Vence o menor valor
            resultado = (densidade_pop1 == densidade_pop2) ? "Empate na Densidade Populacional!" :
                        (densidade_pop1 < densidade_pop2) ? "Carta 1 (%s) venceu na Densidade Populacional com %.2f hab/km²\n" :
                        "Carta 2 (%s) venceu na Densidade Populacional com %.2f hab/km²\n";
            printf(resultado, (densidade_pop1 < densidade_pop2) ? carta1_nome : carta2_nome, (densidade_pop1 < densidade_pop2) ? densidade_pop1 : densidade_pop2);
            break;

        default:
            printf("Opção inválida para o 1º atributo!\n");
            break;
    }

    // --- RESULTADOS COMPARAÇÃO 2 ---
    nome_atributo = (escolha2 == 1) ? "População" : (escolha2 == 2) ? "Área" : (escolha2 == 3) ? "PIB" : (escolha2 == 4) ? "Pontos Turísticos" : (escolha2 == 5) ? "Densidade Populacional" : "Opção Inválida";
    printf("\n--- 2º ATRIBUTO: %s ---\n", nome_atributo);
    
    switch (escolha2) {

        case 1:
            resultado = (carta1_populacao == carta2_populacao) ? "Empate na População!" :
                        (carta1_populacao > carta2_populacao) ? "Carta 1 (%s) venceu na População com %d \n" :
                        "Carta 2 (%s) venceu na População com %d \n";
            printf(resultado, (carta1_populacao > carta2_populacao) ? carta1_nome : carta2_nome, (carta1_populacao > carta2_populacao) ? carta1_populacao : carta2_populacao);
            break;

        case 2:
            resultado = (carta1_area_km2 == carta2_area_km2) ? "Empate na Área!" :
                        (carta1_area_km2 > carta2_area_km2) ? "Carta 1 (%s) venceu na Área com %.2f km²\n" :
                        "Carta 2 (%s) venceu na Área com %.2f km²\n";
            printf(resultado, (carta1_area_km2 > carta2_area_km2) ? carta1_nome : carta2_nome, (carta1_area_km2 > carta2_area_km2) ? carta1_area_km2 : carta2_area_km2);
            break;

        case 3:
            resultado = (carta1_pib == carta2_pib) ? "Empate no PIB!" :
                        (carta1_pib > carta2_pib) ? "Carta 1 (%s) venceu no PIB com %.2f bilhões de reais\n" :
                        "Carta 2 (%s) venceu no PIB com %.2f bilhões de reais\n";
            printf(resultado, (carta1_pib > carta2_pib) ? carta1_nome : carta2_nome, (carta1_pib > carta2_pib) ? carta1_pib : carta2_pib);
            break;
            
        case 4:
            resultado = (carta1_pontos_turisticos == carta2_pontos_turisticos) ? "Empate nos Pontos Turísticos!" :
                        (carta1_pontos_turisticos > carta2_pontos_turisticos) ? "Carta 1 (%s) venceu nos Pontos Turísticos com %d\n" :
                        "Carta 2 (%s) venceu nos Pontos Turísticos com %d\n";
            printf(resultado, (carta1_pontos_turisticos > carta2_pontos_turisticos) ? carta1_nome : carta2_nome, (carta1_pontos_turisticos > carta2_pontos_turisticos) ? carta1_pontos_turisticos : carta2_pontos_turisticos);
            break;

        case 5:
            // Densidade: Vence o menor valor
            resultado = (densidade_pop1 == densidade_pop2) ? "Empate na Densidade Populacional!" :
                        (densidade_pop1 < densidade_pop2) ? "Carta 1 (%s) venceu na Densidade Populacional com %.2f hab/km²\n" :
                        "Carta 2 (%s) venceu na Densidade Populacional com %.2f hab/km²\n";
            printf(resultado, (densidade_pop1 < densidade_pop2) ? carta1_nome : carta2_nome, (densidade_pop1 < densidade_pop2) ? densidade_pop1 : densidade_pop2);
            break;

        default:
            printf("Opção inválida para o 2º atributo!\n");
            break;
    }
    
    // soma total dos atributos de cada carta
    float somatotal1 = (float)carta1_populacao + carta1_area_km2 + carta1_pib + (float)carta1_pontos_turisticos;
    float somatotal2 = (float)carta2_populacao + carta2_area_km2 + carta2_pib + (float)carta2_pontos_turisticos;


    printf("--------------------\n");
    printf("SOMA DOS ATRIBUTOS:\n");
    printf("Carta 1 (%s): %.2f\n", carta1_nome, somaatributos1);
    printf("Carta 2 (%s): %.2f\n", carta2_nome, somaatributos2);

    // Comparação final 
    resultado = (somaatributos1 == somaatributos2) ? "Empate na soma dos atributos!\n" :
                (somaatributos1 > somaatributos2) ? "Carta 1 venceu na soma!\n" :
                "Carta 2 venceu na soma!\n";
    printf("%s", resultado);

    return 0;
}