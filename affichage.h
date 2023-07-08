#ifndef AFFICHAGE_H_INCLUDED
#define AFFICHAGE_H_INCLUDED


void affchage(listeEtudiant* buffer){
            int i;

            printf("Matricule: \t");
            printf("%d",buffer->etudiant.matricule);
            printf("\n");
            printf("Nom:      \t");
            printf("%s",buffer->etudiant.nom);
            printf("\n");
            printf("Prenom:  \t");
            printf("%s",buffer->etudiant.prenom);
            printf("\n");
            printf("Age: \t");
            printf("%d",buffer->etudiant.age);
            printf("\n");
            printf("Sexe:      \t");
            printf("%d",buffer->etudiant.sexe);
            printf("\n");
            for(i=0;i<10;i++){
                printf("%s \n",buffer->etudiant.matiere [i].libelle);
                printf("Note1:  \t");
                printf("%f",buffer->etudiant.matiere[i].note1);
                printf("\n");
                printf("Note2:  \t");
                printf("%f",buffer->etudiant.matiere[i].note2);
                printf("\n");
                printf("Moyenne:  \t");
                printf("%f",buffer->etudiant.matiere[i].moyenne);
                printf("\n");
            }
            printf("Moyenne Generale:  \t");
            printf("%f",buffer->etudiant.moy);
            printf("\n");
    }

void affcherListeNotes(listeEtudiant* etudiants){
    listeEtudiant* tmp;
    tmp=etudiants;
    int i;
    printf("Affichage de la liste des etudiants \n");


    while(tmp != NULL){
            printf("--------------------------------------------------------------------------------\n");
            printf("Matricule: \t");
            printf("%d",tmp->etudiant.matricule);
            printf("\n\n");
            printf("Nom:\t");
            printf("%s",tmp->etudiant.nom);
            printf("\n\n");
            printf("Prenom:\t");
            printf("%s",tmp->etudiant.prenom);
            printf("\n\n");
            printf("Notes \n");
            for(i=0;i<10;i++){
                printf("%s \t",tmp->etudiant.matiere[i].libelle);
                printf("%f",tmp->etudiant.matiere[i].moyenne);
                printf("\n\n");
            }
            printf("Moyenne Générale \t");
            printf("%f",tmp->etudiant.moy);
            printf("\n");
            tmp=tmp->suivant;
    }
}

#endif // AFFICHAGE_H_INCLUDED
