#include "binary_trees.h"

/**
 * binary_trees_ancestor - finds the lowest
 * common ancestor of two nodes.
 *
 * @first: pointer to the first node.
 * @second: pointer to the second node.
 *
 * Return: node uncle.
*/
binary_tree_t *binary_trees_ancestor(const binary_tree_t
*first, const binary_tree_t *second)
{
const binary_tree_t *sec = second;
for (; first; first = first->parent)
for (second = sec; second; second = second->parent)
if (first == second)
return ((binary_tree_t *)first);
return (NULL);
}
