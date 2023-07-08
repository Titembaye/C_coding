#ifndef CREERETUDIANT_H_INCLUDED
#define CREERETUDIANT_H_INCLUDED
#include "structure.h"

//fonction de creation d'un etudiant
Etudiant creerEtudiant(){
    Etudiant etudiant;

    printf("Matricule : \t");
    scanf("%d",&etudiant.matricule);
    printf("\n");
    printf("Nom : \t");
    scanf("%s",etudiant.nom);
    printf("\n");
    printf("Prenom : \t");
    scanf("%s",etudiant.prenom );
    printf("\n");
    printf("Age : \t");
    scanf("%d",&etudiant.age);
    printf("\n");
    printf("Sexe : \t");
    scanf("%d",&etudiant.sexe);

    return etudiant;
}

#endif // CREERETUDIANT_H_INCLUDED
