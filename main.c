#include <stdio.h>
#include <stdlib.h>
#include "creerEtudiant.h"
#include "structEtudiant.h"
#include "insertion.h"
#include "affichage.h"
#include "creerMatiere.h"
#include "saisieNotes.h"
#include "moyenne.h"
#include "recherche.h"

int main()
{
    int k,n,i,mat;
    listeEtudiant* etudiants=NULL, *tmp, *buffer;
    Etudiant etudiant1;
    Matiere* tab;
    printf("**********************Gestion de notes des étudiants**************************");
    printf("\n");
    printf("Donner l'effectif de la salle \n");
    scanf("%d",&n);
    printf("--------------------------------------------------------------------------- \n");
    printf("*************Veuillez saisir les informations de chaque etudiant************* \n");
    for(k=0;k<n;k++){
        printf("Etudiant %d\n",k+1);
        etudiant1=creerEtudiant();
        etudiants=ajouterEtudiant(etudiants, etudiant1);
    }
    printf("--------------------------------------------------------------------------- \n");
    printf("***************Vueillez saisir une liste de dix matieres********************\n");
    tab=(Matiere*)malloc(2*sizeof(Matiere));
    for(i=0;i<10;i++){
        printf("Matiere %d \n",i+1);
        tab[i]=creerMatiere();
    }
    tmp=etudiants;
    while(tmp != NULL){
        for(i=0;i<10;i++){
            tmp->etudiant.matiere[i]=tab[i];
        }
        tmp=tmp->suivant;
    }
    printf("--------------------------------------------------------------------------- \n");
    printf("***************Entrez les notes de chaque etudiant par matiere**************\n");
    printf(" NOTE: LES MOYENNES PAR MATIERE SONT DIRECTEMENT CALCULEES\n");
    saisieNotes(etudiants);
    printf("--------------------------------------------------------------------------- \n");
    moyenneEtudiant(etudiants);
    printf("***************************Affichage des résultats**************************\n");
    affcherListeNotes(etudiants);
    printf("--------------------------------------------------------------------------- \n");
    printf("Donnez le matricule de l'etudiant que vous cherchez \n");
    scanf("%d",&mat);
    buffer=recherche(etudiants,mat);
    if(buffer != NULL){
        printf("Voici les informations correspondant à vos recherches \n");
        affchage(buffer);
    }
    else
        printf("Erreur de matricule ou Etudiant non enregistré \n");

    return 0;
}
