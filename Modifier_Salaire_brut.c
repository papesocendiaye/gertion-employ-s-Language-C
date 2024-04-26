#include "fonctions.h"

void Modifier_Salaire_brut(int Nombre_Employer,Employer*liste_Employer){

	printf("Veuillez saisir le matricule de l'employe dont vous souhaitez modifier son salaire brut\n");
	int matr;
	float nouv_Sal;
	scanf("%d",&matr);
	for (int i = 0; i < Nombre_Employer; i++)
	{
		if (matr == liste_Employer[i].Matricule)
		{
			printf("Veuillez saisir le nouveau salaire brut\n");
			scanf("%f",&nouv_Sal);
			liste_Employer[i].Salaire_Brut = nouv_Sal;
			printf("Changement reussi\n");
			Calcul_Retenus_Primes(Nombre_Employer, liste_Employer);
			printf("---------------------------------------\n");
			printf("\t Matricule: %d\n",liste_Employer[i].Matricule);
			printf("\t Nom: %s \n",liste_Employer[i].Nom );
			printf("\t Prenom: %s\n",liste_Employer[i].Prenom );
			printf("\t Fonction: %s\n",liste_Employer[i].Fonction);
			printf("\t Nombre d'enfants: %d\n",liste_Employer[i].Nombre_Enfants);
			printf("\t Salaire brut: %.2f\n",liste_Employer[i].Salaire_Brut);
			printf("\t Salaire_net: %.2f\n",liste_Employer[i].Salaire_Net);
			printf("---------------------------------------\n");
			break;
		}
	}

	return ;
}