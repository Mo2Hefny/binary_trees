#include "binary_trees.h"

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
int cnt = 0;
if (!tree)
return (0);
if (tree->left)
cnt++;
if (tree->right)
cnt--;
cnt += binary_tree_balance(tree->left);
cnt -= binary_tree_balance(tree->right);
return (cnt);
}
