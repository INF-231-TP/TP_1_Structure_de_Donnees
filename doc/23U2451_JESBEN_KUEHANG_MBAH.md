markdown
# Documentation du Programme de Manipulation de Matrices et Tableaux

Ce programme implémente plusieurs fonctions pour manipuler des matrices et des tableaux. Les principales fonctionnalités incluent :

## Fonctions

### 1. Addition de Deux Matrices

**Fonction :** `addition_matrices(matrix_a, matrix_b)`

- **Description :** Prend deux matrices de même dimension et renvoie leur somme.
- **Paramètres :**
  - `matrix_a` : Première matrice (liste de listes).
  - `matrix_b` : Deuxième matrice (liste de listes).
- **Retourne :** Une nouvelle matrice représentant la somme.

### 2. Multiplication de Deux Matrices

**Fonction :** `multiplication_matrices(matrix_a, matrix_b)`

- **Description :** Multiplie deux matrices.
- **Paramètres :**
  - `matrix_a` : Première matrice.
  - `matrix_b` : Deuxième matrice.
- **Retourne :** Une nouvelle matrice résultant de la multiplication.

### 3. Recherche Séquentielle dans un Tableau

**Fonction :** `recherche_sequentielle(tableau, valeur)`

- **Description :** Effectue une recherche séquentielle pour trouver une valeur dans un tableau.
- **Paramètres :**
  - `tableau` : Liste d'éléments.
  - `valeur` : Valeur à rechercher.
- **Retourne :** L'indice de la valeur si trouvée, sinon -1.

### 4. Vérification si un Tableau est Trié

**Fonction :** `est_trie(tableau)`

- **Description :** Vérifie si un tableau est trié dans l'ordre croissant.
- **Paramètres :**
  - `tableau` : Liste d'éléments.
- **Retourne :** `True` si le tableau est trié, sinon `False`.

### 5. Produit d'une Matrice et d'un Vecteur

**Fonction :** `produit_matrice_vecteur(matrice, vecteur)`

- **Description :** Calcule le produit d'une matrice et d'un vecteur.
- **Paramètres :**
  - `matrice` : Matrice (liste de listes).
  - `vecteur` : Vecteur (liste).
- **Retourne :** Un vecteur résultant du produit.

### 6. Produit Vectoriel

**Fonction :** `produit_vectoriel(vecteur_a, vecteur_b)`

- **Description :** Calcule le produit vectoriel de deux vecteurs en 3D.
- **Paramètres :**
  - `vecteur_a` : Premier vecteur (liste de 3 éléments).
  - `vecteur_b` : Deuxième vecteur (liste de 3 éléments).
- **Retourne :** Un vecteur résultant du produit vectoriel.

### 7. Inversion d'un Tableau

**Fonction :** `inverser_tableau(tableau)`

- **Description :** Inverse l'ordre des éléments dans un tableau.
- **Paramètres :**
  - `tableau` : Liste d'éléments.
- **Retourne :** Le tableau inversé.

### 8. Détermination de la Médiane dans un Tableau

**Fonction :** `mediane(tableau)`

- **Description :** Calcule la médiane d'un tableau.
- **Paramètres :**
  - `tableau` : Liste d'éléments numériques.
- **Retourne :** La médiane du tableau.

### 9. Multiplication de Deux Nombres Positifs en Utilisant Exclusivement 1

**Fonction :** `multiplication_exclusive(a, b)`

- **Description :** Calcule le produit de `a` et `b` (a, b > 0) en utilisant exclusivement l'addition.
- **Paramètres :**
  - `a` : Premier entier positif.
  - `b` : Deuxième entier positif.
- **Retourne :** Le produit `a × b`.

## Exemples d'Utilisation

```python
# Exemple d'addition de matrices
resultat_addition = addition_matrices([[1, 2], [3, 4]], [[5, 6], [7, 8]])

# Exemple de recherche séquentielle
indice = recherche_sequentielle([10, 20, 30], 20)

# Exemple de multiplication exclusive
produit = multiplication_exclusive(3, 4)  # Renvoie 12
```

## Conclusion

Ce programme fournit une base solide pour effectuer des opérations courantes sur des matrices et des tableaux. Chaque fonction est conçue pour être simple à utiliser et peut être intégrée dans des applications plus complexes.
```

N'hésitez pas à personnaliser cette documentation en fonction de vos besoins ou à ajouter des détails supplémentaires sur les implémentations de chaque fonction.
