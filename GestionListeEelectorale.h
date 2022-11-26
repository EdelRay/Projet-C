#ifndef GESTIONLISTEELECTORALE_H_INCLUDED
#define GESTIONLISTEELECTORALE_H_INCLUDED
#include<stdio.h>
typedef struct date{
int jour,mois,annee;
}Date;


typedef struct liste_electorale
{
int id;
char nom[20];
char CIN1[10],CIN2[10],CIN3[10];
char orientation[20];
char idTL[20];
char genre[20];
Date D;
}liste;

int ajouter(char * filename, liste L );
int modifier( char * filename, int id, liste nouv );
int supprimer(char * filename, int id);
liste chercher(char * filename, int id);
#endif
