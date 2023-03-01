#include "binary_trees.h"

/**
 * bst_min_diff -  searches for first
 * in-order successor.
 *
 * @tree: pointer to the root node of the BST.
 * @value: value to search in the tree.
 *
 * Return:  pointer to the succesor.
*/
bst_t *bst_min_diff(const bst_t *tree,int value)
{
int l, r;
if (!tree)
return (NULL);
if (tree->right && tree->left)
{
r = abs(value - tree->right->n);
l = abs(value - tree->left->n);
return ((l < r) ? bst_min_diff(tree->left, value) :
bst_min_diff(tree->right, value));
}
if (tree->right)
{
l = abs(value - tree->n);
r = abs(value - tree->right->n);
return ((l < r && l) ? (bst_t *)tree :
bst_min_diff(tree->right, value));
}
if (tree->left)
{
l = abs(value - tree->left->n);
r = abs(value - tree->n);
return ((r < l && r) ? (bst_t *)tree :
bst_min_diff(tree->left, value));
}
return ((bst_t *)tree);
}


/**
 * bst_search -  searches for a value in
 * a Binary Search Tree.
 *
 * @tree: pointer to the root node of the BST.
 * @value: value to search in the tree.
 *
 * Return:  pointer to the node containing a value.
*/
bst_t *bst_search(const bst_t *tree, int value)
{
bst_t *temp = NULL;
if (!tree)
return (NULL);
if (tree->n == value)
return ((bst_t *)tree);
temp = bst_search(tree->left, value);
return (temp ? temp : bst_search(tree->right, value));
}


/**
 * bst_remove -  removes a node from
 * a Binary Search Tree.
 *
 * @root: pointer to the root node of the BST.
 * @value: value to search in the tree.
 *
 * Return:  pointer to the node containing a value.
*/
bst_t *bst_remove(bst_t *root, int value)
{
bst_t *suc = NULL, *excess = NULL;
excess = bst_search(root, value);
if (!excess)
return (root);
suc = bst_min_diff(excess, value);
if (excess->left && excess->left != suc)
excess->left->parent = suc;
if (excess->right && excess->right != suc)
excess->right->parent = suc;
if (suc->parent->left == suc)
suc->parent->left =
suc->left ? suc->left : suc->right;
else
suc->parent->right =
suc->left ? suc->left : suc->right;
suc->right = excess->right;
suc->left = excess->left;
suc->parent = excess->parent;
if (excess->parent)
{
if (excess->parent->left == excess)
excess->parent->left = suc;
else
excess->parent->right = suc;
}
if (root == excess)
root = suc;
free(excess);
return (root);
}
