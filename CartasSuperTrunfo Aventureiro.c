#include <stdio.h>
#include <string.h>

int main(){

    // Apresentação do projeto.

printf("Desafio de Super Trunfo em C.\nRepo criada por Gabriel de Jesus\nSeja Bem vindo.\n");

    //Declaração de variaveis.
    // carta 01
    char codigoCarta[5];
    char estado[50];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;

    // carta 02
    char codigoCarta2[5];
    char estado2[50];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapita2;


    // Aqui vamos coletar os dados da cidade 01.
    printf("Cadastre a Carta 1:\n");
    printf("Digite o Estado:"); 
    scanf("%s", estado);

    printf("Digite o código da carta:");
    scanf("%s", codigoCarta);

    printf("Digite o nome da cidade:");
    getchar();                                    // Limpa o buffer antes de fgets
    fgets(nomeCidade, sizeof(nomeCidade), stdin); // Usa fgets para strings com espaço
    nomeCidade[strcspn(nomeCidade, "\n")] = '\0'; // Remove a quebra de linha do nome

    printf("Digite a população:");
    scanf("%d", &populacao);

    printf("Digite a área (km²):");
    scanf("%f", &area);
    getchar();

    printf("Digite o PIB:");
    scanf("%f", &pib);
    getchar();

    printf("Digite o número de pontos turísticos:");
    scanf("%d", &pontosTuristicos);

    // Aqui vamos coletar os dados da cidade 02.
    printf("Cadastre a Carta 2:\n");
    printf("Digite o Estado:"); 
    scanf("%s", estado2);

    printf("Digite o código da carta:");
    scanf("%s", codigoCarta2);

    printf("Digite o nome da cidade:");
    getchar();                                      // Limpa o buffer antes de fgets
    fgets(nomeCidade2, sizeof(nomeCidade2), stdin); // Usa fgets para strings com espaço
    nomeCidade2[strcspn(nomeCidade2, "\n")] = '\0'; // Remove a quebra de linha do nome

    printf("Digite a população:");
    scanf("%d", &populacao2);

    printf("Digite a área (km²):");
    scanf("%f", &area2);
    getchar();

    printf("Digite o PIB:");
    scanf("%f", &pib2);
    getchar();

    printf("Digite o número de pontos turísticos:");
    scanf("%d", &pontosTuristicos2);

    //confirmação após carta ser cadastrada    
    printf("\n_____Cartas cadastradas com sucesso!____\n"); 

    
    // Nivel Aventureiro.
    // Novos Calculos para carta 01. 
    // População / Area = Densidade Populacional.
    // Pib Multiplicado por 1 bilhão / população = PibPerCapita.
    densidadePopulacional = (float) populacao / area;
    pibPerCapita = (pib * 1000000000) / (float) populacao;
    // Novos Calculos para carta 02.
    densidadePopulacional2 = (float) populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / (float) populacao2;
    
    //Exibição das cartas
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigoCarta);
    printf("Nome da Cidade: %s\n", nomeCidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos);
    printf("Densidade populacional: %.2f hab/km²\n", densidadePopulacional);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita);
    printf("\n___________________________________\n");

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    return 0;

}