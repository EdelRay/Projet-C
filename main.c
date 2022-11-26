#include <stdio.h>
#include <string.h>
#include "GestionListeEelectorale.h"
int main()
{
liste l1={13499846,"tunis","1111","2022","13499846","gauche","65468894","homme",{15,2,2002}};
liste l2={65489848,"bizerte","2222","2021","12345678","droite","65468419","homme",{14,3,1999}};

   //int x=ajouter("filename.txt", l1);
    /*if(x==1)
        printf("\najout de liste avec succes  ");
    else printf("\nechec ajout");

  int y=modifier("filename.txt",13499846,l2);
printf("*****");
    if(y==1)
        printf("\nModification de liste avec succes ");
    else printf("\nechec Modification");*/
    int z=supprimer("filename.txt",65489848);
    if(z==1)
        printf("\nSuppression de liste avec succes ");
    else printf("\nechec Suppression");
    l2=chercher("filename.txt",2022);
    if(l1.id==-1)
        printf("introuvable");





        return 0 ;
}
