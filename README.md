# TP-structure de donnees
Exercices et projets d’algorithmique pour le cours INF 231


# Projet Algorithmique et Programmation en C

##  Description
Ce projet a été réalisé dans le cadre des Travaux Pratiques de l UE  METHODES ALGORITHMIQUES ET STRUCRURES DE DONNEES .  
L’objectif principal était de mettre en œuvre plusieurs **algorithmes fondamentaux** sur les **matrices, vecteurs et tableaux**, et de développer un programme interactif permettant à l’utilisateur d’effectuer différentes opérations.  

Le travail a été effectué en **groupe**, afin de favoriser la collaboration, la répartition des tâches et la mise en commun des compétences de chaque membre.

##  Objectifs pédagogiques
- Savoir manipuler les **matrices, tableaux et vecteurs** en langage C.  
- Implémenter différents **algorithmes classiques** (somme, produit, recherche, tri, médian, inversion, produit vectoriel).  
- Apprendre à écrire un code structuré et lisible.  
- Se familiariser avec la conception de menus interactifs.  
- Développer l’esprit de travail collaboratif à travers un projet en groupe.  

## Fonctionnalités implémentées
1. **Matrices**
   - Somme de deux matrices.  
   - Produit de deux matrices.  
   - Produit vecteur × matrice.  

2. **Vecteurs**
   - Produit vectoriel de deux vecteurs.  

3. **Tableaux**
   - Recherche séquentielle.  
   - Vérification si le tableau est trié.  
   - Calcul du médian.  
   - Inversion d’un tableau.  

4. **Algorithme spécial**
   - Multiplication `a × b` (pour `a,b > 0`) en utilisant uniquement `+1`.  

##  Organisation du projet
- `main.c` : contient le programme principal avec un menu interactif.  
- `fonction.c` : contient les définitions des différentes fonctions.  
- `fonction.h` : contient les prototypes des fonctions.  
- `doc/` : contient les cahiers de suivi (`MatriculePrenomNOM.md`) rédigés individuellement par chaque membre du groupe.  

##  Utilisation
1. Compiler le projet avec :  
   ```bash/cmd
   gcc main.c fonction.c -o programme
