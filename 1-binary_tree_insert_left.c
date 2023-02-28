#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node.
 *
 * @parent: pointer to the parent node of the node to create.
 * @value: value to put in the new node.
 *
 * Return: NULL if the parent is NULL, pointer to the new node otherwise.
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *temp = parent->left, *New;
if (!parent)
return (NULL);
New = malloc(sizeof(binary_tree_t));
if (!New)
return (NULL);
New->n = value;
New->parent = parent;
New->left = temp;
if (temp)
temp->parent = New;
New->right = NULL;
parent->left = New;
return (New);
}
