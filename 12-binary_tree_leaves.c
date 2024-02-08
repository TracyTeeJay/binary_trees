#include "binary_trees.h"

/**
 * binary_tree_leaves - function to count leaves in a binary tree
 * @tree: pointer to node whose leaves will be counted
 * Return: leaves number
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
size_t BtLeaves = 0;
if (tree)
{
BtLeaves += (!tree->left && !tree->right) ? 1 : 0;
BtLeaves += binary_tree_leaves(tree->left);
BtLeaves += binary_tree_leaves(tree->right);
}
return (BtLeaves);
}
