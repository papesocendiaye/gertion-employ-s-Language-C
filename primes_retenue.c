#include "fonctions.h"


void Calcul_Retenus_Primes (int Nombre_Employer, Employer* Liste_Employer) {

    for (int i = 0; i < Nombre_Employer; i++){
        if ((Liste_Employer[i].Nombre_Enfants>=0) || (Liste_Employer[i].Nombre_Enfants<=2))  
        {
            Liste_Employer[i].Retenus = Liste_Employer[i].Salaire_Brut*0.05;
        }
        else if((Liste_Employer[i].Nombre_Enfants>=3) || (Liste_Employer[i].Nombre_Enfants<=4))
        {
             Liste_Employer[i].Retenus = Liste_Employer[i].Salaire_Brut*0.03;
        }
        else 
        {
             Liste_Employer[i].Retenus = Liste_Employer[i].Salaire_Brut*0.015;
        }
   
        if (strcmp(Liste_Employer[i].Fonction,"COMPTABLE")==0)
        {
            Liste_Employer[i].Primes=Liste_Employer[i].Salaire_Brut*0.1;
        }
        else if (strcmp(Liste_Employer[i].Fonction,"TECHNICIEN")==0)
        {
            Liste_Employer[i].Primes=Liste_Employer[i].Salaire_Brut*0.1;
        }
        else if (strcmp(Liste_Employer[i].Fonction,"COMMERCIALE")==0)       {
            Liste_Employer[i].Primes=Liste_Employer[i].Salaire_Brut*0.07;
        }
        else if (strcmp(Liste_Employer->Fonction,"SECRETAIRE")==0)
            Liste_Employer[i].Primes=Liste_Employer[i].Salaire_Brut*0.05; 
        else
        {
            Liste_Employer[i].Primes=Liste_Employer[i].Salaire_Brut*0.02;
        } 

        Liste_Employer[i].Salaire_Net = Liste_Employer[i].Salaire_Brut + Liste_Employer[i].Primes - Liste_Employer[i].Retenus;
    }
}