// Inclut les définitions nécessaires : prototypes, print_array…
#include "sort.h"

/**
 * swap_ints - Swaps two integers in an array and prints the array.
 * @array: The array to print.
 * @size: The size of the array.
 * @a: Pointer to the first integer.
 * @b: Pointer to the second integer.
 */
void swap_ints(int *array, size_t size, int *a, int *b)
{
	// Vérifie que les deux valeurs sont différentes pour éviter un échange inutile
	if (*a != *b)
	{
		// Stocke temporairement la valeur de *a
		int tmp = *a;

		// Place la valeur de *b dans *a
		*a = *b;

		// Replace la valeur temporaire dans *b
		*b = tmp;

		// Affiche le tableau après l’échange (pour suivre l'algorithme visuellement)
		print_array(array, size);
	}
}

/**
 * lomuto_partition - Lomuto partition scheme for quick_sort.
 * @array: The array of integers.
 * @size: The size of the array.
 * @low: The starting index of the partition.
 * @high: The ending index of the partition (pivot).
 *
 * Return: The final partition index.
 */
int lomuto_partition(int *array, size_t size, int low, int high)
{
	// Le pivot est l’élément à la fin de la zone considérée
	int pivot = array[high];

	// i marque l’endroit où placer les valeurs < pivot
	int i = low;

	// j parcourt la zone [low, high[
	int j;

	// Parcours du sous-tableau
	for (j = low; j < high; j++)
	{
		// Si on trouve un élément plus petit que le pivot
		if (array[j] < pivot)
		{
			// On l’échange avec array[i] pour le mettre du côté gauche
			swap_ints(array, size, &array[i], &array[j]);

			// On avance i (nouvelle frontière des éléments < pivot)
			i++;
		}
	}

	// Enfin, on place le pivot à sa position finale
	swap_ints(array, size, &array[i], &array[high]);

	// Retourne l’indice final du pivot
	return (i);
}

/**
 * quick_recursive - Recursive helper for quick_sort.
 * @array: The array of integers.
 * @size: The size of the array.
 * @low: The starting index.
 * @high: The ending index.
 */
void quick_recursive(int *array, size_t size, int low, int high)
{
	// Condition pour continuer : au moins deux éléments
	if (low < high)
	{
		// Partitionne la zone et récupère la position du pivot
		int pivot_idx = lomuto_partition(array, size, low, high);

		// Trie récursivement la partie gauche du pivot
		quick_recursive(array, size, low, pivot_idx - 1);

		// Trie récursivement la partie droite du pivot
		quick_recursive(array, size, pivot_idx + 1, high);
	}
}

/**
 * quick_sort - Sorts an array of integers using the Quick sort algorithm.
 * @array: An array of integers.
 * @size: The size of the array.
 */
void quick_sort(int *array, size_t size)
{
	// Si tableau vide ou taille insuffisante → rien à trier
	if (array == NULL || size < 2)
		return;

	// Appel initial à la fonction récursive sur toute la zone
	quick_recursive(array, size, 0, size - 1);
}
