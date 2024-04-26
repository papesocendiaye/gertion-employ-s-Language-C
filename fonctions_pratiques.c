void Modifie_Contact(int numeroId) {
    int i;
    for (i = 0; i < nombre_contacts; i++) {
        if (repertoire[i].numeroId == numeroId) {
            printf("Nouveau nom : ");
            scanf("%s", repertoire[i].nom);
            printf("Nouveau prénom : ");
            scanf("%s", repertoire[i].prenom);
            printf("Nouvel email : ");
            scanf("%s", repertoire[i].email);
            printf("Nouveau numéro de téléphone : ");
            scanf("%s", repertoire[i].numero_telephone);
            printf("Contact modifié avec succès.\n");
            return;
        }
    }
    printf("Contact non trouvé.\n");
}

void Affiche_Repertoire() {
    int i;
    for (i = 0; i < nombre_contacts; i++) {
        printf("Contact %d\n", i + 1);
        printf("Numero ID: %d\n", repertoire[i].numeroId);
        printf("Nom: %s\n", repertoire[i].nom);
        printf("Prénom: %s\n", repertoire[i].prenom);
        printf("Email: %s\n", repertoire[i].email);
        printf("Numéro de téléphone: %s\n", repertoire[i].numero_telephone);
        printf("--------------------\n");
    }
}

void New_Contact() {
    printf("Numero ID : ");
    scanf("%d", &repertoire[nombre_contacts].numeroId);
    printf("Nom : ");
    scanf("%s", repertoire[nombre_contacts].nom);
    printf("Prénom : ");
    scanf("%s", repertoire[nombre_contacts].prenom);
    printf("Email : ");
    scanf("%s", repertoire[nombre_contacts].email);
    printf("Numéro de téléphone : ");
    scanf("%s", repertoire[nombre_contacts].numero_telephone);
    nombre_contacts++;
    printf("Nouveau contact ajouté avec succès.\n");
}

char* Search_Contact(char* nom, char* prenom) {
    int i;
    for (i = 0; i < nombre_contacts; i++) {
        if (strcmp(repertoire[i].nom, nom) == 0 && strcmp(repertoire[i].prenom, prenom) == 0) {
            return repertoire[i].numero_telephone;
        }
    }
    return "Contact non trouvé.";
}

void Supprime_Contact(int numeroId) {
    int i;
    for (i = 0; i < nombre_contacts; i++)#include "fonctions.h"

int controle_saisie_chaine(char *c) {
    int i = 0;
    while (c[i]) {
        if (!isalpha(c[i]) && c[i] != ' ' )
            return 0; 
        i++;
    }
    return 1; 
}

void vide_buffer(){
	char c;
    while ((c = getchar()) != '\n' && c != EOF);
    return;
}

int saisir_int () {
    char c;
    char str[10];
    int i = 0;

    while ((c = getchar()) != '\n' && c != EOF) {
    	if(!isdigit(c)) {
    		vide_buffer();
    		return -1;
    	}
    	str[i++] = c;
    }
    return atoi(str);
}

float saisir_float() {
    char c;
    char str[10];
    int i = 0;

    while ((c = getchar()) != '\n' && c != EOF) {
    	if(!(isdigit(c) || c == '.')) {
    		vide_buffer();
    		return -1;
    	}
    	str[i++] = c;
    }
    return (float)atof(str);
}

