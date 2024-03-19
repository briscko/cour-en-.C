#include <stdio.h>
#include "numbers.h"


void menu()
{
    printf("bonjour tapez 1 pour additionner, 2 pour soustraire, 3 pour multiplier ou 4 pour diviser.\n");
  

}
void addition(int a, int b)
{
   int resultat = a + b;
 printf("%d\n", resultat);
}
    

void soustraction(int a, int b)

 {
      int resultat = a - b;
 printf("%d\n", resultat);
 }


void multiplication(int a, int b)

  {
   int resultat = a * b;
 printf("%d\n", resultat);
  }
    

void division(int a, int b)
    {
    int resultat = a / b;
    int resultats = a % b;
   printf("%d.", resultat);
    printf("%d\n", resultats);
    }
    
    void capacite(int a)
   { if( a< -1000 || a> 1000)
{
    int a = a;
    printf("chiffre hors de capacitées de calcul");
    menu();
    }}
