# Cahier de suivi de projet

**Matricule** : 24F2520
**Nom et Prénom** : TCHAKUI KENGNE Noe Landry
**Filière** : Informatique L2

---

# Séance 1
- Lecture et compréhension de l’énoncé du projet.
- Identification des différentes fonctionnalités à coder :
  1. Somme de matrices
  2. Produit de matrices
  3. Recherche séquentielle dans un tableau
  4. Multiplication a × b avec +1
  5. Test si un tableau est trié
  6. Calcul du médian d’un tableau
  7. Inversion d’un tableau
  8. Produit vectoriel
  9. Produit vecteur × matrice

---


- Mise en place de la structure modulaire :
  - `fonction.h` : prototypes
  - `fonction.c` : définitions
  - `main.c` : menu et test des fonctions
- Début du codage des fonctions sur les matrices (saisie, affichage, somme, produit).

---


- Ajout des fonctions sur les tableaux (recherche, tri, médian, inversion).
- Ajout des fonctions sur les vecteurs et produit vectoriel.
- Compilation et premiers tests.

---


- Finalisation du menu principal dans `main.c`.
- Vérification du bon fonctionnement du programme.
- Ajout de l’affichage “BIENVENUE DANS NOTRE PROGRAMME”.

---

## Bilan de la Séance 1
- J’ai appris à organiser un projet en programmation modulaire.
- J’ai revu la manipulation des matrices, vecteurs et tableaux en C.
- J’ai acquis de l’expérience dans la structuration du code avec des fichiers séparés.
- J’ai acquis de l’expérience dans la manipulation des structures de donnees : les tableaux


# Séance 2 – Listes Chaînées

Introduction au concept de listes chaînées comme structures de données dynamiques.

Étude des différences entre tableaux et listes chaînées :

Tableaux = taille fixe, accès direct.

Listes chaînées = taille dynamique, accès séquentiel.

## 📌 Étapes de travail réalisées

Création d’un projet en programmation modulaire :

fonction.h : prototypes des opérations sur la liste.

fonction.c : définitions des fonctions.

main.c : menu interactif pour tester.

Implémentation progressive des fonctionnalités :

Insertion en tête

Insertion en fin

Suppression en tête

Suppression en fin

Affichage complet de la liste

Ajout d’un menu interactif avec choix utilisateur (numéros 1,2,3…) permettant de tester chaque opération.

Amélioration de l’affichage avec des couleurs ANSI (printf("\033[31mTexte rouge\033[0m");).

Utilisation de malloc et free pour la gestion de mémoire dynamique.

## 📊 Tests et validation

Vérification de l’insertion et suppression sur liste vide et non vide.

Vérification du bon fonctionnement de l’affichage.

Correction d’un problème de “fuite mémoire” en ajoutant free() lors des suppressions.

Compilation avec un Makefile pour automatiser la construction du projet.

## Bilan de la Séance 2

J’ai compris la différence fondamentale entre tableaux et listes chaînées.

J’ai appris à manipuler des pointeurs pour chaîner les nœuds entre eux.

J’ai renforcé mes compétences en programmation modulaire avec plusieurs fichiers.

J’ai vu l’importance de la gestion mémoire dynamique en C.

J’ai découvert l’utilisation de menus interactifs pour tester un programme.

Je maîtrise désormais les opérations de base sur une liste chaînée : insertion, suppression et parcours.
