#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado[3], estado2[3];                      // Sigla do estado
  char codigo_carta[4], codigo_carta2[4];    // Letra do estado seguida de um número de 01 a 04. ex: A01
  char nome_cidade[25], nome_cidade2[25];    // Nome da cidade sem espaços
  int populacao, populacao2;                 // Numero de habitantes da cidade
  float area_cidade, area_cidade2;           // Area da cidade em quilometros quadrados
  float pib_cidade, pib_cidade2;             // PIB da cidade
  int pontos_turisticos, pontos_turisticos2; // Numero de pontos turisticos da cidade
  float densidade, densidade2;               // Densidade populacional
  float pib_pc, pib_pc2;                     // PIB per capita da cidade
  

  // Código para dados da primeira carta
  // Área para entrada de dados - Carta 1
  printf("Cadastro de Cartas - Super Trunfo C \n\n");
  printf("Carta 1: \n");

  printf("Informe o Estado (sigla com 2 letras): ");
  scanf("%s", estado);

  printf("Código da carta (número de 01 a 04): ");
  scanf("%s", codigo_carta);

  printf("Nome da Cidade (sem espaços): ");
  scanf("%s", nome_cidade);

  printf("População da Cidade: ");
  scanf("%d", &populacao);

  printf("Área da Cidade (em km quadrados): ");
  scanf("%f", &area_cidade);

  printf("PIB da Cidade (em bilhões de reais): ");
  scanf("%f", &pib_cidade);

  printf("Número de pontos turísticos: ");
  scanf("%d", &pontos_turisticos);

  densidade = (populacao / area_cidade);
  pib_pc = (pib_cidade * 1000000000) / populacao;

  // Código para dados da segunda carta
  // Área para entrada de dados - Carta 2
  printf("\nCadastro de Cartas - Super Trunfo C \n\n");
  printf("Carta 2: \n");

  printf("Informe o Estado (sigla com 2 letras): ");
  scanf("%s", estado2);

  printf("Código da carta (número de 01 a 04): ");
  scanf("%s", codigo_carta2);

  printf("Nome da Cidade (sem espaços): ");
  scanf("%s", nome_cidade2);

  printf("População da Cidade: ");
  scanf("%d", &populacao2);

  printf("Área da Cidade (em km quadrados): ");
  scanf("%f", &area_cidade2);

  printf("PIB da Cidade (em bilhões de reais): ");
  scanf("%f", &pib_cidade2);

  printf("Número de pontos turísticos: ");
  scanf("%d", &pontos_turisticos2);

  densidade2 = (populacao2 / area_cidade2);
  pib_pc2 = (pib_cidade2 * 1000000000) / populacao2;

// Área para exibição dos dados da cidade
  printf("\nCartas cadastradas: \n");

// Área para exibição dos dados da cidade - Carta 1
  printf("\nCarta 1: \n");
  printf("Estado: %s \n", estado);
  printf("Código: %s \n", codigo_carta);
  printf("Nome da Cidade: %s \n", nome_cidade);
  printf("População: %d habitantes \n", populacao);
  printf("Área: %.2f km2 \n", area_cidade);
  printf("PIB: %.2f bilhões de reais \n", pib_cidade);
  printf("Número de Pontos Turísticos: %d \n", pontos_turisticos);
  printf("Densidade populacional: %.2f hab/km2 \n", densidade);
  printf("PIB per capita: %.2f reais \n\n", pib_pc);


  // Área para exibição dos dados da cidade - Carta 2
  printf("\nCarta 2: \n");
  printf("Estado: %s \n", estado2);
  printf("Código: %s \n", codigo_carta2);
  printf("Nome da Cidade: %s \n", nome_cidade2);
  printf("População: %d habitantes \n", populacao2);
  printf("Área: %.2f km2 \n", area_cidade2);
  printf("PIB: %.2f bilhões de reais \n", pib_cidade2);
  printf("Número de Pontos Turísticos: %d \n", pontos_turisticos2);
  printf("Densidade populacional: %.2f hab/km2 \n", densidade2);
  printf("PIB per capita: %.2f reais \n\n", pib_pc2);

  // Resultados das comparações
  printf("\nComparação de cartas (Atributo: População): \n\n");  

  // Exibe as populacoes 
  printf("Carta 1 - %s (%s): %d \n", nome_cidade, estado, populacao);
  printf("Carta 2 - %s (%s): %d \n", nome_cidade2, estado2, populacao2);

  // Compara as populacoes e mostra a vencedora	
  if (populacao > populacao2) {
     printf("Resultado: Carta 1 - %s (%s) venceu! \n", nome_cidade, estado);
  } else {
     printf("Resultado: Carta 2 - %s (%s) venceu! \n", nome_cidade2, estado2);
  }

return 0;
} 
