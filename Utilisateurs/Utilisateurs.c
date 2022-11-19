#include "Utilisateurs.h"

Utilisateur U;

int ajouter1(char *filename1, Utilisateur U1)
{
    FILE *f = fopen(filename1, "a");
    if (f != NULL)
    {
        fprintf(f, "%d %s %s %d %d %d %s %s %d %d %d %s %s %s ", U.CIN, U.nom, U.prenom, U.d.j, U.d.m, U.d.a, U.gendre, U.NumBV, U.P.login, U.P.password, U.vote, U.role, U.gouvernorat, U.etablissement);
        fclose(f);
        return 1;
    }
    else
        return 0;
}

int modifier1(char *filename1, int CIN, Utilisateur nouv)
{
    int tr = 0;
    Utilisateur U;
    FILE *f = fopen(filename1, "r");
    FILE *f2 = fopen("nouv.txt", "w");
    if (f != NULL && f2 != NULL)
    {
        while (fscanf(f, "%d %s %s %d %d %d %s %s %d %d %d %s %s %s ", &U.CIN, U.nom, U.prenom, &U.d.j, &U.d.m, &U.d.a, U.gendre, U.NumBV, &U.P.login, &U.P.password, &U.vote, U.role, U.gouvernorat, U.etablissement) != EOF)
        {
            if (U.CIN == CIN)
            {
                fprintf(f2, "%d %s %s %d %d %d %s %s %d %d %d %s %s %s  ", nouv.CIN, nouv.nom, nouv.prenom, nouv.d.j, nouv.d.m, nouv.d.a, nouv.gendre, nouv.NumBV, nouv.P.login, nouv.P.password, nouv.vote, nouv.role, nouv.gouvernorat, nouv.etablissement);
                tr = 1;
            }
            else
                fprintf(f2, "%d %s %s %d %d %d %s %s %d %d %d %s %s %s ", U.CIN, U.nom, U.prenom, U.d.j, U.d.m, U.d.a, U.gendre, U.NumBV, U.P.login, U.P.password, U.vote, U.role, U.gouvernorat, U.etablissement);
        }
    }
    fclose(f);
    fclose(f2);
    remove(filename1);
    rename("nouv.txt", filename1);
    return tr;
}

int supprimer1(char *filename1, int CIN)
{
    int tr = 0;
    Utilisateur U;
    FILE *f = fopen(filename1, "r");
    FILE *f2 = fopen("nouv.txt", "w");
    if (f != NULL && f2 != NULL)
    {
        while (fscanf(f, "%d %s %s %d %d %d %s %s %d %d %d %s %s %s ", &U.CIN, U.nom, U.prenom, &U.d.j, &U.d.m, &U.d.a, U.gendre, U.NumBV, &U.P.login, &U.P.password, &U.vote, U.role, U.gouvernorat, U.etablissement) != EOF)
        {
            if (U.CIN == CIN)
                tr = 1;
            else
                fprintf(f2, "%d %s %s %d %d %d %s %s %d %d %d %s %s %s ", U.CIN, U.nom, U.prenom, U.d.j, U.d.m, U.d.a, U.gendre, U.NumBV, U.P.login, U.P.password, U.vote, U.role, U.gouvernorat, U.etablissement);
        }
    }
    fclose(f);
    fclose(f2);
    remove(filename1);
    rename("nouv.txt", filename1);
    return tr;
}

Utilisateur chercher1(char *filename1, int id)
{
    Utilisateur U;

    int tr;
    FILE *f = fopen(filename1, "r");
    if (f != NULL)
    {
        while (tr == 0 && fscanf(f, "%d %s %s %d %d %d %s %s %d %d %d %s %s %s ", &U.CIN, U.nom, U.prenom, &U.d.j, &U.d.m, &U.d.a, U.gendre, U.NumBV, &U.P.login, &U.P.password, &U.vote, U.role, U.gouvernorat, U.etablissement) != EOF)
        {
            if (U.CIN == id)
                tr = 1;
        }
    }
    fclose(f);
    if (tr == 0)
        U.CIN = -1;
    return U;
}
