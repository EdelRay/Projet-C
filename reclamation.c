#include "reclamation.h"
int ajouter(char *filename ,reclam r )
{
    FILE * f=fopen(filename,"a");
    if (f!=NULL)
    {
        fprintf(f,"%d %s %d %d %d %s %s %d %s",r.id,r.numbv,r.D.jours,r.D.mois,r.D.annee,r.numls,r.desc,r.etat, r.type);
    fclose(f);
    return 1 ;
    }
    else return 0;

}



int modifier (char *filename ,int ids , reclam nouv)
{
    int tr=0 ;
    reclam r ;
    FILE *f= fopen(filename,"r");
    FILE *f1=fopen("nouv.txt","a");
    if (f!=NULL && f1!=NULL)
    {
        while (tr==0&&fscanf(f,"%d %s %d %d %d %s %s %d %s",&r.id,r.numbv,&r.D.jours,&r.D.mois,&r.D.annee,r.numls,r.desc,&r.etat, r.type)!=EOF)
    {
        if (r.id==ids)
        {
             fprintf(f1,"%d %s %d %d %d %s %s %d %s \n",nouv.id,nouv.numbv,nouv.D.jours,nouv.D.mois,nouv.D.annee,nouv.numls,nouv.desc,nouv.etat, nouv.type);
            tr=1 ;
        }
        else
            fprintf(f1,"%d %s %d %d %d %s %s %d %s \n",r.id,r.numbv,r.D.jours,r.D.mois,r.D.annee,r.numls,r.desc,r.etat, r.type);
        }
    }
    fclose(f);
    fclose(f1);
    remove(filename);
    rename("nouv.txt",filename) ;
    return tr ;
}


int supprimer (char *filename , int ids)
{
    int tr=0 ;
    reclam r ;
    Date D ;
    FILE *f=fopen(filename,"r");
    FILE *f1=fopen("nouv.txt","w");
    if(f!=NULL && f1!=NULL)
    {
        while (fscanf(f,"%d %s %d %d %d %s %s %d %s \n",&r.id,r.numbv,&r.D.jours,&r.D.mois,&r.D.annee,r.numls,r.desc,&r.etat, r.type)!=EOF);
     {
         if (r.id==ids)
            tr=1;
         else
             fprintf(f1,"%d %s %d %d %d %s %s %d %s\n",r.id,r.numbv,r.D.jours,r.D.mois,r.D.annee,r.numls,r.desc,r.etat, r.type);
    }
    }
    fclose(f);
    fclose(f1);
    remove(filename);
    rename("nouv.txt",filename) ;
    return tr ;
     }

reclam chercher(char *filename,int ids)
{
    reclam r ;
    int tr ;
    FILE *f=fopen(filename ,"r");
    if(f!=NULL)
    {

        while (tr==0&&fscanf(f,"%d %s %d %d %d %s %s %d %s\n",&r.id,r.numbv,&r.D.jours,&r.D.mois,&r.D.annee,r.numls,r.desc,&r.etat, r.type)!=EOF);
     {
         if (r.id==ids)
            tr=1; }
    }
    fclose(f);
    if(tr==0)
        r.id==-1;
    return r;
}

