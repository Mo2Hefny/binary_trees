#include "binary_trees.h"

/**
 * binary_tree_height_balance - measures the balance
 * factor of a binary tree.
 *
 * @tree: pointer to the root node of the tree.
 *
 * Return: balance factor.
*/
int binary_tree_height_balance(const binary_tree_t *tree)
{
int h_l = 0, h_r = 0;
if (!tree)
return (0);

h_l = tree->left ? 1 +
binary_tree_height_balance(tree->left) : 0;
h_r = tree->right ? 1 +
binary_tree_height_balance(tree->right) : 0;

return ((h_l > h_r) ? h_l : h_r);
}

/**
 * binary_tree_balance - measures the balance
 * factor of a binary tree.
 *
 * @tree: pointer to the root node of the tree.
 *
 * Return: balance factor.
*/
int binary_tree_balance(const binary_tree_t *tree)
{
int h_l = 0, h_r = 0;
if (!tree)
return (0);

h_l = tree->left ? 1 +
binary_tree_height_balance(tree->left) : 0;
h_r = tree->right ? 1 +
binary_tree_height_balance(tree->right) : 0;

return (h_l - h_r);
}
