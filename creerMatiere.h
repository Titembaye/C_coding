#ifndef CREERMATIERE_H_INCLUDED
#define CREERMATIERE_H_INCLUDED
#include "structure.h"

//fonction de creation d'une matiere
Matiere creerMatiere(){
    Matiere matiere;
    printf("Codification :");
    scanf("%s",matiere.code);
    printf("Libelle :");
    scanf("%s",matiere.libelle);
    printf("Responsable :");
    scanf("%s",matiere.enseignantRespo );

    return matiere;
}

#endif // CREERMATIERE_H_INCLUDED
