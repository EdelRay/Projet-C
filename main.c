#include <stdio.h>
#include <string.h>
#include"reclamation.h"

int main()
{
    reclam r1={12,"33",12,03,2022,"123","salle mal organisée",1,"salle \n"},r2={1,"38",30,04,2022,"123","salle organisée",2,"salle1"} , r3 ;

    int y=ajouter("reclam.txt",r1);
    if(y==1)
        printf("\n ajout de reclamation avec succés");
    else printf("\n echec ajout");



     y=modifier("reclam.txt",12,r2);
    if(y==1)
        printf("\n modification de reclamation avec succés");
    else printf("\n echec de modification");


   /*y=supprimer("reclam.txt",1);
    if(y==1)
        printf("\n suppression de reclamation avec succés");
    else printf("\n echec de suppression");


   r3=chercher("reclam.txt",3);
    if(r3.id==-1)
        printf("introuvable");
    else printf("disponible");*/
    return 0 ;
}

