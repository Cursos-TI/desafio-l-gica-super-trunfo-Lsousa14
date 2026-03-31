#include <stdio.h>

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

     char estado1[3], estado2[3];   
     char codigo1[10], codigo2[10];
     char cidade1[50], cidade2[50]; 
     int populacao1, populacao2;      
     float area1, area2;        
     float pib1, pib2;         
     int pontosturisticos1, pontosturisticos2;
     float densidadepopulacional1, densidadepopulacional2;
     float pibpercapita1, pibpercapita2;
     float superpoder1, superpoder2;



  // Área para entrada de dados

     printf("digite os dados da carta 1, carta 2:\n\n");
    
     printf("estado (CE):\n");
     scanf(" %2s", estado1);

     printf("codigo da carta 1:\n");
     scanf("%s" , codigo1);

     printf("nome da cidade:\n");
     scanf("  %[^\n]", cidade1);

     printf("população:\n");
     scanf("%d",&populacao1);

     printf("area (km²):\n");
     scanf("%f", &area1);

     printf("pib (em bilhoes de reais):\n");
     scanf("%f", &pib1);

     printf("numero de pontos turisticos:\n");
     scanf("%d", &pontosturisticos1);


     
     printf("\ndigite os dados da carta 2:\n\n");

     printf("estado (BA):\n");
     scanf(" %2s", estado2);

     printf("codigo da carta 2:\n");
     scanf("%s" , codigo2);

     printf("nome da cidade:\n");
     scanf("  %[^\n]", cidade2);

     printf("população:\n");
     scanf("%d",&populacao2);

     printf("area (km²):\n");
     scanf("%f", &area2);

     printf("pib (em bilhoes de reais):\n");
     scanf("%f", &pib2);

     printf("numero de pontos turisticos:\n");
     scanf("%d", &pontosturisticos2);

     //calculos

     float densidade1 = populacao1 / area1;
      pibpercapita1 = (pib1*1000000000) / populacao1;


     float densidade2 = populacao2 / area2;
      pibpercapita2 = (pib2* 1000000000) / populacao2;

     superpoder1 = (float)populacao1 + area1 +(float)pib1 + pontosturisticos1 + pibpercapita1 + (1.0f/ densidade1);

     superpoder2 = (float)populacao2 + area2 +(float)pib2 + pontosturisticos2 + pibpercapita2 + (1.0f/ densidade2);
     



  // Área para exibição dos dados da cidade

     printf("\n--- Dados da carta 1 ---\n");
     printf("Estado: %s\n", estado1);
     printf("Codigo: %s\n", codigo1);
     printf("Cidade: %s\n", cidade1);
     printf("Populacao: %d\n", populacao1);
     printf("Area: %.2f km²\n", area1);
     printf("PIB: %.2f\n", pib1);
     printf("Pontos turisticos: %d\n", pontosturisticos1);
     printf("densidade populacional: %.2f hab/km²\n", densidade1);
     printf("pib per capita: %.2f reais\n", pibpercapita1);
    


     
     
     printf("\n--- Dados da carta 2 ---\n");
     printf("Estado: %s\n", estado2);
     printf("Codigo: %s\n", codigo2);
     printf("Cidade: %s\n", cidade2);
     printf("Populacao: %d\n", populacao2);
     printf("Area: %.2f km²\n", area2);
     printf("PIB: %.2f\n", pib2);
     printf("Pontos turisticos: %d\n", pontosturisticos2);
     printf("densidade populacional: %.2f hab/km²\n", densidade2);
     printf("pib per capita: %.2f reais\n", pibpercapita2);


     //Comparacoes de cartas
     printf("\ncomparacao de cartas:\n");
     printf("populacao: carta %d venceu (%d)\n", (populacao1>populacao2)? 1 :2, (populacao1<2));
     printf("area: carta %d venceu (%d)\n", (area1>area2)? 1 :2, (area1<area2));
     printf("pib: carta %d venceu (%d)\n", (pib1>pib2)? 1 :2, (pib1<pib2));
     printf("pontosturisticos: carta %d venceu (%d)\n", (pontosturisticos1>pontosturisticos2)? 1 :2, (pontosturisticos1<pontosturisticos2));
     printf("densidadepopulacional: carta %d venceu (%d)\n", (densidadepopulacional1>densidadepopulacional2)? 1 :2, (densidadepopulacional1<densidadepopulacional2));
     printf("pibpercapita: carta %d venceu (%d)\n", (pibpercapita1>pibpercapita2)? 1 :2, (pibpercapita1<pibpercapita2));
     printf("superpoder: carta %d venceu (%d)\n", (superpoder1>superpoder2)? 1 :2, (superpoder1<superpoder2));


   // Comparação de cartas (somente Área)
    printf("\nComparacao de cartas (Atributo: Area):\n");
    printf("Carta 1 - %s (%s): %.2f km²\n", cidade1, estado1, area1);
    printf("Carta 2 - %s (%s): %.2f km²\n", cidade2, estado2, area2);

    if (area1 > area2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (area2 > area1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Resultado: Empate!\n");
    }






return 0;
} 
