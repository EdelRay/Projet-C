#ifndef ELECTION_H_INCLUDED
#define ELECTION_H_INCLUDED
#include <stdio.h>



typedef struct
{
    int jour;
    int mois;
    int annee;
}Date;

typedef struct
{
  int id;
   char municipalite [50];
   Date date;
  int nbre_cons ;
   int nbre_habitants;
}Election;


//le type de  retour int c'est pour indiquer si la tache a été réalisée avec succés ou non// pour afficher des lsg plus tard exemple erreur d'ouverture de fichier, element introuvable
int ajouter(char *, Election );
int modifier( char *, int, Election );
int supprimer(char *, int );
Election chercher(char *, int);

#endif // Election_H_INCLUDED
