/*
Exercice C #4
[révision : juusqu'à la programmation modulaire]
> Ecrire un programme de calculatrice simple pour 2 nombres :
    -afficher un menu principal proposant les 4 types de calcul (+, - , * et /) ou de quitter.
    -une fois le calcul choisi, demander la saisie de 2 nombres et afficher le résultat.
    -rediriger sur le munu principal.

>Indications :
    -utiliser un maximum de fonctions (pour optimiser votre code et éviter les répétitions).
    -vérifier que la saisie au menu est correct, sinon redemander une saisie.
    -verifier que les nombres saisis sont compris entre -1000 et 1000.
    -compiler avec la commande -> gcc *.c -o prog(donnera un executable prog ou prog.exe)
*/
#include <stdio.h>
#include "numbers.h"

int ChoixMenu = 0;
int NombreUn = 0 ;
int NombreDeux = 0; 

int main()

{
 menu();
  scanf("%d", &ChoixMenu);

while(1)
  {
  if(ChoixMenu < 1 && ChoixMenu> 5)
  {
    printf("vous n'avez pas fais un choix valide, recommencez.");
    menu();
  }
  else if(ChoixMenu==1)
  {
    printf("choisissez un premier chiffre:");
    scanf("%d",&NombreUn);
    capacite(NombreUn);
    printf("choisissez un second chiffre:");
    scanf("%d",&NombreDeux);
     capacite(NombreDeux);
    addition(NombreUn, NombreDeux);
  //  return menu();


  }
 else if(ChoixMenu==2)
  {
    printf("choisissez un premier chiffre:");
    scanf("%d",&NombreUn);
    capacite(NombreUn);
    printf("choisissez un second chiffre:");
    scanf("%d",&NombreDeux);
    capacite(NombreDeux);
    soustraction(NombreUn, NombreDeux);
//return menu();


  }
   else if(ChoixMenu==3)
  {
    printf("choisissez un premier chiffre:");
    scanf("%d",&NombreUn);
    capacite(NombreUn);
    printf("choisissez un second chiffre:");
    scanf("%d",&NombreDeux);
    capacite(NombreDeux);
    multiplication(NombreUn, NombreDeux);
    //return menu();

  } 
  else if(ChoixMenu==4)
  {
    printf("choisissez un premier chiffre:");
    scanf("%d",&NombreUn);
    capacite(NombreUn);
    printf("choisissez un second chiffre:");
    scanf("%d",&NombreDeux);
    capacite(NombreDeux);
    division(NombreUn, NombreDeux);
  //  return menu();
  }
  else if (ChoixMenu ==5)
  {
    printf("fin de calcul\n");
    break;
  }
  }

  
    return 0;
}