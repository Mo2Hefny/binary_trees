#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the 
 * right-child of another node.
 *
 * @parent: pointer to the parent node of the node to create.
 * @value: value to put in the new node.
 *
 * Return: if the parent is NULL, pointer to the new node otherwise.
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
if (!parent)
return (NULL);
binary_tree_t *New = malloc(sizeof(binary_tree_t));
if (!New)
return (NULL);
binary_tree_t *temp = parent->right;
New->n = value;
New->parent = parent;
New->right = temp;
if (temp)
temp->parent = New;
New->left = NULL;
parent->right = New;
return (New);
}
