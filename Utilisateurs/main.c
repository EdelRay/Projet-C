#include <stdio.h>
#include <string.h>
#include "Utilisateurs.h"

int main()
{
    Utilisateur U1 = {12857883, "Ray", "Lay", 17, 05, 2000, "femme", "12365", 123654, 147852 , 1 ,  "Electeur", "Sousse", "Ecole 20 Mars"}, U2 = {15412458, "Wij", "Lay", 02, 07, 2002, "femme", "78965", 789654, 369852 , 2, "Observateur", "Tunis", "Esprit "}, U3;
    int x = ajouter1("Gestion-des-utilisateurs.txt", U1);

    if (x == 1)
        printf("\nAjout de l'utilisateur avec succés");
    else
        printf("\n Echec ajout");

    x = modifier1("Gestion-des-utilisateurs.txt", 12857883, U2);

    if (x == 1)
        printf("\nModification de l'utilisateur avec succés");
    else
        printf("\nechec Modification");
    x = supprimer1("Gestion-des-utilisateurs.txt", 12857883);
    if (x == 1)
        printf("\nSuppression de l'utilisateur avec succés");
    else
        printf("\nechec Suppression");
    U3 = chercher1("Gestion-des-utilisateurs.txt", 12857883);
    if (U3.CIN == -1)
        printf("Introuvable");
    return 0;
}
