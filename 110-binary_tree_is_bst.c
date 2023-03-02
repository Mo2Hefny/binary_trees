#include "binary_trees.h"
#include <limits.h>

/**
 * is_bst - checks if a binary tree
 * is a valid Binary Search Tree.
 *
 * @node: pointer to a node of the tree.
 * @min: minimum value for tree node.
 * @max: maximum value for tree node.
 *
 * Return: 1 if the tree is a valid BST, 0 otherwise.
*/
int is_bst(const binary_tree_t *node, int min, int max)
{
if (!node)
return (1);
if (node->n < min || node->n > max)
return (0);
return (
is_bst(node->left, min, node->n - 1) &&
is_bst(node->right, node->n + 1, max)
);
}

/**
 * binary_tree_is_bst - checks if a binary tree
 * is a valid Binary Search Tree.
 *
 * @tree: pointer to the root node of the tree.
 *
 * Return: 1 if the tree is a valid BST, 0 otherwise.
*/
int binary_tree_is_bst(const binary_tree_t *tree)
{
if (!tree)
return (0);
return (is_bst(tree, INT_MIN, INT_MAX));
}
