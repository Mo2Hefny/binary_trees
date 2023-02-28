#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree.
 *
 * @tree: pointer to the root node of the tree.
 *
 * Return: leaves.
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
int l = 0, r = 0;
if (!tree)
return (0);
l = binary_tree_leaves(tree->left);
r = binary_tree_leaves(tree->right);
return ((!l && !r) ? 1 : l + r);
}
