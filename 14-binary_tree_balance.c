#include "binary_trees.h"

/**
 * binary_tree_balance - function to measure balance factor of a binary tree.
 * @tree: pointer to root node of the tree to measure the balance factor
 * Return: balance factor, else 0 if tree is NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
if (tree)
return (binary_tree_height(tree->left) - binary_tree_height(tree->right));

return (0);
}


/**
 * binary_tree_height -function to measure height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: height of tree, else 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
if (tree)
{
size_t lNode = 0, rNode = 0;

lNode = tree->left ? 1 + binary_tree_height(tree->left) : 1;
rNode = tree->right ? 1 + binary_tree_height(tree->right) : 1;
return ((lNode > rNode) ? lNode : rNode);
}
return (0);
}
