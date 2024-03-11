//-----------------------------------------------------------------------------------------------------------------------------------------------------------------
/*ce fichier 'main.c' sert a orchestrer les differentes parties du jeu. il commence par inclure un fichier d en tete 'joueur.h'pour acceder 
a la structure 'Joueur' et aux fonctions 'InitialiserJoueur'et 'SubirDegats'.
puis , dans la fonction 'main', qui est le point d entree de l execution,il cree une instance de 'Joueur', l initialise avec un certain nombre de pv
et simule ensuite l action de subir des degats.
les appels de fonctions a 'InitialiserJoueur' et 'SubirDegats' montrent comment les modules peuvent etre utilises ensemble pour construire la logique d une application.
le passage de l adresse de 'joueur'('&joueur')a ces fonctions permets de modifier l etat du joueur de maniere persistante a travers les etapes du jeu.
la compilation et lexecution de ces fichiers ensemble composent le jeu basique ou les intercations de base avec le joueur peuvent etre simuler et etendus.
pour compiler et executer ce programme' vous devrez compiler les fichiers 'jour,c' et 'main.c' enssemble */

//-----------------------------------------------------------------------------------------------------------------------------------------------------------------

/*inclut le fichier d en tete 'joueur.h' pour pouvoir utiliser la structure 'Joueur' et les fonctions 'InitialiserJoueur' et 'SubirDegats'.*/

#include "joueur.h"

//-----------------------------------------------------------------------------------------------------------------------------------------------------------------

/*inclut la bibliotheque standart d entree/sortie pour pouvoir utiliser les fonctions d affichage comme 'printf'.*/
#include <stdio.h>

//-----------------------------------------------------------------------------------------------------------------------------------------------------------------

/*la fonction 'main' est le point d entree de tout programme en C. c est ici que commenve l execution du programme.*/

int main()// a vous de jouer!!!
{

//-----------------------------------------------------------------------------------------------------------------------------------------------------------------
/*declare une variable 'joueur' de type 'Joueur'. cette variable stockera les informations du joueur comme ces points de vie .*/

Joueur joueur;

//-----------------------------------------------------------------------------------------------------------------------------------------------------------------

/*appelle la fonction 'InitialiserJoueur' et lui passe l adresse de la variable 'joueur'.cela initialise le joueur avec les points de vie 
definies et affiche un message. l utilisation de '&' avant 'joueur' obtient l adresse de la variable car 'InitialiserJoueur' attend un pointeur vers 'Joueur'.*/

InitialiserJoueur(&joueur);

//-----------------------------------------------------------------------------------------------------------------------------------------------------------------

/*simule le joueur subissant des degats en appelant la fonction 'SubirDegats'. il est a noter que cette fonction modifie egalement directement 
la structure 'joueur' puisqu elle prend un pointeur vers'Joueur' comme argument.*/

SubirDegats(&joueur); // vous pouvez appeler 'SubirDegats' autant de fois que vous le souhaiter pour simuler plusieurs attaques. 

//-----------------------------------------------------------------------------------------------------------------------------------------------------------------

/*le programme ce termine en retournant 0 , en c retourner 0 depuis 'main' indique que  le programme c est termine avec succes.*/

return 0 ;
}