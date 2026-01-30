#include <stdio.h>
/* int=dado interiro, flot= vai conter virgula, double= valores maiores e mais preciso, char= caracteres, []= defime o tamanho de caracteres // 
 nunca começar com numero */

int main (){
printf ("Desafio de cadastrar duas cartas");



    int carta1;
    int Carta2; 
    char Estado;
    char Cidade, [50];
    int População;
    float Area, (Km2);
    float PIB;
    int Pontos_turisticos;
    

    /* sintexe scanf.                
    scanf ("formato1, fromato2, formato3", &variavel1, variavel2, variavel3).
    */

   printf("Digite o número da carta: ");
    scanf("%d", &carta1);
    printf("Sua carta é: %d\n", carta1);

    printf ("Qual seu EStado?: ");
    scanf ("%s", &Estado);
    printf ("Seu estado é: %s\n", Estado);

    printf ("Digite sua Cidade: ");
    scanf ("%s", &Cidade);
    printf ("Sua Cudade é: %s", Cidade);

    printf ("População: ");
    scanf ("%s", &População);
    printf ("População é: %s", População);

    printf ("Area: ");
    scanf ("%e", &Area);
    printf("A area é: ");

    printf ("PIB: ");
    scanf ("%e", &PIB);
    printf ("Seu PIB é: ");

    printf ("Pontos turistucos: ");
    scanf ("%d", &Pontos_turisticos);



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