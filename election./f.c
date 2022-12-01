#include<stdio.h>
#include<string.h>
#include"f.h"
float TPE(char *filename)
{
  user u ;
  float nb = 0 ;
  float NBV = 0;
  float taux = 0 ;
FILE* f=fopen(filename,"r") ;
if (f!=NULL)
	while (fscanf(f,"%d %s %s %d %d %d %s %d %s %s %d %s %s %s\n", &u.CIN, u.nom, u.prenom, &u.date.j, &u.date.m, &u.date.a, u.gendre,&u.NumBV , u.lcx.login, u.lcx.password, &u.vote, u.Role, u.gouvernorat, u.etablissement) != EOF)
	{ 
	printf("BOUCLE");
	if (strcmp(u.Role,"electeur")==0 )
			nb++ ;
 
 		if (u.vote!=-1)
 			NBV++ ;

	}
taux=NBV/nb ;
return taux ;
}


float agemoyen(char *fileName){
    FILE *file = fopen(fileName, "r");
    
    
    user u;
float r ;
    int sum = 0;
    int count = 0;
    if (file!=NULL ){
    while(fscanf(file,"%d %s %s %d %d %d %s %d %s %s %d %s %s %s\n", &u.CIN, u.nom, u.prenom, &u.date.j, &u.date.m, &u.date.a, u.gendre,&u.NumBV , u.lcx.login, u.lcx.password, &u.vote, u.Role, u.gouvernorat, u.etablissement) != EOF)
{if (strcmp(u.Role,"electeur")==0)
        sum += (2022 - u.date.a);
        count++;
    }
    r=sum/count;
}
else  {
        printf("Error opening file!");
        return 0;
}
return r ;
}


int ajouter(char * filename, user u)
{
    FILE * file=fopen(filename, "a");
    if(file!=NULL)
    {
 fprintf(file,"%d %s %s %d %d %d %s %d %s %s %d %s %s %s\n", u.CIN, u.nom, u.prenom, u.date.j, u.date.m, u.date.a, u.gendre, u.NumBV, u.lcx.login, u.lcx.password, u.vote, u.Role, u.gouvernorat, u.etablissement);
        fclose(file);
        return 1;
    }
 else return 0;
}
