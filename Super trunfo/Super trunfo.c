#include <stdio.h>

int main(){

    char Estado[50];
    char Codigo[50];
    char Cidade[50];
    int Populacao;
    float Area;
    float PIB;
    int Pontos;

    // Usuário colocar as informações da carta
    printf("Carta 1: \n");

    printf("Digite o seu Estado \n");
    scanf("%s", &Estado);

    printf("Digite o Codigo da sua Cidade \n");
    scanf("%s", &Codigo);

    printf("Digite o nome da sua Cidade \n");
    scanf("%s", &Cidade);

    printf("Digte a População da sua Cidade \n");
    scanf("%d", &Populacao);

    printf("Digite a Area da sua Cidade \n");
    scanf("%f", &Area);

    printf("Digite o PIB da sua Cidade \n");
    scanf("%f", &PIB);

    printf("Digite os Pontos da sua Cidade \n");
    scanf("%d", &Pontos);

    // Imprimir os dados da carta 1
     printf("Estado: %s \n" , Estado);

     printf("Codigo: %s \n", Codigo);

     printf("Cidade: %s \n", Cidade);

     printf("Populacao: %.3d \n", Populacao);

     printf("Area: %.2f \n", Area);

     printf("PIB: %.2f \n", PIB);

     printf("Pontos: %d \n", Pontos);

     // informacoes carta 2

     printf("Carta 2 : \n");

      printf("Digite o seu Estado \n");
      scanf("%s", &Estado);

      printf("Digite o Codigo da sua Cidade \n");
      scanf("%s", Codigo);

      printf("Digite o nome da sua Cidade \n");
      scanf("%s", &Cidade);

      printf("Digite a populacao da sua Cidade \n");
      scanf("%d", &Populacao);

      printf("Digite a Area da sua Cidade \n");
      scanf("%f", &Area);

      printf("Digite o PIB da sua Cidade \n");
      scanf("%f", &PIB);

      printf("Digite os pontos da sua Cidade \n");
      scanf("%d", &Pontos);

      // Imprimir os dados da carta 2

      printf("Estado : %s \n" , Estado);

      printf("Codigo: %s \n" , Codigo);

      printf("Cidade: %s \n" , Cidade);

      printf("Populacao: %d \n" , Populacao);

      printf("Area: %.2f \n" , Area);

      printf("PIB: %.2f \n" , PIB);

      printf("Pontos: %d \n", Pontos );

      return 0;


}