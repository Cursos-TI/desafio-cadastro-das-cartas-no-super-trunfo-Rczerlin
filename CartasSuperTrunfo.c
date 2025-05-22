#include <stdio.h>

int main() {

char cidade01A[50], cidade02B[50];
float populacao01A, populacao02B;
float area01A, area02B;
float pib01A, pib02B;
int numero_pontos_turisticos01A, numero_pontos_turisticos02B;
float densidadepopulacional01A, densidadepopulacional02B;
float pibpercapita01A, pibpercapita02B;
float superpodercarta01A, superpodercarta02B;


printf("Super Trunfo! \n");

printf("Carta Cidade 01A \n");

printf("Digite a Populacao: \n");
scanf("%f", &populacao01A);

printf("Digite a Area: \n");
scanf("%f", &area01A);

printf("Digite o PIB: \n");
scanf("%f", &pib01A);

printf("Digite o numero_de_pontos_turisticos: \n");
scanf("%d", &numero_pontos_turisticos01A);

printf("Populacao: %.2f \n", populacao01A);
printf("Area: %.2f \n", area01A);
printf("PIB: %.2f \n", pib01A);
printf("Numero de pontos turisticos: %d \n", numero_pontos_turisticos01A);

densidadepopulacional01A = (populacao01A / area01A);
printf("Densidade populacional: %.2f \n", densidadepopulacional01A);

pibpercapita01A = (pib01A / populacao01A);
printf("PIB per capita: %.2f \n", pibpercapita01A);

superpodercarta01A = (densidadepopulacional01A + pibpercapita01A + numero_pontos_turisticos01A + pib01A + populacao01A + area01A);
printf("Super poder da carta 01A: %.3f \n", superpodercarta01A);


printf("\n");

////////////////////////////////////////////////////////////////////////

printf("\n");


printf("Carta Cidade 02B \n");

printf("Digite a Populacao: \n");
scanf("%f", &populacao02B);

printf("Digite a Area: \n");
scanf("%f", &area02B);

printf("Digite o PIB: \n");
scanf("%f", &pib02B);

printf("Digite o numero_de_pontos_turisticos: \n");
scanf("%d", &numero_pontos_turisticos02B);

printf("Populacao: %.2f \n", populacao02B);
printf("Area: %.2f \n", area02B);
printf("PIB: %.2f \n", pib02B);
printf("Numero de pontos turisticos: %d \n", numero_pontos_turisticos02B);


densidadepopulacional02B = (populacao02B / area02B);
printf("Densidade populacional: %.2f \n", densidadepopulacional02B);

pibpercapita02B = (pib02B / populacao02B);
printf("PIB per capita: %.2f \n", pibpercapita02B);

superpodercarta02B = (densidadepopulacional02B + pibpercapita02B + numero_pontos_turisticos02B + pib02B + populacao02B + area02B);
printf("Super poder da carta 02B: %.3f \n", superpodercarta02B);


return 0;



}