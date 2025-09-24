#ifndef FONCTION_H
#define FONCTION_H

#include <stdio.h>
#include <stdlib.h>

// Prototypes

// 1. Somme de matrices
void sommeMatrices(int n, int m, int A[n][m], int B[n][m], int C[n][m]);

// 2. Produit de matrices
void produitMatrices(int n, int m, int p, int A[n][m], int B[m][p], int C[n][p]);

// 3. Recherche séquentielle
int rechercheSequentielle(int tab[], int taille, int val);

// 4. Produit a × b par additions successives
int produitAdditions(int a, int b);

// 5. Tester si un tableau est trié
int estTrie(int tab[], int taille);

// 6. Médiane d’un tableau
double mediane(int tab[], int taille);

// 7. Inverser un tableau
void inverserTableau(int tab[], int taille);

// 8. Produit vectoriel (dimension 3 uniquement)
void produitVectoriel(int u[3], int v[3], int resultat[3]);

// 9. Produit vecteur × matrice
void produitVecteurMatrice(int n, int m, int vecteur[n], int matrice[n][m], int resultat[m]);

#endif