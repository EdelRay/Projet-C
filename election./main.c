#include <stdio.h>
#include <string.h>
#include"election.h"

int main()
{
    Election p1= {5,"ffff",5,4,2000,6,8},p2= {88,"ddd",2,3,2001,14,7},p3;
   int x=ajouter("election.txt", p1);
    
  /*  if(x==1)
        printf("\najout de election avec succés");
    else printf("\nechec ajout");
  int x=modifier("election.txt",5,p2 );

    if(x==1)
        printf("\nModification de election avec succés");
    else printf("\nechec Modification");
   int x=supprimer("election.txt",5);
    if(x==1)
        printf("\nSuppression d'election avec succés");
    else printf("\nechec Suppression");*/
    /*p3=chercher("election.txt",5);
    if(p3.id==-1)
        printf("introuvable");
    else
	printf("dispo");*/
    return 0;
}
