/*la ligne suivante verifie si JOUEUR_H n a pas deja etet definie .
  cela empeche le contenue de ce fichier d etre inclus(copie) plusieurs fois dans un meme fichier source
  ce qui pourrait causer des erreurs de compilation.*/
#ifndef JOUEUR_H 
#define JOUEUR_H

//------------------------------------------------------------------------------------------------------

/*definition d une structure nommee 'joueur'.une structure est une collection de variables (appelees champs)
  regroupees sous un meme nom . cette structure specifique contient un seul champ :'PointDeVie' qui est un entier
  cela represantele nombre de points de vie qu un joueur a dans le jeu.*/
  typedef struct
  {
    int PointsDeVie; //champ entier pour stocker les points de vie d'un joueur
  } Joueur;

  //------------------------------------------------------------------------------------------------------

  /*declaration de la fonction 'InitialiserJoueur'. cette fonction prend un pointeur vers une structure
    'joueur' comme parametre. son but est d initialiser le joueur, en particulier ces points de vies
    au debut de jeu. les details de l implementation seront dans le fichier joueur.c 
  */
  void InitialiserJoueur(Joueur*joueur);

 //------------------------------------------------------------------------------------------------------

  /*declaration de la fonction 'SubirDegats'. comme pour 'InitialiserJoueur', cette fonction 
    prend un pointeur vers 'joueur. son objectif est de simuler le joueur subissant des degats c est a dire
    de diminuer ses points de vies.l implementation specifique sera egalement dans joueur.c */
 void SubirDegats(Joueur*joueur);

  //------------------------------------------------------------------------------------------------------

  /* fin de la condition preprocesseur. si JOUEUR_H n etait pas defini, il le sera maintenant et tout
  le code entre #ifndef et #endif sera inclus. cela empeche les inclusions multiples.*/

  #endif

 //------------------------------------------------------------------------------------------------------

/*ce fichier d en tete (joueur.h)sert principalement a deux choses : 
    
    1:definition de structures et de types:
        il definit le type de "joueur" qui est une structure contenant les donnees necessaires pour 
        representer un joueur dans le jeu
        
    2:declaration de fonctions :
        il declare les fonctions qui seront utilisees pour manipuler les donees du joueur telle que 
        l initialisation de ces points de vie et la simulation de subir des degats.
        la declaration de fonction indique simplement l existance de ces fonctions,leur type de retour 
        ( dans ce cas void car elle ne retourne rien),leur nom et les parametres qu ellles prennent
        l implementation reeles de ces fonctions,c est a dire ce qu elle font exactement,
        sera dans un fichier source separe(joueur.c) */

