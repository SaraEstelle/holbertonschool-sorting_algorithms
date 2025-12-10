#include "sort.h"
/**
 *swap_adjacent - Swaps two adjacent nodes in a doubly linked list.
 * @list: Double pointer to the head of the list (to update if needed).
 * @left: The left node of the pair to swap.
 * @right: The right node of the pair to swap.
 *
 * Description: Reconnects the prev and next pointers of four nodes
 * to swap two nodes that are currently side-by-side.
 */
static void swap_adjacent(listint_t **list, listint_t *left, listint_t *right)
{
	listint_t *A = left->prev;
	listint_t *C = right->next;

	if (A)
		A->next = right;
	right->prev = A;

	right->next = left;
	left->prev = right;

	left->next = C;

	if (C)
		C->prev = left;

	if (A == NULL)
		*list = right;
}
/**
 * insertion_sort_list - a function that sorts a doubly linked list of integers
 *  in ascending order using the Insertion sort algorithm
 * @list: double pointer to the head of the list
 * Return : nothing ( void)
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *next_node;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	current = (*list)->next;

	while (current != NULL)
	{
		next_node = current->next;
		while (current->prev != NULL && current->n < current->prev->n)
		{
			swap_adjacent(list, current->prev, current);
			print_list(*list);
		}
		current = next_node;
	}
}
