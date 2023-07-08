#ifndef SAISIENOTES_H_INCLUDED
#define SAISIENOTES_H_INCLUDED
#include "structure.h"

void saisieNotes(listeEtudiant* etudiants){
    int i;
    printf(" Saisi des Notes : \n");
    listeEtudiant* tempo;
    //listeMatiere* tmp;
    float moyenne;

    tempo=etudiants;
    //tmp=ptlisteMatiere;
    while(tempo != NULL){
        printf("%s %s \n", tempo->etudiant.nom,tempo->etudiant.prenom);
        for(i=0;i<10;i++){
            printf(" Matiere %d: %s",i+1,tempo->etudiant.matiere[i].libelle);
            do{
                printf(" \n Premiere Note: \t");
                scanf("%f",&tempo->etudiant.matiere[i].note1);
            }while(tempo->etudiant.matiere[i].note1<0 || tempo->etudiant.matiere[i].note1 >20);

            do{
                printf(" \n Deuxieme Note: \t");
                scanf("%f",&tempo->etudiant.matiere[i].note2);
            }while(tempo->etudiant.matiere[i].note2 <0 || tempo->etudiant.matiere[i].note2>20);


            moyenne=(tempo->etudiant.matiere[i].note1+tempo->etudiant.matiere[i].note2)/2;
            tempo->etudiant.matiere[i].moyenne=moyenne;
        }
    tempo=tempo->suivant;
    }
}

#endif // SAISIENOTES_H_INCLUDED
