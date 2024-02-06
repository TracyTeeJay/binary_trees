#include "binary_trees.h"

/**
 * binary_tree_node - function to create a node
 * @parent: pointer to parent of the created node
 * @value: value of new node
 * Return: pointer to new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *newNode;
newNode = malloc(sizeof(binary_tree_t));
if (newNode == NULL)
return (NULL);

newNode->n = value;
newNode->parent = parent;
newNode->left = NULL;
newNode->right = NULL;

return (newNode);
}
