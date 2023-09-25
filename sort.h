#ifndef SORT_H
#define SORT_H

#include <stdlib.h>
/**
 * struct listint_s - This is for doubly linked list node
 *
 * @n: The integer is stored in the node
 * @prev: The pointer to the previous element of the list
 * @next: The pointer to the next element of the list
 */

typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void print_list(const listint_t *list);
void insertion_sort_list(listint_t **list);
listint_t *swap_node(listint_t *node, listint_t **list);
void print_array(const int *array, size_t size);
void bubble_sort(int *array, size_t size);

#endif
