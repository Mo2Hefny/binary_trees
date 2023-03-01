#include "binary_trees.h"
#include <stdio.h>
/**
 * bst_search -  searches for a value in
 * a Binary Search Tree.
 *
 * @tree: pointer to the root node of the BST.
 * @value: value to search in the tree.
 *
 * Return:  pointer to the node containing a value.
*/
bst_t *bst_search(const bst_t *tree, int value)
{
bst_t *temp = NULL;
if (!tree)
return (NULL);
if (tree->n == value)
return ((bst_t *)tree);
temp = bst_search(tree->left, value);
return (temp ? temp : bst_search(tree->right, value));
}
