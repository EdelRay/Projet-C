#include <stdio.h> 
#include <string.h>
#include "bureau_de_vote.h" 
int main ()
{

Bureauv  B1={ 7,"ldlf" , 20, "ijijo", "67892"  ,2000, 7,8},B2={ 6 , "poi" , 15 , "ojkdf" , " okj,f"  , 2000,7,8} ,B3;
int y ;

 y=ajouter("Bureau_de_vote.txt", B1);
    
if (y==1)
    printf("\najout de bureau avec succes ");
else printf("\nechec ajout"); 

    
  y=modifier( "Bureau_de_vote.txt" ,"hujijnib" ,B2);
if(y==1)
    printf("\nModification de Bureau avec succes");
else printf ("\nechec Modification");

 y=supprimer(" Bureau_de_vote.txt", 10);
if (y==1)
    printf("\nSuppression de Bureau avec succes ");
else printf (" \nechec Suppression");
B3=chercher(" Bureau_de_vote.txt", 5);
if (strcmp ( B3.ID_bv,"-1"))
    printf (" introuvable");
else 
printf ("dispo");
return 0;
}

