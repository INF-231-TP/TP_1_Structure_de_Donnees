#include "fonction.h"

// 1. Somme de matrices
void sommeMatrices(int n, int m, int A[n][m], int B[n][m], int C[n][m]) {
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            C[i][j] = A[i][j] + B[i][j];
}

// 2. Produit de matrices
void produitMatrices(int n, int m, int p, int A[n][m], int B[m][p], int C[n][p]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            C[i][j] = 0;
            for (int k = 0; k < m; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

// 3. Recherche séquentielle
int rechercheSequentielle(int tab[], int taille, int val) {
    for (int i = 0; i < taille; i++) {
        if (tab[i] == val) return i;
    }
    return -1;
}

// 4. Produit a × b par additions successives
int produitAdditions(int a, int b) {
    int produit = 0;
    for (int i = 0; i < b; i++) {
        produit += a;
    }
    return produit;
}

// 5. Tester si un tableau est trié
int estTrie(int tab[], int taille) {
    for (int i = 0; i < taille - 1; i++) {
        if (tab[i] > tab[i + 1]) return 0;
    }
    return 1;
}

// 6. Médiane d’un tableau
double mediane(int tab[], int taille) {
    // tri simple (sélection)
    for (int i = 0; i < taille - 1; i++) {
        for (int j = i + 1; j < taille; j++) {
            if (tab[i] > tab[j]) {
                int temp = tab[i];
                tab[i] = tab[j];
                tab[j] = temp;
            }
        }
    }
    if (taille % 2 == 1)
        return tab[taille / 2];
    else
        return (tab[taille / 2 - 1] + tab[taille / 2]) / 2.0;
}

// 7. Inverser un tableau
void inverserTableau(int tab[], int taille) {
    for (int i = 0; i < taille / 2; i++) {
        int temp = tab[i];
        tab[i] = tab[taille - 1 - i];
        tab[taille - 1 - i] = temp;
    }
}

// 8. Produit vectoriel
void produitVectoriel(int u[3], int v[3], int resultat[3]) {
    resultat[0] = u[1] * v[2] - u[2] * v[1];
    resultat[1] = u[2] * v[0] - u[0] * v[2];
    resultat[2] = u[0] * v[1] - u[1] * v[0];
}

// 9. Produit vecteur × matrice
void produitVecteurMatrice(int n, int m, int vecteur[n], int matrice[n][m], int resultat[m]) {
    for (int j = 0; j < m; j++) {
        resultat[j] = 0;
        for (int i = 0; i < n; i++) {
            resultat[j] += vecteur[i] * matrice[i][j];
        }
    }
}