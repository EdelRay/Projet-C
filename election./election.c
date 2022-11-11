#include "election.h"

int ajouter(char * filename, Election p )
{
    FILE * f=fopen(filename, "a");
    if(f!=NULL)
    {
        fprintf(f,"%d %s %d %d %d %d\n",p.id,p.municipalite,p.date.jour,p.date.mois,p.date.annee,p.nbre_habitants);
        fclose(f);
        return 1;
    }
    else return 0;
}
int modifier( char * filename, int id, Election nouv )
{
    int tr=0;
    Election p;
    FILE * f=fopen(filename, "r");
    FILE * f2=fopen("nouv.txt", "w");
    if(f!=NULL && f2!=NULL)
    {
        while(fscanf(f,"%d %s %d %d %d %d \n",&p.id,p.municipalite,&p.date.jour,&p.date.mois,&p.date.annee,&p.nbre_habitants)!=EOF)
        {
            if(p.id== id)
            {
                fprintf(f2,"%d %s %d %d %d %d \n",nouv.id,nouv.municipalite,nouv.date.jour,nouv.date.mois,nouv.date.annee,nouv.nbre_habitants);
                tr=1;
            }
            else
                fprintf(f2,"%d %s %d %d %d %d \n",p.id,p.municipalite,p.date.jour,p.date.mois,p.date.annee,p.nbre_habitants);

        }
    }
    fclose(f);
    fclose(f2);
    remove(filename);
    rename("nouv.txt", filename);
    return tr;

}
int supprimer(char * filename, int ids)
{
    int tr=0;
    Election p;
    FILE * f=fopen(filename, "r");
    FILE * f2=fopen("nouv.txt", "w");
    if(f!=NULL && f2!=NULL)
    {
        while(fscanf(f,"%d %s %d %d %d %d\n",&p.id,p.municipalite,&p.date.jour,&p.date.mois,&p.date.annee,&p.nbre_habitants)!=EOF)
        {
            if(p.id== ids)
                tr=1;
            else
                fprintf(f2,"%d %s %d %d %d %d \n",p.id,p.municipalite,p.date.jour,p.date.mois,p.date.annee,p.nbre_habitants);
        }
    }
    fclose(f);
    fclose(f2);
    remove(filename);
    rename("nouv.txt", filename);
    return tr;
}
Election chercher(char * filename, int ids)
{
    Election p;
    int tr=0;
    FILE * f=fopen(filename, "r");
    if(f!=NULL)
    {
        while(tr==0&& fscanf(f,"%d %s %d %d %d %d \n",&p.id,p.municipalite,&p.date.jour,&p.date.mois,&p.date.annee,&p.nbre_habitants)!=EOF)
        {
            if(p.id== ids)
                tr=1;
        }
    }
    fclose(f);
    if(tr==0)
        p.id=-1;
    return p;

}
