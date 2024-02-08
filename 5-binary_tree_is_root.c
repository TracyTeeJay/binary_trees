#include "binary_trees.h"

/**
 * binary_tree_is_root - function to check if node of binary tree is root
 * @node: pointer to node to be checked
 * Return: 1 if node is roo, else 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
if (node == NULL || node->parent != NULL)
return (0);

return (1);
}
