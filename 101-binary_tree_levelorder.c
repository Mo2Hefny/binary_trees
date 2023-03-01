#include "binary_trees.h"

/**
 * binary_tree_levelorder_next - goes through a binary tree
 * using level-order traversal.
 *
 * @tree: pointer to the node to check.
 * @func: a pointer to a function to call for each node.
*/
void binary_tree_levelorder_next(const binary_tree_t
*tree, void (*func)(int))
{
binary_tree_t *l_node, *r_node;
if (!tree || !func)
return;
l_node = tree->left;
r_node = tree->right;
if (l_node)
func(l_node->n);
if (r_node)
func(r_node->n);
binary_tree_levelorder_next(l_node, func);
binary_tree_levelorder_next(r_node, func);
}


/**
 * binary_tree_levelorder - goes through a binary tree
 * using level-order traversal.
 *
 * @tree: pointer to the node to check.
 * @func: a pointer to a function to call for each node.
*/
void binary_tree_levelorder(const binary_tree_t
*tree, void (*func)(int))
{
if (!tree || !func)
return;
func(tree->n);
binary_tree_levelorder_next(tree, func);
}
