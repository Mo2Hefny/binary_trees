#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the unclue of a node.
 *
 * @node: pointer to the node to find the uncle.
 *
 * Return: node uncle.
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
if (!node || !node->parent || !node->parent->parent)
return (NULL);
return ((node->parent->parent->left == node->parent) ?
node->parent->parent->right : node->parent->parent->left);
}
