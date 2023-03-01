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
int binary_tree_is_bst(const binary_tree_t *tree)
{
int state1 = 1, state2 = 1;
if (!tree)
return (0);
if (!tree->left && !tree->right)
return (1);
if (tree->left && tree->parent)
if (tree->left->n < tree->parent->n && tree->parent->right == tree)
return (0);
if (tree->right && tree->parent)
if (tree->right->n > tree->parent->n && tree->parent->left == tree)
return (0);
if (tree->left)
state1 = (tree->left->n < tree->n) ?
binary_tree_is_bst(tree->left) : 0;
if (tree->right)
state2 = (tree->right->n > tree->n) ?
binary_tree_is_bst(tree->right) : 0;
return (state1 && state2);
}
