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
if (!tree)
return (0);
return (binary_tree_nodes(tree->left) +
binary_tree_nodes(tree->right) + 1);
}


/**
 * binary_tree_is_perfect - checks if a binary tree is perfect.
 *
 * @tree: pointer to the root node of the tree.
 *
 * Return: 1 if perfect, 0 otherwise.
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
int l = 0, r = 0;
if (!tree)
return (0);

l = tree->left ?
binary_tree_nodes(tree->left) : 0;
r = tree->right ?
binary_tree_nodes(tree->right) : 0;

return (l == r);
}
