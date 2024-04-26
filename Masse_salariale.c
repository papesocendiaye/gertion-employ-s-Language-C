#include "fonctions.h"




void Masse_salariale(int Nombre_Employer,Employer* Liste_Employer){

	int Masse_Salariale = 0;

    for(int i = 0; i <Nombre_Employer; i++){

    	Masse_Salariale += Liste_Employer[i].Salaire_Net;
        
    }
    printf("la masse salariale des employees de DSTI1D est : %d\n", Masse_Salariale);
	return;
}