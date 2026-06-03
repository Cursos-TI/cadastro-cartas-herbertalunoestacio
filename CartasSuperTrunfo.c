#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado1;
  char codigo1[4];
  char nomeCidade1[50];
  unsigned long int populacao1;
  float area1;
  float pib1;
  int numeroPontosTuristicos1;
  float densidadePopulacional1;
  float pibPerCapita1;
  float superPoder1;

  char estado2;
  char codigo2[4];
  char nomeCidade2[50];
  unsigned long int populacao2;
  float area2;
  float pib2;
  int numeroPontosTuristicos2;
  float densidadePopulacional2;
  float pibPerCapita2;
  float superPoder2;

  // Área para entrada de dados
  printf("Cadastro da Carta 1:\n");

  printf("Estado (A-H): ");
  scanf(" %c", &estado1);

  printf("Código da Carta (ex: A01, B03): ");
  scanf(" %s", codigo1);

  printf("Nome da Cidade: ");
  scanf(" %[^\n]", nomeCidade1);

  printf("População: ");
  scanf("%d", &populacao1);

  printf("Área (em km²): ");
  scanf("%f", &area1);

  printf("PIB: ");
  scanf("%f", &pib1);

  printf("Número de Pontos Turísticos: ");
  scanf("%d", &numeroPontosTuristicos1);

  densidadePopulacional1 = populacao1 / area1;
  pibPerCapita1 = pib1 / populacao1;
  superPoder1 = populacao1 + area1 + pib1 + numeroPontosTuristicos1 + pibPerCapita1 + (1.0 / densidadePopulacional1);

  printf("\nCadastro da Carta 2:\n");

  printf("Estado (A-H): ");
  scanf(" %c", &estado2);

  printf("Código da Carta (ex: A01, B03): ");
  scanf(" %s", codigo2);

  printf("Nome da Cidade: ");
  scanf(" %[^\n]", nomeCidade2);

  printf("População: ");
  scanf("%d", &populacao2);

  printf("Área (em km²): ");
  scanf("%f", &area2);

  printf("PIB: ");
  scanf("%f", &pib2);

  printf("Número de Pontos Turísticos: ");
  scanf("%d", &numeroPontosTuristicos2);

  densidadePopulacional2 = populacao2 / area2;
  pibPerCapita2 = pib2 / populacao2;
  superPoder2 = populacao2 + area2 + pib2 + numeroPontosTuristicos2 + pibPerCapita2 + (1.0 / densidadePopulacional2);

  // Área para exibição dos dados da cidade
  printf("\nExibição da Carta 1:\n");

  printf("Estado: %c\n", estado1);
  printf("Código: %s\n", codigo1);
  printf("Nome da Cidade: %s\n", nomeCidade1);
  printf("População: %d\n", populacao1);
  printf("Área: %.2f km²\n", area1);
  printf("PIB: %.2f bilhões de reais\n", pib1);
  printf("Número de Pontos Turísticos: %d\n", numeroPontosTuristicos1);
  printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
  printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
  printf("Super Poder: %.2f\n", superPoder1);

  printf("\nExibição da Carta 2:\n");

  printf("Estado: %c\n", estado2);
  printf("Código: %s\n", codigo2);
  printf("Nome da Cidade: %s\n", nomeCidade2);
  printf("População: %d\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: %.2f bilhões de reais\n", pib2);
  printf("Número de Pontos Turísticos: %d\n", numeroPontosTuristicos2);
  printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
  printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
  printf("Super Poder: %.2f\n", superPoder2);

  printf("\nComparação de Cartas:\n");

  int resultadoPopulacao = populacao1 > populacao2;
  printf("População: Carta %d venceu (%d)\n", resultadoPopulacao ? 1 : 2, resultadoPopulacao);

  int resultadoArea = area1 > area2;
  printf("Area: Carta %d venceu (%d)\n", resultadoArea ? 1 : 2, resultadoArea);

  int resultadoPIB = pib1 > pib2;
  printf("PIB: Carta %d venceu (%d)\n", resultadoPIB ? 1 : 2, resultadoPIB);

  int resultadoNumeroPontosTuristicos = numeroPontosTuristicos1 > numeroPontosTuristicos2;
  printf("Pontos Turísticos: Carta %d venceu (%d)\n", resultadoNumeroPontosTuristicos ? 1 : 2, resultadoNumeroPontosTuristicos);

  int resultadoDensidadePopulacional = densidadePopulacional1 < densidadePopulacional2;
  printf("Densidade Populacional: Carta %d venceu (%d)\n", resultadoDensidadePopulacional ? 1 : 2, resultadoDensidadePopulacional);

  int resultadoPIBperCapita = pibPerCapita1 > pibPerCapita2;
  printf("PIB per Capita: Carta %d venceu (%d)\n", resultadoPIBperCapita ? 1 : 2, resultadoPIBperCapita);

  int resultadoSuperPoder = superPoder1 > superPoder2;
  printf("Super Poder: Carta %d venceu (%d)\n", resultadoSuperPoder ? 1 : 2, resultadoSuperPoder);

  return 0;
}