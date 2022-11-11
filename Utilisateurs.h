#ifndef UTILISATEURS_H_INCLUDED
#define UTILISATEURS_H_INCLUDED
#include <stdio.h>
typedef struct date  
{
int j,m,a
} Date1 ;
typedef struct uilisateur
{
char nom[30];
char prenom [30];
int CIN;
Date1 d;
char gendre [20];
char NumBV[20];
char login [20];
char password[20];
char Role[20]; 
char gouvernorat [20];
char etablissement[20];
} Utilisateur ;
int ajouter1(char *, Utilisateur );
int modifier1( char *, int, Utilisateur );
int supprimer1(char *, int );
Utilisateur chercher1(char *, int);

#endif // UTILISATEURS_H_INCLUDED

