#include <stdio.h>
#include <string.h>
#include"Utilisateurs.h"
#include"reclamation.h"
#include"election.h"
#include "bureau_de_vote.h"
#include "GestionListeEelectorale.h"


int main()
{
    Utilisateur U1= {"12857883","Ray","Lay",17,05,2000,"femme","12365","123d654","147852","Electeur","Sousse","Ecole 20 Mars"},U2= {"15412458","Wij","Lay",02,07,2002,"femme","78965","789s654","369852","Observateur","Tunis","Esprit "},U3;

   

 int x=ajouter1("Gestion-des-utilisateurs.txt", U1);
    
    if(x==1)
        printf("\nAjout de l'utilisateur avec succés");
    else printf("\nEchec ajout");
        
    x=modifier1("Gestion-des-utilisateurs.txt",12857883,U2 );

    if(x==1)
        printf("\nModification de l'utilisateur avec succés");
    else printf("\nechec Modification");
    x=supprimer1("Gestion-des-utilisateurs.txt",12857883 );
    if(x==1)
        printf("\nSuppression de l'utilisateur avec succés");
    else printf("\nechec Suppression");
    U3=chercher1("Gestion-des-utilisateurs.txt",12857883 );
    if(U3.CIN==-1)
        printf("Introuvable");
    return 0;

Election e1= {11,"ariana",01,02,2022,1000,100};
Election e2={123,"manzah",10,11,2022,1002,150};
Election e3;

    int x2;
  x2=ajouter2(e1,"fich1.txt");
    if(x2==1)
      printf("\n ajouter election avec succés");
   else printf("\n echec ajout ");

    x2=modifier2(11 ,e1,"fich1.txt");

    if(x2==1)
        printf("\nModification d'election avec succés");
    else printf("\nechec Modification");
    x2=supprimer2( 13,"fich1.txt" );
    if(x2==1)
        printf("\nSuppression d'election avec succés");
    else printf("\nechec Suppression");
    e3=chercher2( e3,"fich1.txt" );
    if(*e.id==-1)
        printf("introuvable");
printf(e1); 
    return 0;


  reclam r1={12,"33",12,03,2022,"123","salle mal organisée",1,"salle"},r2={1,"38",30,04,2022,"123","salle organisée",2,"salle1"} , r3 ;
    int y=ajouter3("reclam.txt",r1);
    if(y==1)
        printf("\n ajout de reclamation avec succés");
    else printf("\n echec ajout");

    y=modifier3("reclam.txt",1,r2);
    y=supprimer3("reclam.txt",1);
    r3=chercher3("reclam.txt",3);
    if(r3.id==-1)
        printf("introuvable");
    return 0 ;

Date4 d ;
Bureau_vote   B1={ 7,"5" , 20, " 12345", " 67892", 4,5,2022},B2={ 6 , "4" , 15 , "85671" , " 14576" , 8,6,2022},B3;
int y2=ajouter4(" Bureau_vote.txt", B1,d);
    
if (y2==1)
    printf("\najout de bureau avec succes ");
    else printf("\nechec ajout");
    
    y2=modifier4(" Bureau_vote.txt" ," 12545",B2,d);
if(y2==1)
    printf("\nModification de Bureau avec succes");
else printf ("\nechec Modification");
y=supprimer4(" Bureau_vote.txt"," 56423");
if (y2==1)
    printf("\nSuppression de Bureau avec succes ");
else printf (" \nechec Suppression");
B3=chercher4(" Bureau_vote.txt", " 14325");
if ( B3.ID_bv==-1)
    printf (" introuvable");
return 0;


liste l1={{29,1,2001},"tunis",1111,2022,13499846,1};
liste l2={{12,8,2000},"gabes",2222,2021,12345678,2};

   int x=ajouter("liste.txt", l1);
    if(x==1)
        printf("\najout de liste avec succes  ");
    else printf("\nechec ajout");

  int y=modifier("liste.txt",2022,l2);
printf("*****");
    if(y==1)
        printf("\nModification de liste avec succes ");
    else printf("\nechec Modification");
    int z=supprimer_liste("liste.txt",2022);
    if(z==1)
        printf("\nSuppression de liste avec succes ");
    else printf("\nechec Suppression");
    l3=chercher_liste("liste.txt",2022);
    if(l1.idenListe==-1)
        printf("introuvable");





        return 0 ;
}



}








