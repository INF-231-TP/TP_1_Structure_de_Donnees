#include "fonction.h"

int main() {
    int choix;
    printf("\n====================================\n");
    printf("      BIENVENUE DANS NOTRE PROGRAMME\n");
    printf("====================================\n");

    do {
        printf("\n------ MENU ------\n");
        printf("1. Somme de matrices\n");
        printf("2. Produit de matrices\n");
        printf("3. Recherche séquentielle\n");
        printf("4. Produit a × b avec +1\n");
        printf("5. Tester si un tableau est trié\n");
        printf("6. Médiane d’un tableau\n");
        printf("7. Inverser un tableau\n");
        printf("8. Produit vectoriel (3D)\n");
        printf("9. Produit vecteur × matrice\n");
        printf("0. Quitter\n");
        printf("Votre choix : ");
        scanf("%d", &choix);

        switch (choix) {
            case 1: {
                int n,m;
                printf("Entrer dimensions (n m) : ");
                scanf("%d %d",&n,&m);
                int A[n][m],B[n][m],C[n][m];
                printf("Saisir la matrice A :\n");
                for(int i=0;i<n;i++) {
                    for(int j=0;j<m;j++) {
                        printf("A[%d][%d] = ",i+1,j+1);
                        scanf("%d",&A[i][j]);
                    }
                }
                printf("Saisir la matrice B :\n");
                for(int i=0;i<n;i++) {
                    for(int j=0;j<m;j++) {
                        printf("B[%d][%d] = ",i+1,j+1);
                        scanf("%d",&B[i][j]);
                    }
                }
                sommeMatrices(n,m,A,B,C);
                printf("Résultat somme :\n");
                for(int i=0;i<n;i++){ for(int j=0;j<m;j++) printf("%d ",C[i][j]); printf("\n"); }
                break;
            }
            case 2: {
                int n,m,p;
                printf("Entrer dimensions de A (n m) puis de B (m p) donc le nombre de colonne de B: ");
                scanf("%d %d %d",&n,&m,&p);
                int A[n][m],B[m][p],C[n][p];
                printf("Saisir la matrice A :\n");
                for(int i=0;i<n;i++) {
                    for(int j=0;j<m;j++) {
                        printf("A[%d][%d] = ",i+1,j+1);
                        scanf("%d",&A[i][j]);
                    }
                }
                printf("Saisir la matrice B :\n");
                for(int i=0;i<m;i++) {
                    for(int j=0;j<p;j++) {
                        printf("B[%d][%d] = ",i+1,j+1);
                        scanf("%d",&B[i][j]);
                    }
                }
                produitMatrices(n,m,p,A,B,C);
                printf("Résultat produit :\n");
                for(int i=0;i<n;i++){ for(int j=0;j<p;j++) printf("%d ",C[i][j]); printf("\n"); }
                break;
            }
            case 3: {
                int taille,val;
                printf("Taille du tableau : ");
                scanf("%d",&taille);
                int tab[taille];
                for(int i=0;i<taille;i++) {
                    printf("tab[%d] = ",i+1);
                    scanf("%d",&tab[i]);
                }
                printf("Valeur à rechercher : ");
                scanf("%d",&val);
                int pos = rechercheSequentielle(tab,taille,val);
                if(pos!=-1) printf("Trouvé à la position %d\n",pos+1);
                else printf("Non trouvé\n");
                break;
            }
            case 4: {
                int a,b;
                printf("Entrer a et b : ");
                scanf("%d %d",&a,&b);
                printf("%d x %d = %d\n",a,b,produitAdditions(a,b));
                break;
            }
            case 5: {
                int taille;
                printf("Taille du tableau : ");
                scanf("%d",&taille);
                int tab[taille];
                for(int i=0;i<taille;i++) {
                    printf("tab[%d] = ",i+1);
                    scanf("%d",&tab[i]);
                }
                if(estTrie(tab,taille)) printf("Le tableau est trié\n");
                else printf("Le tableau n’est pas trié\n");
                break;
            }
            case 6: {
                int taille;
                printf("Taille du tableau : ");
                scanf("%d",&taille);
                int tab[taille];
                for(int i=0;i<taille;i++) {
                    printf("tab[%d] = ",i+1);
                    scanf("%d",&tab[i]);
                }
                printf("Médiane = %.2f\n",mediane(tab,taille));
                break;
            }
            case 7: {
                int taille;
                printf("Taille du tableau : ");
                scanf("%d",&taille);
                int tab[taille];
                for(int i=0;i<taille;i++) {
                    printf("tab[%d] = ",i+1);
                    scanf("%d",&tab[i]);
                }
                inverserTableau(tab,taille);
                printf("Tableau inversé : ");
                for(int i=0;i<taille;i++) printf("%d ",tab[i]);
                printf("\n");
                break;
            }
            case 8: {
                int u[3],v[3],r[3];
                for(int i=0;i<3;i++) {
                    printf("u[%d] = ",i+1);
                    scanf("%d",&u[i]);
                }
                for(int i=0;i<3;i++) {
                    printf("v[%d] = ",i+1);
                    scanf("%d",&v[i]);
                }
                produitVectoriel(u,v,r);
                printf("Produit vectoriel = (%d,%d,%d)\n",r[0],r[1],r[2]);
                break;
            }
            case 9: {
                int n,m;
                printf("Dimensions vecteur (n) et matrice (n m) : ");
                scanf("%d %d",&n,&m);
                int vecteur[n],matrice[n][m],resultat[m];
                for(int i=0;i<n;i++) {
                    printf("vecteur[%d] = ",i+1);
                    scanf("%d",&vecteur[i]);
                }
                printf("Saisir la matrice :\n");
                for(int i=0;i<n;i++) {
                    for(int j=0;j<m;j++) {
                        printf("M[%d][%d] = ",i+1,j+1);
                        scanf("%d",&matrice[i][j]);
                    }
                }
                produitVecteurMatrice(n,m,vecteur,matrice,resultat);
                printf("Résultat : ");
                for(int j=0;j<m;j++) printf("%d ",resultat[j]);
                printf("\n");
                break;
            }
            case 0: printf("Au revoir !\n"); break;
            default: printf("Choix invalide.\n");
        }
    } while(choix != 0);

    return 0;
}
