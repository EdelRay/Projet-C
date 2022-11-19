
#ifdef AAJOUTUTILISATEUR_H_INCLUDED
#define AAJOUTUTILISATEUR_H_INCLUDED
#include <stdio.h>
typedef struct
{
    int j, m, a
} Date;
typedef struct 
{
    char nom[30];
    char prenom[30];
    int CIN;
    Date d;
    char gendre[20];
    char NumBV[20];
    char login[20];
    char password[20];
    char role[20];
    char gouvernorat[20];
    char etablissement[20];
} Ajoututilisateur;
int tableaau_Utilisateurs_Ajoute (Ajoututilisateur Tab [50]);
int Verifier_Ajout(Ajoututilisateur Util  );
int tableau_BV_disponible (char BV [100][10], char etablissement, char gouvernorat);
void AjouterUtilisateur (Ajoututilisateur Util);

