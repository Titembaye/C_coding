#ifndef NOTE_H_INCLUDED
#define NOTE_H_INCLUDED
#include "note.h"


void creerNoteEtudiant(listeEtudiant* etudiants,Matiere* tab){
    int i;
    printf(" Saisi des Notes : \n");
    listeEtudiant* tempo;
    //listeMatiere* tmp;
    float moyenne;

    tempo=etudiants;
    //tmp=ptlisteMatiere;
    while(tempo != NULL){
        printf("%s %s \n", tempo->etudiant.nom,tempo->etudiant.prenom);
        for(i=0;i<2;i++){
            printf(" Matiere %d: %s",i+1,tempo->etudiant.matiere[i].libelle);
            printf(" \n Premiere Note: \t");
            scanf("%f",&tempo->etudiant.matiere[i].note1);
            tab[i].note1=tempo->etudiant.matiere[i].note1;
            printf(" \n Deuxieme Note: \t");
            scanf("%f",&tempo->etudiant.matiere[i].note2);
            tab[i].note2=tempo->etudiant.matiere[i].note2;
            moyenne=(tempo->etudiant.matiere[i].note1+tempo->etudiant.matiere[i].note2)/2;
            tempo->etudiant.matiere[i].moyenne=moyenne;
            tab[i].moyenne=moyenne;
        }
    tempo=tempo->suivant;
    }
}


#endif // NOTE_H_INCLUDED
