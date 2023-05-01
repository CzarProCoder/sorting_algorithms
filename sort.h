#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>

/* This is the main.h file  */

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


void bubble_sort(int *array, size_t size);

void print_list(const listint_t *list);

void print_array(const int *array, size_t size);

void insertion_sort_list(listint_t **list);

void swap_ints(int *a, int *b);

void selection_sort(int *array, size_t size);

void quick_sort(int *array, size_t size);

void _qsort(int *a, int low, int high, int size);

void shell_sort(int *array, size_t size);

void swap(listint_t *p, listint_t *c, listint_t **list);

void cocktail_sort_list(listint_t **list);

void counting_sort(int *array, size_t size);

void prints(int *arr, char *side, size_t start, size_t end);

void rec_merge(int *array, int *sortArr, size_t l, size_t r);

void merge_sort(int *array, size_t size);

void swap_ints(int *a, int *b);

void max_heapify(int *array, size_t size, size_t base, size_t root);

void heap_sort(int *array, size_t size);

void radix_sort(int *array, size_t size);

#endif /* SORT_H */
