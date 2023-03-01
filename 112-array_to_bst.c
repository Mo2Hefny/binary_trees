#include "binary_trees.h"
#include <stdio.h>
/**
 * bst_insert - inserts a value in a
 * Binary Search Tree.
 *
 * @array: pointer to the first element of the array.
 * @size: number of element in the array.
 *
 * Return: root node.
*/
bst_t *array_to_bst(int *array, size_t size)
{
bst_t *head = NULL;
size_t i;
bst_insert(&head, *array);
for (i = 0; i < size; i++)
bst_insert(&head, array[i]);
return (head);
}
