#include "binary_trees.h"

/**
 * binary_tree_nodes - function to count nodes with at least a child
 * @tree: pointer to the root node of the tree to count the number of nodes
 * Return: number of nodes, else 0 if tree is NULL
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
size_t BtNodes = 0;

if (tree)
{
BtNodes += (tree->left || tree->right) ? 1 : 0;
BtNodes += binary_tree_nodes(tree->left);
BtNodes += binary_tree_nodes(tree->right);
}
return (BtNodes);
}
