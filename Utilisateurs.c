#include "Utilisateurs.h"

int ajouter1(char * Gestion-des-utilisateurs, Utilisateur U )
{
    FILE * f=fopen("Gestion-des-utilisateurs.txt", "a");
    if(f!=NULL)
    {
        fprintf(f,"%d %s %s %s %s %s %s %s %s %s %s %s %s",U.CIN,U.Nom,U.Prenom,U.d,U.Gendre,U.NumBV,U.login,U.Password,U.Role,U.Gouvernorat,U.Etablissement);       
         fclose(f);
        return 1;
    }
    else return 0;
}

int modifier1( char * Gestion-des-utilisateurs, int CIN, Utilisateur nouv )
{
    int tr=0;
    Utilisateur U;
    FILE * f=fopen("Gestion-des-utilisateurs.txt", "r");
    FILE * f2=fopen("nouv.txt", "w");
    if(f!=NULL && f2!=NULL)
    {
        while(fscanf(f,"%d %s %s %s %s %s %s %s %s %s %s %s",U.CIN,U.Nom,U.Prenom,U.d,U.Gendre,U.NumBV,U.login,U.Password,U.Role,U.Gouvernorat,U.Etablissement)!=EOF)
        {
            if(U.CIN== CIN)
            {
                fprintf(f2,"%d %s %s %s %s %s %s %s %s %s %s %s %s",nouv.CIN,nouv.Nom,nouv.Prenom,nouv.d,nouv.Gendre,nouv.NumBV,nouv.login,nouv.Password,nouv.Role,nouv.Gouvernorat,nouv.Etablissement);
                tr=1;
            }
            else
                fprintf(f2,"%d %s %s %s %s %s %s %s %s %s %s %s",U.CIN,U.Nom,U.Prenom,U.d,U.Gendre,U.NumBV,U.login,U.Password,U.Role,U.Gouvernorat,U.Etablissement);

        }
    }
    fclose(f);
    fclose(f2);
    remove("Gestion-des-utilisateurs.txt");
    rename("nouv.txt", Gestion des utilisateurs);
    return tr;


int supprimer1(char *Gestion des utilisateurs, int CIN)
{
    int tr=0;
    Utilisateur U;
    FILE * f=fopen("Gestion des utilisateurs.txt", "r");
    FILE * f2=fopen("nouv.txt", "w");
    if(f!=NULL && f2!=NULL)
    {
        while(fscanf(f,"%d %s %s %s %s %s %s %s %s %s %s %s",&U.CIN,U.Nom,U.Prenom,U.d,U.Gendre,U.NumBV,U.login,U.Password,U.Role,U.Gouvernorat,U.Etablissemen)!=EOF)
        {
            if( U.CIN==CIN)
                tr=1;
            else
                fprintf(f2,"%d %s %s %s %s %s %s %s %s %s %s %s",U.CIN,U.Nom,U.Prenom,U.d,U.Gendre,U.NumBV,U.login,U.Password,U.Role,U.Gouvernorat,U.Etablissement);
        }
    }
    fclose(f);
    fclose(f2);
    remove("Gestion-des-utilisateurs.txt");
    rename("nouv.txt", Gestion-des-utilisateurs);
    return tr;
}
Utilisatur chercher1(char * "Gestion-des-utilisateurs.txt", int id)
{
    Utilisateur U;
    int tr;
    FILE * f=fopen("Gestion-des-utilisateurs.txt", "r");
    if(f!=NULL)
    {
        while(tr==0&& fscanf(f,"%d %s %s %s %s %s %s %s %s %s %s %s",&U.CIN,U.Nom,U.Prenom,U.d,U.Gendre,U.NumBV,U.login,U.Password,U.Role,U.Gouvernorat,U.Etablissement)!=EOF)
        {
            if(U.CIN=CIN)
                tr=1;
        }
    }
    fclose(f);
    if(tr==0)
        U.CIN=-1;
    return p;

}

