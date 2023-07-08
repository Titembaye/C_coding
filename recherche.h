#ifndef RECHERCHE_H_INCLUDED
#define RECHERCHE_H_INCLUDED
#include "structure.h"

listeEtudiant* recherche(listeEtudiant* etudiants, int mat){
    listeEtudiant* tmp;
    tmp=etudiants;
    while(tmp != NULL ){
            if(tmp->etudiant.matricule==mat){
                return tmp;
            }
            tmp=tmp->suivant;
    }
    return NULL;

}

#endif // RECHERCHE_H_INCLUDED
