#include "bureau_de_vote.h"

int ajouter ( char *filename, Bureauv B )
{ 
FILE * f=fopen(filename , "a");
if (f!=NULL)
{
    fprintf(f, "%d %s %d %s %s %d %d %d \n ",B.salle,B.capacite_obs,B.capacite_elec,B.ID_bv ,B.ID_agent, B.date.jour,B.date.mois,B.date.annee);
fclose(f);
return 1;
}
else return 0;
}

int modifier( char *filename ,char ID_bv , Bureauv nouv )
{ 
int tr=0;
Bureauv B;
FILE *f=fopen( filename , "r");
FILE *f2=fopen (" nouv.txt " , "w");
if(f!= NULL && f2!=NULL)
{
    while (fscanf(f,"%d  %s  %d  %s  %s   %d %d %d \n " ,&B.salle,B.capacite_obs,&B.capacite_elec,B.ID_bv,B.ID_agent ,&B.date.jour,&B.date.mois,&B.date.annee) !=EOF )
    {
        if( strcmp(B.ID_bv, "ID_bv ")==0)
       {
        fprintf(f2,"%d  %s  %d  %s  %s  %d %d %d \n" , nouv.salle,nouv.capacite_obs,nouv.capacite_elec,nouv.ID_bv,nouv.ID_agent, nouv.date.jour , nouv.date.mois,nouv.date.annee);
       tr=1 ;
       }
       else
        fprintf(f2 , "%d  %s  %d  %s  %s  %d %d %d \n " ,B.salle,B.capacite_obs,B.capacite_elec,B.ID_bv,B.ID_agent, B.date.jour , B.date.mois , B.date.annee);
    }
}
fclose (f);
fclose(f2);
remove (filename );
rename(" nouv.txt" , filename );
return tr;
}





int supprimer ( char *filename ,  char nv_ID )
{
int tr=0;
Bureauv B;
FILE * f=fopen(filename , "r");
FILE * f2=fopen(" nouv.txt" ,"w");
if(f!=NULL && f2!=NULL)
{
    while (fscanf(f,"%d  %s  %d  %s  %s   %d %d %d \n " ,&B.salle,B.capacite_obs,&B.capacite_elec,B.ID_bv,B.ID_agent, &B.date.jour , &B.date.mois , &B.date.annee )!=EOF)
    {
        if(strcmp (B.ID_bv, "nv_ID")==0)
            tr=1;
        else
            fprintf(f2, "%d  %s  %d  %s  %s   %d %d %d \n " ,B.salle,B.capacite_obs,B.capacite_elec,B.ID_bv,B.ID_agent, B.date.jour,B.date.mois,B.date.annee);
    }
}
fclose(f);
fclose(f2);
remove(filename);
rename (" nouv.txt", filename);
return tr;
}




Bureauv chercher (char *filename, char nv_ID)
{
    Bureauv B;
    int tr=0 ;
    FILE * f=fopen(filename  ,"r");
    if ( f!=NULL)
    {
        while(tr==0 && fscanf(f," %d  %s  %d  %s  %s   %d %d %d \n " ,&B.salle,B.capacite_obs,&B.capacite_elec,B.ID_bv,B.ID_agent, &B.date.jour , &B.date.mois , &B.date.annee)!=EOF)
        {
            if (strcmp( B.ID_bv, "nv_ID")==0)
                tr=1;
        }
    }
    fclose(f) ;
    if (tr==0)
        B.ID_bv== "-1";
    return B ;
} 
