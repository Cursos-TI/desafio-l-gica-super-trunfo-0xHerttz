
// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

#include <stdio.h>
#include <string.h>

typedef struct {
    char estado;               
    char codigo[5];            
    char nome_cidade[50];      
    int populacao;             
    float area_km2;            
    float pib_bilhoes;         
    int pontos_turisticos;     
    float densidade_populacional; 
    float pib_per_capita;         
} Carta;

int main() {
    Carta carta1, carta2;

    printf("==================================================\n");
    printf("        Cadastro de Cartas Super Trunfo de Cidades\n");
    printf("==================================================\n\n");

    
    printf("--- Insira os dados da CARTA 1 ---\n");

    printf("1. Estado (A-H): ");
    scanf(" %c", &carta1.estado);

    printf("2. Codigo da Carta (Ex: A01): ");
    scanf("%s", carta1.codigo);

    printf("3. Nome da Cidade (sem espacos): ");
    scanf("%s", carta1.nome_cidade);

    printf("4. Populacao (habitantes): ");
    scanf("%d", &carta1.populacao);

    printf("5. Area (em km²): ");
    scanf("%f", &carta1.area_km2);

    printf("6. PIB (em bilhoes de reais): ");
    scanf("%f", &carta1.pib_bilhoes);

    printf("7. Pontos Turisticos: ");
    scanf("%d", &carta1.pontos_turisticos);

    carta1.densidade_populacional = carta1.populacao / carta1.area_km2;
    carta1.pib_per_capita = (carta1.pib_bilhoes * 1000000000) / carta1.populacao; // converte bilhões para reais

    printf("\n\n--- Insira os dados da CARTA 2 ---\n");

    printf("1. Estado (A-H): ");
    scanf(" %c", &carta2.estado);

    printf("2. Codigo da Carta (Ex: B02): ");
    scanf("%s", carta2.codigo);

    printf("3. Nome da Cidade (sem espacos): ");
    scanf("%s", carta2.nome_cidade);

    printf("4. Populacao (habitantes): ");
    scanf("%d", &carta2.populacao);

    printf("5. Area (em km²): ");
    scanf("%f", &carta2.area_km2);

    printf("6. PIB (em bilhoes de reais): ");
    scanf("%f", &carta2.pib_bilhoes);

    printf("7. Pontos Turisticos: ");
    scanf("%d", &carta2.pontos_turisticos);

    
    carta2.densidade_populacional = carta2.populacao / carta2.area_km2;
    carta2.pib_per_capita = (carta2.pib_bilhoes * 1000000000) / carta2.populacao;

   
    printf("\n\n==================================================\n");
    printf("           DADOS DAS CARTAS CADASTRADAS\n");
    printf("==================================================\n");

    printf("\nCARTA 1:\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Codigo da Carta: %s\n", carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.nome_cidade);
    printf("Populacao: %d\n", carta1.populacao);
    printf("Area: %.2f km²\n", carta1.area_km2);
    printf("PIB: %.2f bilhões de reais\n", carta1.pib_bilhoes);
    printf("Pontos Turisticos: %d\n", carta1.pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta1.densidade_populacional);
    printf("PIB per Capita: %.2f reais\n", carta1.pib_per_capita);

    printf("\nCARTA 2:\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Codigo da Carta: %s\n", carta2.codigo);
    printf("Nome da Cidade: %s\n", carta2.nome_cidade);
    printf("Populacao: %d\n", carta2.populacao);
    printf("Area: %.2f km²\n", carta2.area_km2);
    printf("PIB: %.2f bilhões de reais\n", carta2.pib_bilhoes);
    printf("Pontos Turisticos: %d\n", carta2.pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta2.densidade_populacional);
    printf("PIB per Capita: %.2f reais\n", carta2.pib_per_capita);


    printf("\n==================================================\n");
    printf("               COMPARAÇÃO DAS CARTAS\n");
    printf("==================================================\n");

    
    char atributo_comparado[] = "pib_per_capita";

    printf("Atributo escolhido: %s\n\n", atributo_comparado);

    if (strcmp(atributo_comparado, "populacao") == 0) {
        printf("%s: %d habitantes\n", carta1.nome_cidade, carta1.populacao);
        printf("%s: %d habitantes\n", carta2.nome_cidade, carta2.populacao);
        if (carta1.populacao > carta2.populacao)
            printf("Vencedora: %s!\n", carta1.nome_cidade);
        else if (carta2.populacao > carta1.populacao)
            printf("Vencedora: %s!\n", carta2.nome_cidade);
        else
            printf("Empate!\n");
    }
    else if (strcmp(atributo_comparado, "area") == 0) {
        printf("%s: %.2f km²\n", carta1.nome_cidade, carta1.area_km2);
        printf("%s: %.2f km²\n", carta2.nome_cidade, carta2.area_km2);
        if (carta1.area_km2 > carta2.area_km2)
            printf("Vencedora: %s!\n", carta1.nome_cidade);
        else if (carta2.area_km2 > carta1.area_km2)
            printf("Vencedora: %s!\n", carta2.nome_cidade);
        else
            printf("Empate!\n");
    }
    else if (strcmp(atributo_comparado, "pib") == 0) {
        printf("%s: %.2f bilhões\n", carta1.nome_cidade, carta1.pib_bilhoes);
        printf("%s: %.2f bilhões\n", carta2.nome_cidade, carta2.pib_bilhoes);
        if (carta1.pib_bilhoes > carta2.pib_bilhoes)
            printf("Vencedora: %s!\n", carta1.nome_cidade);
        else if (carta2.pib_bilhoes > carta1.pib_bilhoes)
            printf("Vencedora: %s!\n", carta2.nome_cidade);
        else
            printf("Empate!\n");
    }
    else if (strcmp(atributo_comparado, "densidade") == 0) {
        printf("%s: %.2f hab/km²\n", carta1.nome_cidade, carta1.densidade_populacional);
        printf("%s: %.2f hab/km²\n", carta2.nome_cidade, carta2.densidade_populacional);
        if (carta1.densidade_populacional < carta2.densidade_populacional)
            printf("Vencedora: %s! (menor densidade)\n", carta1.nome_cidade);
        else if (carta2.densidade_populacional < carta1.densidade_populacional)
            printf("Vencedora: %s! (menor densidade)\n", carta2.nome_cidade);
        else
            printf("Empate!\n");
    }
    else if (strcmp(atributo_comparado, "pib_per_capita") == 0) {
        printf("%s: %.2f reais\n", carta1.nome_cidade, carta1.pib_per_capita);
        printf("%s: %.2f reais\n", carta2.nome_cidade, carta2.pib_per_capita);
        if (carta1.pib_per_capita > carta2.pib_per_capita)
            printf("Vencedora: %s!\n", carta1.nome_cidade);
        else if (carta2.pib_per_capita > carta1.pib_per_capita)
            printf("Vencedora: %s!\n", carta2.nome_cidade);
        else
            printf("Empate!\n");
    }
    else {
        printf("Atributo inválido.\n");
    }

    return 0;
}

  