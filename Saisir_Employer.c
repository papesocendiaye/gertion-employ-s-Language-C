#include "fonctions.h"

int Ajouter_Employer (int Nombre_Employer,Employer* Liste_Employer){
	
	int Nombre_Ajouter;
	do{
		printf("combien d'Employer voulez vous ajouter \n");
		Nombre_Ajouter = saisir_int(); 
	}while(Nombre_Ajouter<0 || Nombre_Ajouter>MAX );

	int compt = Nombre_Employer+ Nombre_Ajouter;

	for (int i = Nombre_Employer; i < compt; i++){
		Liste_Employer[i].Matricule = i+1;
		printf("employe %d :\n",i+1 );
		printf("_____________\n");
		printf("\n");
		do{
			printf("entrer le nom de famille  de l'employer %d\n",i+1);
			scanf("%s",Liste_Employer[i].Nom);
		}while(!controle_saisie_chaine(Liste_Employer[i].Nom));
		vide_buffer();
		do{
			printf("entrer le prenom de l'employer %d\n",i+1);
			scanf("%[^\n]",Liste_Employer[i].Prenom);
		}while(!controle_saisie_chaine(Liste_Employer[i].Prenom));
		vide_buffer();	
		printf("\t\t\t~~~~~~~~FONCTION~~~~~~~~~\n");
		printf("\t\t\t*       ________        *\n");
		printf("\t\t\t*		                   \n");
		printf("\t\t\t* [1]   COMPTABLE       *\n");
		printf("\t\t\t* [2]   COMMERCIALE     *\n");        
		printf("\t\t\t* [3]   GARDIEN         *\n");
		printf("\t\t\t* [4]   INGENIEUR       *\n");
		printf("\t\t\t* [5]   TECHNICIEN      *\n");
		printf("\t\t\t* [6]   SECRETAIRE      *\n");
		printf("\t\t\t* [7]   AUTRE           *\n");       
		printf("\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~\n");
		printf("quel est votre fonction\n");
		int choix=saisir_int();
		switch (choix) {
		case 1 :char temp1[] = "COMPTABLE";
				strcpy(Liste_Employer[i].Fonction, temp1);
				break;
		case 2 :char temp2[] = "COMMERCIALE";
				strcpy(Liste_Employer[i].Fonction, temp2);
				break;
		case 3 :char temp3[] = "GARDIEN";
				strcpy(Liste_Employer[i].Fonction, temp3);
				break;
		case 4 :char temp4[] = "INGENIEUR";
				strcpy(Liste_Employer[i].Fonction, temp4);
				break;
		case 5 :char temp5[] = "TECHNICIEN";
				strcpy(Liste_Employer[i].Fonction, temp5);
				break;
		case 6 :char temp6[] = "SECRETAIRE";
				strcpy(Liste_Employer[i].Fonction, temp6);
				break;
		case 7 :char temp7[] = "AUTRE";
				strcpy(Liste_Employer[i].Fonction, temp7);
				break;
		} 
		
		do{
			printf("entrer le salaire brut de l'employer %d\n",i+1);
			Liste_Employer[i].Salaire_Brut = saisir_float();
		}while(Liste_Employer[i].Salaire_Brut<0);

		do{
			printf("entrer le nombre d'enfants de l'employer %d\n",i+1);
			Liste_Employer[i].Nombre_Enfants = saisir_int();
		}while(Liste_Employer[i].Nombre_Enfants<0);
	} 
	Calcul_Retenus_Primes(compt, Liste_Employer);
	
	return compt;
	
}