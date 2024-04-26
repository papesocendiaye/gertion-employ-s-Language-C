#include "fonctions.h"


void Rechercher_Employer(int Nombre_Employer,Employer*liste_Employer){
	int recherche;
				printf("Veuillez saisir le matricule de l'employe recherche\n");
				scanf("%d",&recherche);
				for (int i = 0; i < Nombre_Employer; i++)
				{
					if (recherche == liste_Employer[i].Matricule)
					{
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
					else
					{
						printf("Ce matricule ne correspond a aucun employe\n");
					}
				}

	return;
}