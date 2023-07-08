#ifndef MOYENNE_H_INCLUDED
#define MOYENNE_H_INCLUDED
#include "structure.h"

void moyenneEtudiant(listeEtudiant* etudiants){
    listeEtudiant* tmp;
    float som;
    int i;
    tmp=etudiants;
    while(tmp != NULL){
        som=0;
        for(i=0;i<10;i++){
            som=som+tmp->etudiant.matiere[i].moyenne;
        }
        tmp->etudiant.moy=som/10;
        tmp=tmp->suivant;
    }
}

#endif // MOYENNE_H_INCLUDED
