#include "fonctions.h"



void Masse_salariale_ingenieur(int Nombre_Employer,Employer* Liste_Employer){
    int Masse_Salariale_Ing = 0;

    for(int i = 0; i <Nombre_Employer; i++){

        if((strcmp(Liste_Employer[i].Fonction,"INGENIEUR")==0) && (Liste_Employer[i].Salaire_Net>700000)){
            Masse_Salariale_Ing += Liste_Employer[i].Salaire_Net;     
        }
    }
    printf("la masse salariale des ingénieurs qui gagnent plus de 700 000 FcFA est : %d\n", Masse_Salariale_Ing);
    
     return;       
}