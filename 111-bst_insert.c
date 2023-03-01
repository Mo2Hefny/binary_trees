#include "binary_trees.h"
#include <stdio.h>
/**
 * binary_tree_is_bst - checks if a binary tree
 * is a valid Binary Search Tree.
 *
 * @tree: pointer to the root node of the tree.
 *
 * Return: 1 if the tree is a valid BST, 0 otherwise.
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
