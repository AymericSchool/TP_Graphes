#include <stdio.h>
#include <stdlib.h>

#include "sources/graphe_matrice.c"
#include "sources/graphe_liste.c"
#include "sources/tp2.c"
#include "sources/tp3.c"

#define SIZE 4

int main(int argc, char** argv) {
    LISTE g;
    reservation_en_memoireL(6, &g);
    ajouter_arete(&g, 5, 0);
    ajouter_arete(&g, 4, 0);
    ajouter_arete(&g, 1, 0);
    ajouter_arete(&g, 2, 0);
    ajouter_arete(&g, 1, 5);
    ajouter_arete(&g, 2, 5);
    ajouter_arete(&g, 1, 3);
    int m = 5;
    

    // Nouveau graphe
    // reservation_en_memoire(SIZE, &m);
    // Ajouts d'arcs
    // ajouter_arc(&m, 1, 2);
    // ajouter_arc(&m, 2, 3);
    // Affichage de la matrice
    // print_matrice(&m);
    // Lancement de la fonction permettant de calculer tous les degres
    // calcul_tous_degres(&m, &dplus, &dmoins);
    // Affichage des degres
    // for (int i = 0; i < SIZE; i++) {
    //     printf("%d, %d\n", dplus[i], dmoins[i]);
    // }
    // Copie dans m2
    // copie_graphe(&m, &m2);
    // print_matrice(&m2);
    // ecrire_graphe(&m, "test.txt");
    // lire_graphe("test.txt", &m);
    // print_matrice(&m);

    // TP3 - EX1 : PARCOURS EN PROFONDEUR
    // printf("--Parcours en profondeur--\n");
    // parcours_en_profondeur(g, m);

    // TP3 - EX2 : PARCOURS EN LARGEUR
    // printf("--Parcours en largeur--\n");
    // parcours_en_largeur(g, m);
    // printf("--Affichage brut--\n");
    // affichage(&g);

    // TP2 - EX1 : BOUTEILLES
    // bouteilles* tabB;
    // int n;
    // n=0;
    // tabB= (bouteilles *) malloc(sizeof(bouteilles));
    // diviser_quantite(14,0,0,&n,tabB);

    // TP2 - EX2 : COURS
    // coursMatrice("ex2-matrice.txt");
    // coursListe("ex2-liste.txt");

    // TP2 - EX2 : WELSH WOWELL
    // welsh_wowell_liste(&g);



    return EXIT_SUCCESS;
    
}