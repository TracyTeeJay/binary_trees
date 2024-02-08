#include "binary_trees.h"

/**
 * binary_tree_size - function to measure binary tree size
 * @tree: pointer to root of node whose size to be measured
 * Return: tree size
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
size_t BtSize = 0;

if (tree)
{
BtSize += 1;
BtSize += binary_tree_size(tree->left);
BtSize += binary_tree_size(tree->right);
}
return (BtSize);
}
