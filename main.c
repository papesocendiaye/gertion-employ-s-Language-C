#include "fonctions.h"

int main(){
	
	printf("\t\t\t\tBIENVENUE EN DSTID\n");
	printf("\t\t\t\t~.~.~.~.~.~.~.~.~.~\n");
	int Nombre_Employer;
	int compt;
	do{
		printf("combien d' Employer y'a t'il dans l'entreprise\n");
		Nombre_Employer = saisir_int(); 
	}while(Nombre_Employer<=0 || Nombre_Employer>MAX );

	Employer Liste_Employer[MAX];
	for (int i = 0; i < Nombre_Employer; i++){
		
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
			printf("entrer le nombre d'enfants de l'employer %d\n",i+1);
			Liste_Employer[i].Nombre_Enfants = saisir_int();
		}while(Liste_Employer[i].Nombre_Enfants<0);

		do{
			printf("entrer le salaire brut de l'employer %d\n",i+1);
			Liste_Employer[i].Salaire_Brut = saisir_float();
		}while(Liste_Employer[i].Salaire_Brut<0);
	}
	Calcul_Retenus_Primes(Nombre_Employer, Liste_Employer);
	
	int choise = 0;
	int exit = 0;
	do{ 
		printf("\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~MENU~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
		printf("\t\t\t*                                   ____                                            *\n");
		printf("\t\t\t*		                   	                                                           \n");
		printf("\t\t\t* [1] ajouter employés                                                              *\n");
		printf("\t\t\t* [2] Modifier du salaire brut d’un employé                                         *\n");        
		printf("\t\t\t* [3] Rechercher un employé suivant son matricule et afficher ses informations      *\n");
		printf("\t\t\t* [4] Modifier du salaire brut d’un employé                                         *\n");
		printf("\t\t\t* [5] Afficher la masse salariale des ingénieurs qui gagnent plus de 700 000 FcFA   *\n");
		printf("\t\t\t* [6] afficher la liste des employés                                                *\n");
		printf("\t\t\t* [7] quitter                                                                       *\n");       
		printf("\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
		printf("choisisez une option \n");
		choise = saisir_int();
		system("clear");
		switch (choise) {
			case 1 :Nombre_Employer = Ajouter_Employer(Nombre_Employer, Liste_Employer);
					break;
			case 2 :Modifier_Salaire_brut(Nombre_Employer, Liste_Employer);
					vide_buffer();
					break;
			case 3 :Rechercher_Employer(Nombre_Employer, Liste_Employer);
					vide_buffer();
					break;		
			case 4 :Masse_salariale(Nombre_Employer, Liste_Employer);
					break;
			case 5 :Masse_salariale_ingenieur(Nombre_Employer, Liste_Employer);
					break;
			case 6 :system("clear");
					Afficher_liste(Nombre_Employer, Liste_Employer);
					vide_buffer();
					break;
			case 7:Quitter();
			       exit = 1;
	                break;
	        default :printf("Option non valide. Veuillez choisir une option valide.\n");        
	        }   
    }while (exit ==0); 

return 0;
}


