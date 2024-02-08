#include "binary_trees.h"

/**
 * binary_tree_insert_right - function to insert child at the right node
 * @parent: pointer to the node to insert right-child
 * @value: value to be stored in new node
 * Return: new node or NULL incase of error or empty node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *newNode;

if (parent == NULL)
return (NULL);

newNode = binary_tree_node(parent, value);
if (newNode == NULL)
return (NULL);

if (parent->right != NULL)
{
newNode->right = parent->right;
parent->right->parent = newNode;
}
parent->right = newNode;

return (newNode);
}
