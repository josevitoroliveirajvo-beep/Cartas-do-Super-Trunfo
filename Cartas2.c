#include <stdio.h>
/* int=dado interiro, flot= vai conter virgula, double= valores maiores e mais preciso, char= caracteres, []= defime o tamanho de caracteres // 
 nunca começar com numero */

int main (){
printf ("Desafio de cadastrar duas cartas");

    int Carta1;
    int Carta2; 
    char Estado1;
    char Código1[4];
    char Cidade1[50];
    int Populacao1;
    float Area1;
    float PIB1;
    int PontosTuristicos1;

    /* Carta 1 */
    char Estado1;
    char Código1[4];
    char Cidade1[50];
    int Populacao1;
    float Area1;
    float PIB1;
    int PontosTuristicos1;char estado1;
  

    /* Carta 2 */
    char Estado2;
    char Código2[4];
    char cidade2[50];
    int Populacao2;
    float Area2;
    float PIB2;
    int PontosTuristicos2; char estado2;

    /* sintexe scanf.                
    scanf ("formato1, fromato2, formato3", &variavel1, variavel2, variavel3).
    */

  printf("Cadastro da Carta 1\n");

    printf("Estado (A a H): ");
    scanf(" %c", &Estado1);

    printf("Codigo da Carta (ex: A01): ");
    scanf("%s", Código1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", Cidade1);

    printf("Populacao: ");
    scanf("%d", &Populacao1);

    printf("Area (em km²): ");
    scanf("%f", &Area1);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &PIB1);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &PontosTuristicos1);


    /* %d: imprime um inteiro no formato Decimal.
     %i: equivalente a %d.
     %f: imprime um numero de ponto flutuante no formato padrao.
     %e: imprime um numero de ponto flutuante na notacao cientifica.
     %c: imprime um unico caractere.
     %s: imprime um cadeia (string) de caracteres.
     */

}
/*Carta 1:

Estado: A

Código: A01

Nome da Cidade: São Paulo

População: 12325000

Área: 1521.11 km²

PIB: 699.28 bilhões de reais

Número de Pontos Turísticos: 50

 

Carta 2:

Estado: B

Código: B02

Nome da Cidade: Rio de Janeiro

População: 6748000

Área: 1200.25 km²

PIB: 300.50 bilhões de reais


Número de Pontos Turísticos: 30 */

