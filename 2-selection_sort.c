#include "sort.h"
/**
 * selection_sort - sorts an array of integers in ascending order
 * @array: poiteur vers le tableau
 * @size: nombre d'éléments a imprimer
 *
 * Return: Nothing
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min_i;
	int temp; /* pour echnanger les valeurs */

	if (array == NULL || size < 2)
		return;

	/* size - 1 car le dernier element automatiquement trier */
	for (i = 0; i < size - 1; i++)
	{
		min_i = i; /* suppose element actuel est le plus petit */
		/* chercher le vrai minimum */
		for (j = i + 1; j < size; j++)
		{
			/* si on trouve plus petit que array[min_i] */
			if (array[j] < array[min_i])
				min_i = j; /* si c plus petit on mémorise */
		}
		/* si un minimum différent a été trouvé, on échange */
		if (min_i != i)
		{
			temp = array[i]; /* on garde array[i] dans temp */
			array[i] = array[min_i]; /* on met le minimum à la position i */
			array[min_i] = temp;   /* on remet l’ancienne valeur de i à min_i */

			print_array(array, size);
		}

	}
}
