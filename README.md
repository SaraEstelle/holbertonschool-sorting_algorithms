# Sorting Algorithms & Big O

## Introduction

Ce projet explore les **algorithmes de tri** et la **notation Big O**, deux concepts fondamentaux en informatique. Les algorithmes de tri permettent d'organiser des données de manière ordonnée, ce qui est essentiel pour optimiser les recherches, améliorer les performances et faciliter le traitement des informations. La notation Big O, quant à elle, permet d'évaluer et de comparer l'efficacité des algorithmes en termes de temps d'exécution et d'utilisation de la mémoire.

Ce projet est réalisé en binôme dans le cadre du programme Holberton School et vise à développer une compréhension pratique de plusieurs algorithmes de tri classiques, de leur complexité temporelle et de leurs cas d'utilisation optimaux.

---

## Objectifs d'apprentissage

À la fin de ce projet, vous serez capable d'expliquer sans aide extérieure :

- **Au moins quatre algorithmes de tri différents** et leur fonctionnement
- **La notation Big O** et comment évaluer la complexité temporelle d'un algorithme
- **Comment sélectionner le meilleur algorithme de tri** selon le type de données d'entrée
- **Ce qu'est un algorithme de tri stable** et pourquoi cette propriété est importante

---

## Ressources

### Lectures et vidéos recommandées :
- [Sorting algorithm](https://en.wikipedia.org/wiki/Sorting_algorithm) - Article Wikipédia sur les algorithmes de tri
- [Big O notation](https://en.wikipedia.org/wiki/Big_O_notation) - Comprendre la notation Big O
- [Sorting algorithms animations](https://www.toptal.com/developers/sorting-algorithms) - Visualisations interactives
- [15 sorting algorithms in 6 minutes](https://www.youtube.com/watch?v=kPRA0W1kECg) - Visualisation rapide (⚠️ peut déclencher des crises d'épilepsie)

---

## Structure du projet

### Structure de données

Pour ce projet, nous utilisons deux structures principales :

#### 1. Tableaux d'entiers
```c
int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
```

#### 2. Liste doublement chaînée
```c
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;
```

### Fichiers d'en-tête

Tous les prototypes de fonctions doivent être inclus dans **`sort.h`**, qui doit être protégé contre les inclusions multiples.

---

## Algorithmes implémentés

### 0. Bubble Sort (Tri à bulles)

**Fichiers :** `0-bubble_sort.c`, `0-O`

**Prototype :** `void bubble_sort(int *array, size_t size);`

**Description :**
Le tri à bulles compare des paires d'éléments adjacents et les échange s'ils sont dans le mauvais ordre. Ce processus est répété jusqu'à ce que le tableau soit trié.

**Complexité temporelle :**
- **Meilleur cas :** O(n) - lorsque le tableau est déjà trié
- **Cas moyen :** O(n²)
- **Pire cas :** O(n²)

**Principe :**
- Parcourir le tableau en comparant chaque paire d'éléments adjacents
- Échanger les éléments si nécessaire
- Afficher le tableau après chaque échange
- Répéter jusqu'à ce qu'aucun échange ne soit nécessaire

---

### 1. Insertion Sort (Tri par insertion)

**Fichiers :** `1-insertion_sort_list.c`, `1-O`

**Prototype :** `void insertion_sort_list(listint_t **list);`

**Description :**
Le tri par insertion construit progressivement un tableau trié en insérant chaque élément à sa position correcte dans la partie déjà triée.

**Complexité temporelle :**
- **Meilleur cas :** O(n) - lorsque la liste est déjà triée
- **Cas moyen :** O(n²)
- **Pire cas :** O(n²)

**Principe :**
- Commencer avec le deuxième élément
- Comparer avec les éléments précédents
- Insérer l'élément à sa position correcte
- Répéter pour tous les éléments
- **Important :** Échanger les nœuds eux-mêmes, pas leurs valeurs

---

### 2. Selection Sort (Tri par sélection)

**Fichiers :** `2-selection_sort.c`, `2-O`

**Prototype :** `void selection_sort(int *array, size_t size);`

**Description :**
Le tri par sélection trouve le plus petit élément dans la partie non triée et l'échange avec le premier élément non trié.

**Complexité temporelle :**
- **Meilleur cas :** O(n²)
- **Cas moyen :** O(n²)
- **Pire cas :** O(n²)

**Principe :**
- Trouver le minimum dans la partie non triée
- L'échanger avec le premier élément non trié
- Afficher le tableau après chaque échange
- Répéter jusqu'à ce que tout soit trié

---

### 3. Quick Sort (Tri rapide)

**Fichiers :** `3-quick_sort.c`, `3-O`

**Prototype :** `void quick_sort(int *array, size_t size);`

**Description :**
Le tri rapide utilise une approche "diviser pour régner". Il sélectionne un pivot et partitionne le tableau de sorte que les éléments plus petits que le pivot soient à gauche et les plus grands à droite.

**Implémentation :** Schéma de partition de Lomuto avec le dernier élément comme pivot.

**Complexité temporelle :**
- **Meilleur cas :** O(n log n)
- **Cas moyen :** O(n log n)
- **Pire cas :** O(n²) - lorsque le pivot est toujours le plus petit ou le plus grand élément

**Principe :**
- Choisir le dernier élément comme pivot
- Partitionner le tableau autour du pivot
- Appliquer récursivement sur les sous-tableaux
- Afficher après chaque échange

---

## Notation Big O

La notation Big O décrit la limite supérieure du temps d'exécution d'un algorithme en fonction de la taille de l'entrée.

### Notations courantes (du plus rapide au plus lent) :

- **O(1)** - Temps constant
- **O(log n)** - Temps logarithmique
- **O(n)** - Temps linéaire
- **O(n log n)** - Temps linéarithmique
- **O(n²)** - Temps quadratique
- **O(n³)** - Temps cubique
- **O(2ⁿ)** - Temps exponentiel
- **O(n!)** - Temps factoriel

### Format des fichiers O :
Chaque fichier `X-O` contient trois lignes représentant :
1. Complexité dans le meilleur cas
2. Complexité dans le cas moyen
3. Complexité dans le pire cas

**Exemple pour Bubble Sort (`0-O`) :**
```
O(n)
O(n^2)
O(n^2)
```

---

## Exigences du projet

### Générales
- **Éditeurs autorisés :** vi, vim, emacs
- **Compilation :** Ubuntu 20.04 LTS avec gcc et les options : `-Wall -Werror -Wextra -pedantic -std=gnu89`
- **Style de code :** Betty (vérifié avec `betty-style.pl` et `betty-doc.pl`)
- **Fichiers :** Tous les fichiers doivent se terminer par une nouvelle ligne
- **Fonctions :** Maximum 5 fonctions par fichier
- **Variables globales :** Interdites
- **Bibliothèque standard :** Non autorisée (sauf exception indiquée)

### Fichier README.md
Un fichier README.md à la racine du projet est **obligatoire**.

### Fichier d'en-tête
- Nom : `sort.h`
- Doit contenir tous les prototypes de fonctions
- Doit être protégé contre les inclusions multiples

### GitHub
Un seul dépôt par groupe. Les deux membres du binôme doivent contribuer.

---

## Fonctions utilitaires fournies

### print_array
Affiche un tableau d'entiers :
```c
void print_array(const int *array, size_t size);
```

### print_list
Affiche une liste doublement chaînée :
```c
void print_list(const listint_t *list);
```

Ces fonctions sont fournies dans `print_array.c` et `print_list.c` et seront compilées avec vos fonctions lors de la correction.

---

## Compilation et tests

### Exemples de compilation :

**Bubble Sort :**
```bash
gcc -Wall -Wextra -Werror -pedantic 0-bubble_sort.c 0-main.c print_array.c -o bubble
./bubble
```

**Insertion Sort :**
```bash
gcc -Wall -Wextra -Werror -pedantic 1-main.c 1-insertion_sort_list.c print_list.c -o insertion
./insertion
```

**Selection Sort :**
```bash
gcc -Wall -Wextra -Werror -pedantic 2-main.c 2-selection_sort.c print_array.c -o select
./select
```

**Quick Sort :**
```bash
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 3-main.c 3-quick_sort.c print_array.c -o quick
./quick
```

---

## Conseils pratiques

1. **Tester avec de grands ensembles de données :** Utilisez [Random.org](https://www.random.org/) pour générer des tableaux de nombres aléatoires.

2. **Comprendre avant de coder :** Visualisez l'algorithme avec des exemples simples avant de l'implémenter.

3. **Déboguer efficacement :** Utilisez la fonction `print_array` ou `print_list` à différentes étapes pour suivre l'exécution.

4. **Travailler en binôme :** Pratiquez le pair programming pour au moins la partie obligatoire.

5. **Analyser la complexité :** Pour chaque algorithme, identifiez :
   - Le meilleur cas (données déjà triées ou presque)
   - Le cas moyen (données aléatoires)
   - Le pire cas (données en ordre inverse)

---

## Résumé

Ce projet vous a permis de découvrir et d'implémenter quatre algorithmes de tri fondamentaux :

### 📊 Comparaison rapide :

| Algorithme | Meilleur cas | Cas moyen | Pire cas | Stabilité | Cas d'usage |
|------------|--------------|-----------|----------|-----------|-------------|
| **Bubble Sort** | O(n) | O(n²) | O(n²) | Stable | Petits tableaux, données presque triées |
| **Insertion Sort** | O(n) | O(n²) | O(n²) | Stable | Petites listes, tri en ligne |
| **Selection Sort** | O(n²) | O(n²) | O(n²) | Instable | Simplicité, peu d'écritures en mémoire |
| **Quick Sort** | O(n log n) | O(n log n) | O(n²) | Instable | Grandes données, tri général performant |

### 🎯 Points clés à retenir :

1. **Notation Big O** : Permet d'évaluer et de comparer l'efficacité des algorithmes
2. **Choix de l'algorithme** : Dépend de la taille des données, de leur état initial et des contraintes mémoire
3. **Stabilité** : Un tri stable préserve l'ordre relatif des éléments égaux
4. **Trade-offs** : Simplicité vs performance, mémoire vs temps d'exécution

### 💡 Compétences acquises :

- Implémentation d'algorithmes classiques en C
- Analyse de complexité temporelle
- Manipulation de structures de données (tableaux et listes chaînées)
- Travail collaboratif en binôme
- Respect des normes de codage (Betty style)

---

## Équipe

**Binôme :**
- Sara Rebati
- Maxim Dutruel

**Instructeur :** Alexandre Gautier

---

## Repository

**GitHub repository:** `holbertonschool-sorting_algorithms`

**Fichiers du projet :**
- `0-bubble_sort.c`, `0-O`
- `1-insertion_sort_list.c`, `1-O`
- `2-selection_sort.c`, `2-O`
- `3-quick_sort.c`, `3-O`
- `sort.h`
- `README.md`

---

*Projet réalisé dans le cadre du cursus Holberton School*