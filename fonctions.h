#ifndef FONCTIONS_H
#define FONCTIONS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#define MAX 100

typedef struct Employer {
    int Matricule;
    char Nom[30];
    char Prenom[40];
    char Fonction[30];
    int Nombre_Enfants;
    float Salaire_Brut;
    float Salaire_Net;
    float Primes;
    float Retenus;
}Employer;

 

 

int controle_saisie_chaine(char *c);
void vide_buffer();
int saisir_int(); 
float saisir_float();
void Calcul_Retenus_Primes (int Nombre_Employer, Employer* Liste_Employer);
int Ajouter_Employer (int Nombre_Employer,Employer* Liste_Employer);
void Rechercher_Employer(int Nombre_Employer,Employer* liste_Employer);
void Modifier_Salaire_brut(int Nombre_Employer,Employer* liste_Employer);
void Masse_salariale(int Nombre_Employer,Employer* Liste_Employer);
void Masse_salariale_ingenieur(int Nombre_Employer,Employer* Liste_Employer);
void Afficher_liste(int Nombre_Employer, Employer* Liste_Employer);
void Quitter();

#endif


                