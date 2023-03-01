#include "binary_trees.h"

/**
 * binary_tree_rotate_left - performs a left-rotation
 * on a binary tree.
 *
 * @tree: pointer to the root node of the tree.
 *
 * Return: New root node.
*/
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
binary_tree_t *temp;
if (!tree || !tree->right)
return NULL;
temp = tree->right;
if (temp->left)
temp->left->parent = tree;
tree->right = temp->left;
tree->parent = temp;
temp->parent = NULL;
temp->left = tree;
return temp;
}
