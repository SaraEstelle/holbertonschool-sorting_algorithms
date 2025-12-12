// Inclut les définitions nécessaires (listint_t, prototypes…)
#include "sort.h"

/**
 * swap_adjacent - Swaps two adjacent nodes in a doubly linked list.
 * @list: Double pointer to the head of the list (to update if needed).
 * @left: The left node of the pair to swap.
 * @right: The right node of the pair to swap.
 *
 * Description: Reconnects the prev and next pointers of four nodes
 * to swap two nodes that are currently side-by-side.
 */
static void swap_adjacent(listint_t **list, listint_t *left, listint_t *right)
{
	// A reçoit le pointeur vers le nœud précédent de left
	listint_t *A = left->prev;

	// C reçoit le pointeur vers le nœud suivant de right
	listint_t *C = right->next;

	// Si left n’était pas la tête, relier A → right
	if (A)
		A->next = right;

	// Right pointe maintenant vers A comme précédent
	right->prev = A;

	// Right se place avant left → mise à jour du suivant
	right->next = left;

	// Left pointe maintenant vers right comme précédent
	left->prev = right;

	// Left pointe sur C comme suivant
	left->next = C;

	// Si right n’était pas la queue, C pointe maintenant sur left comme précédent
	if (C)
		C->prev = left;

	// Si A était NULL, left était la tête → mettre à jour la tête sur right
	if (A == NULL)
		*list = right;
}

/**
 * insertion_sort_list - Sort a doubly linked list using insertion sort
 * @list: double pointeur vers la tête
 */
void insertion_sort_list(listint_t **list)
{
	// Déclaration des pointeurs de parcours
	listint_t *current, *next_node;

	// Vérification : liste inexistante, vide ou à un seul élément → rien à faire
	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	// On commence au deuxième élément (le premier est considéré trié)
	current = (*list)->next;

	// Parcours de la liste
	while (current != NULL)
	{
		// Sauvegarde du suivant avant modifications
		next_node = current->next;

		// Tant que current doit remonter (plus petit que son précédent)
		while (current->prev != NULL && current->n < current->prev->n)
		{
			// Échange current avec son prédécesseur
			swap_adjacent(list, current->prev, current);

			// Affichage de debug / pour visualiser les étapes
			print_list(*list);
		}

		// Avance au prochain élément à traiter
		current = next_node;
	}
}
