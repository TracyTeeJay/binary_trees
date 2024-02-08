#include "binary_trees.h"

/**
 * binary_tree_depth - function to measure depth of a node in a binary tree
 * @tree: pointer to the node where depth is measured
 * Return: depth of tree, else 0 if tree is NULL
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
  return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
