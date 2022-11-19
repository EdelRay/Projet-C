#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "AjoutUtilisateur.h"
//remplir le tableau tab a partir du fichier UtilisateursAjoute.txt
int tableaau_Utilisateurs_Ajoute (Ajouteutilisateur tab[])
{ int n=0 ; 
FILE* f=fopen("UtilisateursAjoute.txt","r");
if (f!=NULL)
{while(fscanf(f,fscanf(f, "%d %s %s %d %d %d %s %s %s %s %s %s %s %s", &tab[n].CIN, tab[n].nom, tab[n].prenom, &tab[n].d.j, &tab[n].d.m, &tab[n].d.a, tab[n].gendre, tab[n].NumBV, tab[n].login, tab[n].password, tab[n].role, tab[n].gouvernorat, tab[n].etablissement) != EOF)
{n++ ; }
fclose(f);
}
return n ;
}























 

void on_Ajouter_clicked (GtkWidget *objet_graphique,gpointer user_data)
{

GtkWidget *Jour; //spinbuttun pour Le choix du jour
GtkWidget *Mois; //spinbuttun pour Le choix du mois
GtkWidget *Annee; //spinbuttun pour Le choix de L'année
GtkWidget *ComboboxE; //comobox pour Le choix de l'etablissement
GtkWidget *ComboboxBV; //comobox pour Le choix du Numero BV





// associer Les objets avec des variables
Jour=lookup_widget(objet_graphique, "SBJoursAjoutUtilRay");
Mois=lookup_widget(objet_graphique, "SBMoisAjoutUtilRay");
Annee=lookup_widget(objet_graphique, "SBAnneeAjoutUtilRay");
ComboboxE=lookup_widget(objet_graphique, "CMBEtablissementAjoutUtilRay") ;
ComboboxBV=lookup_widget(objet_graphique, "CMBNumBVAjoutUtilRay") ;


/* récupérer Les valeurs des spin buttons en utilisant la fonction gtk_spin_button_get_value_as_int qui retourne L'entier choisi par L'utilisateur */

d.SBJoursAjoutUtilRay=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON (Jour));
d.SBMoisAjoutUtilRay=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON (Mois));
d.SBAnneeAjoutUtilRay=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON (Annee));

/* récupérer Les valeurs des combobox en utilisant la fonction gtk_combo_box_get_active_text qui retourne la chaine de caractére choisie par L'utilisateur */

if (strcmp("“9h==>12h15",gtk_combo_box_get_active_text(GTK_COMBO_BOX(Combobox1) ) )==@)
hr_resr=1;

else

hr_resr=2;

strcpy(Bloc,gtk_combo_box_get_active_text(GTK_COMBO_BOX(Combobox2)));
bloc=Bloc[@];

n=tableau_salle_disponible(nom_salle, bloc, dt_resr, hr_resr);

/* Remplir dans Le combobox3 (dynamique) Les noms des salles disponibles en utilisant La fonction gtk_combo_box_append_text */
for (i=@;i<nji++)

{

gtk_combo_box_append_text (GTK_COMBO_BOX (Combobox3), (nom_salle[i]));

}
}





void on_confirmer_clicked (GtkWidget *objet_graphique,gpointer user_data)
{

GtkWidget *ComboboxE;
GtkWidget *Jour;
GtkWidget *Mois;
GtkWidget *Annee;
GtkWidget *ComboboxBV;
GtkWidget *sortie;
char Etablissement[20];
Ajoututilisateur Util;

Jour=lookup_widget(objet_graphique, "SBJoursAjoutUtilRay");
Mois=lookup_widget(objet_graphique, "SBMoisAjoutUtilRay");
Annee=lookup_widget(objet_graphique, "SBAnneeAjoutUtilRay");
ComboboxE=lookup_widget(objet_graphique, "CMBEtablissementAjoutUtilRay") ;
ComboboxBV=lookup_widget(objet_graphique, "CMBNumBVAjoutUtilRay") ;
sortie=lookup_widget(objet_graphique, "BAjouterAjoutUtilRay");

Util.d.SBJoursAjoutUtilRay=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON (Jour));
Util.d.SBMoisAjoutUtilRay=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON (Mois));
Util.d.SBAnneeAjoutUtilRay=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON (Annee));


if (strcmp("Ecole 20 Mars",gtk_combo_box_get_active_text(GTK_COMBO_BOX(ComboboxE) ) )==@)
Util-hr_resr=1;

else

Util-hr_resr=2;
strcpy(Bloc,gtk_combo_box_get_active_text(GTK_COMBO_BOX(ComboboxBV) ) ) 5
s.bloc=Bloc[@];
strcpy(s.num,gtk_combo_box_get_active_text(GTK_COMBO_BOX(Combobox3) ) ) ;
reserver_salle( s);

gtk_label_set_text(GTK_LABEL(sortie), "Reservation reussite.");

}









