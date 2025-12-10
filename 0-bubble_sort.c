#include "sort.h"
/**
 * bubble_sort - sorts an array of integers in ascending order
 * @array: pointeur vers le tableau
 * @size: nombre d'éléments a imprimer
 *
 * Return: rien
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp;

	/* nb element < 2 tableau deja trier */
	if (array == NULL || size < 2)
		return;

	/* size-1 car pas de tri inutile */
	for (i = 0; i < size - 1; i++)
	{
		/* pour comparer les elements qui sont a coter */
		for (j = 0; j < size - 1 - i; j++)
		{
			/* si l'élément courant est plus grand que le suivant, on échange */
			if (array[j] > array[j + 1])
			{
				temp = array[j]; /* sauvegarder l'élément courant */
				array[j] = array[j + 1]; /* mettre l'élément suivant à la place */
				array[j + 1] = temp;
				/* replacer l'élément courant à la position suivante */

				print_array(array, size); /* afficher le tableau final */
			}
		}
	}
}
