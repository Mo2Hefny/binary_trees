#include "binary_trees.h"

/**
 * array_to_bst - builds a Binary Search Tree
 * from an array.
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
for (i = 0; i < size; i++)
bst_insert(&head, array[i]);
return (head);
}
