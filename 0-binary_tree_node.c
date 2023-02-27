#include "binary_trees.h"

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
  binary_tree_t *New = malloc(sizeof(binary_tree_t));
  if (!New)
    return NULL;
  New->n = value;
  New->parent = parent;
  New->left = NULL;
  New->right = NULL;
  return New;
}