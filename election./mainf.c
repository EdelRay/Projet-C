#include<stdio.h>
#include <stdlib.h>
#include"f.h"
#include<string.h>
int main()
{ 
 user u , nouv ;
int x,y,z,f,h;
float a,b;
int CIN ;
float moyenne;

u.CIN=13654788;
strcpy(u.nom , "roua");
strcpy(u.prenom ,"saidi");
u.date.j=20;
u.date.m=7;
u.date.a=2000;
strcpy(u.gendre , "femme");
u.NumBV=1;
strcpy (u.lcx.login,"455885");
strcpy (u.lcx.password,"123333");
u.vote=0;
strcpy (u.Role,"electeur");
strcpy(u.gouvernorat ,"tozeur");
strcpy(u.etablissement,"kkkjhyft");
//user nouv
nouv.CIN=15638247;
strcpy(nouv.nom,"radheya");
strcpy(nouv.prenom,"abidi");
u.date.j=2;
u.date.m=5;
u.date.a=1999;
strcpy(nouv.gendre , "femme");
nouv.NumBV=1;
strcpy(nouv.lcx.login,"11111");
strcpy(nouv.lcx.password,"15485515");
nouv.vote=0;
strcpy(nouv.Role,"administrateur");
strcpy(nouv.gouvernorat,"tunis");
strcpy(nouv.etablissement,"kkkkkk");


x=ajouter("age.txt",u);
/*y=ajouter("age.txt",nouv);
 if(x==1)
        printf(" ajout d'utilisateur1 avec succés \n");
    else printf(" echec ajout \n");

 if(y==1)
        printf(" ajout d'utilisateur2 avec succés \n");
    else
        printf(" echec ajout \n");*/
float v=TPE("age.txt") ;
printf("le taux d'electeur vote est :%f",v);
float k=agemoyen("age.txt");
printf("l'age moyen est:%f",k);
return 0 ;
}
