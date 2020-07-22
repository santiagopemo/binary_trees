#include "binary_trees.h"

/**
 * binary_tree_uncle - function that finds the uncle of a node
 * @node: binary tree node
 * Return: pointer to the uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || !(node->parent) || !(node->parent->parent))
		return (NULL);
	if (node->parent == node->parent->parent->right)
		return (node->parent->parent->left);
	return (node->parent->parent->right);
}
