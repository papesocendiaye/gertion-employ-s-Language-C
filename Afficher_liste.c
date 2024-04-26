#include "fonctions.h"



void Afficher_liste (int Nombre_Employer, Employer* Liste_Employer){

printf("Liste Employés Entreprise DSTID\n");
printf("––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––\n ");
printf("|Prénom\t\t|Nom\t\t|Fonction\t\t|Salaire Brut\t\t|Prime\t\t|Nombre d'enfant\t\t|Retenue\t\t|Salaire Net|\n");
printf("––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––\n ");
for(int i=0;i<Nombre_Employer;i++)
{
{
{
printf("|%-13s\t\t",Liste_Employer[i].Prenom);printf("|%-13s\t\t",Liste_Employer[i].Nom);printf("%-13s\t\t",Liste_Employer[i].Fonction) ;printf("%.2f\t\t",Liste_Employer[i].Salaire_Brut);printf("%.2f\t\t",Liste_Employer[i].Primes);printf("%.9d\t\t\t",Liste_Employer[i].Nombre_Enfants);printf("%.2f\t\t",Liste_Employer[i].Retenus);printf("%.2f|\n",Liste_Employer[i].Salaire_Net);
printf("––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––\n ");
}
}
}

	return;
}