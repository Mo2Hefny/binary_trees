#include "binary_trees.h"
#include <stdio.h>
/**
 * bst_insert - inserts a value in a
 * Binary Search Tree.
 *
 * @tree: double pointer to the root node.
 * @value: value to store in the node to be inserted.
 *
 * Return: pointer to created node.
*/
bst_t *bst_insert(bst_t **tree, int value)
{
bst_t *temp;
if (!tree || !*tree)
{
temp = binary_tree_node(NULL, value);
(*tree) = temp;
return (temp);
}
if (value < (*tree)->n)
{
if ((*tree)->left)
return (bst_insert(&((*tree)->left), value));
else
{
temp = binary_tree_node(*tree, value);
(*tree)->left = temp;
return (temp);
}
}
else if (value > (*tree)->n)
{
if ((*tree)->right)
return (bst_insert(&((*tree)->right), value));
else
{
temp = binary_tree_node(*tree, value);
(*tree)->right = temp;
return (temp);
}
}
return (NULL);
}
