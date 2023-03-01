#include "binary_trees.h"

/**
 * binary_tree_rotate_right - performs a right-rotation
 * on a binary tree.
 *
 * @tree: pointer to the root node of the tree.
 *
 * Return: New root node.
*/
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
binary_tree_t *temp;
if (!tree || !tree->left)
return NULL;
temp = tree->left;
if (temp->right)
temp->right->parent = tree;
tree->left = temp->right;
tree->parent = temp;
temp->parent = NULL;
temp->right = tree;
return temp;
}
