#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node.
 * 
 * @parent: pointer to the parent node of the node to create.
 * @value: value to put in the new node.
 * 
 * Return: Null on failure, pointer to the new node otherwise.
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *New = malloc(sizeof(binary_tree_t));
if (!New)
return NULL;
New->n = value;
New->parent = parent;
New->left = NULL;
New->right = NULL;
return New;
}