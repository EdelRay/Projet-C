#ifndef RECLAMATION_H_INCLUDED
#define RECLAMATION_H_INCLUDED
#include <stdio.h>
typedef struct date 
{ int jours  ;
int mois ;
int annee;
}Date ;
typedef struct reclamation 
{ int id;
char numbv[3] ;
Date D;
char numls[3];
char  desc[200] ;
int etat  ;
char type[20];
} reclam;
int ajouter(char *,reclam) ;
int modifier(char * ,int  , reclam ) ;
int supprimer (char * , int) ;
reclam chercher(char *, int );
#endif

