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

void print_array(const int *array, size_t size);
void bubble_sort(int *array, size_t size);

#endif
