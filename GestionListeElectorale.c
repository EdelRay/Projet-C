#include "GestionListeEelectorale.h"
#include<stdio.h>
#include<string.h>

int ajouter(char * filename, liste L )
{
    FILE * f=fopen("filename.txt", "a");
    if(f!=NULL)
    {
        fprintf(f,"%d %s %s %s %s %s %s %s %d %d %d     \n",L.id,L.nom,L.CIN1,L.CIN2,L.CIN3,L.orientation,L.idTL,L.genre,L.D.jour,L.D.mois,L.D.annee);
        fclose(f);
        return 1;
    }
    else return 0;
}
int modifier( char * filename, int id, liste nouv )
{
    int tr=0;
    liste L ;
    FILE * f=fopen("filename.txt", "r");
    FILE * f2=fopen("nouv.txt", "w");
    if(f!=NULL && f2!=NULL)
    {
        while(fscanf(f,"%d %s %s %s %s %s %s %s %d %d %d \n",&L.id,L.nom,L.CIN1,L.CIN2,L.CIN3,L.orientation,L.idTL,L.genre,&L.D.jour,&L.D.mois,&L.D.annee)!=EOF)
        {
            if(L.id==id)
            {
                fprintf(f2,"%d %s %s %s %s %s %s %s %d %d %d \n",nouv.id,nouv.nom,nouv.CIN1,nouv.CIN2,nouv.CIN3,nouv.orientation,nouv.idTL,nouv.genre,nouv.D.jour,nouv.D.mois,nouv.D.annee);
                tr=1;
            }
            else
                fprintf(f2,"%d %s %s %s %s %s %s %s %d %d %d \n",L.id,L.nom,L.CIN1,L.CIN2,L.CIN3,L.orientation,L.idTL,L.genre,L.D.jour,L.D.mois,L.D.annee);

        }
    }
    fclose(f);
    fclose(f2);
    remove(filename);
    rename("nouv.txt", filename);
    return tr;

}
int supprimer(char * filename, int id)
{
    int tr=0;
    liste L;
    FILE * f=fopen("filename.txt", "r");
    FILE * f2=fopen("nouv.txt", "w");
    if(f!=NULL && f2!=NULL)
    {
        while(fscanf(f,"%d %s %s %s %s %s %s %s %d %d %d \n",&L.id,L.nom,L.CIN1,L.CIN2,L.CIN3,L.orientation,L.idTL,L.genre,&L.D.jour,&L.D.mois,&L.D.annee)!=EOF)
        {
            if(L.id==id)
                tr=1;
            else
                fprintf(f2,"%d %s %s %s %s %s %s %s %d %d %d \n",L.id,L.nom,L.CIN1,L.CIN2,L.CIN3,L.orientation,L.idTL,L.genre,L.D.jour,L.D.mois,L.D.annee);
        }
    }
    fclose(f);
    fclose(f2);
    remove(filename);
    rename("nouv.txt", filename);
    return tr;
}
liste chercher(char * filename, int id)
{
    liste L;
    int tr;
    FILE * f=fopen("filename.txt", "r");
    if(f!=NULL)
    {
        while(tr==0 && fscanf(f,"%d %s %s %s %s %s %s %s %d %d %d \n",&L.id,L.nom,L.CIN1,L.CIN2,L.CIN3,L.orientation,L.idTL,L.genre,&L.D.jour,&L.D.mois,&L.D.annee)!=EOF)
        {
            if(L.id==id)
                tr=1;
        }
    }
    fclose(f);
    if(tr==0)
        L.id=-1;
    return L;

}
