#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes in a binary tree.
 *
 * @tree: pointer to the root node of the tree.
 *
 * Return: number of nodes.
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
int cnt = 0;
if (!tree)
return (0);
if (tree->left || tree->right)
cnt += 1;
cnt += binary_tree_nodes(tree->left);
cnt += binary_tree_nodes(tree->right);
return (cnt);
}
