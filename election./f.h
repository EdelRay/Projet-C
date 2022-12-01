#ifndef FONCTIONS_H_INCLUDED
#define FONCTIONS_H_INCLUDED

typedef struct  date
{
int j,m,a;
} Date1;
typedef struct connexion {
char login [20];
char password[20];
}cx;
typedef struct user
{
int CIN;
char nom[30];
char prenom [30];

Date1 date;
char gendre [20]; 
int NumBV;
cx lcx;
int vote;
char Role[20]; 
char gouvernorat [20];
char etablissement[20];

} user ;
float TPE(char *filename ) ;
float agemoyen(char *filename);
int ajouter(char * filename, user u);

#endif
