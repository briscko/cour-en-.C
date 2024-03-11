/* dans ce fichier 'joueur.c', nous avons l implementation des deux fonctions principales qui gerent le joueur:
    
    1) 'InitialiserJoueur(joueur *joueur)':

 cette fonction est responsable de mettre en place l etat initial du joueur en debut de partie.elle fixe les points de vie a 10 et affiche
  un message indiquant ce fait.le parametre 'joueur' est un pointeur vers une structure 'joueur' ,ce qui signifie que les modifications apportees a cette structure
  affecteront la variable passe a la fonction.

  2) 'SubirDegats(joueur *joueur)': 

 cette fonction reduit les points de vie du joueur de 1 pour simuler le fait de subir des degats.encore une fois, puisque  'joueur' est un pointeur
 vers une structure 'joueur', cette fonction modifie directement les points de vie de la structure originale.elle affiche egalement les 
 point de vie restants apres cette reduction.

 ces fonction sont essentielles pour gerer les actions principales du joueur dans le jeu  comme l initialisation et la gestion des degats subit
 rendant le code modulaire et facile  a maintenir.*/

//-----------------------------------------------------------------------------------------------------------------------------------------------------------------

/*inclut le fichier d en tete 'joueur.h' pour avoir accees a la definition de la structure 'joueur' et aux declarations des fonctions. 
cela permet de s assurer que la structure 'joueur' et les fonctions utilisees ici correspondent a celles definies dans 'joueur.h'*/

#include "joueur.h"

//-----------------------------------------------------------------------------------------------------------------------------------------------------------------
/*inclut la bibliotheque standart d entree/sortie pour pouvoir utiliser les fonctions d affichage comme 'printf'.*/
#include <stdio.h>
//-----------------------------------------------------------------------------------------------------------------------------------------------------------------
/*implementation de la fonction 'InitialiserJoueur': cette fonction est destinee a initialiser un joueur au debut du jeux.
le parametre 'joueur' est un pointeur vers une structure 'Joueur' permettant a cette fonction de modifier directemnt la structure pasee en argument.*/

void InitialiserJoueur(Joueur *joueur)
{
    joueur->PointsDeVie = 10; // initialise les points de vie du joueur a 10.
    printf("le joueur commence avec %d points de vie.\n", joueur->PointsDeVie);
     //affiche un message qui indique que le joueur commence avec 10 points de vie.
}
//-----------------------------------------------------------------------------------------------------------------------------------------------------------------

/*implementation de la fonction'SubirDegats': cette fonctions diminue les points de vie du joueur pour simuler qu il subit des degats.
comme pour 'InitialiserJoueur', le parametre est un pointeur vers une strusture 'joueur' ce qui permet de modifier les points de vie du joueur directement.*/

void SubirDegats(Joueur *joueur)
{
    joueur->PointsDeVie -= 1; // diminue les points de vie du joueur de 1.
    printf("le joueur subit un point de degat! point de vie restants: %d \n" , joueur->PointsDeVie);
    //affiche un message qui indique que le joueur subit 1 degat et les pv restants.
}

