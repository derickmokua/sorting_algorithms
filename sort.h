#ifndef SORT_H
#define SORT_H

/*Header Files*/

#include <stdio.h>

/*Data Structures*/
/**
 * struct listint_s - Node of a doubly linked list
 *
 * @n: Value stored in the node
 * @prev: Pointer to the previous node in the list
 * @next: Pointer to the next node in the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/*Function Prototypes*/

void print_list(const listint_t *list);

void print_array(const int *array, size_t size);

void bubble_sort(int *array, size_t size);

void insertion_sort_list(listint_t **list);

void selection_sort(int *array, size_t size);

void quick_sort(int *array, size_t size);

void cocktail_sort_list(listint_t **list);

int split(int *arr, int left, int right, size_t size);

void sort_alg(int *arr, int left, int right, size_t size);

void shell_sort(int *array, size_t size);

void quick_sort_hoare(int *array, size_t size);

void bitonic_sort(int *array, size_t size);

void radix_sort(int *array, size_t size);

void heap_sort(int *array, size_t size);

void merge_sort(int *array, size_t size);

void counting_sort(int *array, size_t size);

#endif
