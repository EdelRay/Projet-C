#ifndef BUREAU_DE_VOTE_H_INCLUDED
#define BUREAU_DE_VOTE_H_INCLUDED
#include<stdio.h>
#include<string.h> 


typedef struct 
{
int jour, mois ,annee;
}Date ;
typedef struct 
{ 
int salle ;
char capacite_obs[20];
int capacite_elec;
char ID_bv[20] ,ID_agent [20];
Date date ;
} Bureauv ;



int ajouter ( char * ,Bureauv );
int modifier ( char *, char , Bureauv );
int supprimer (char *, char );
Bureauv chercher(char *, char );

#endif // BUREAU_DE_VOTE_H_INCLUDED 
