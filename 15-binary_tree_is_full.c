#include "binary_trees.h"

/**
 * binary_tree_is_full - function that checks if a binary tree is full
 * @tree: binary tree root
 * Return: 1 if it is full 0 if not
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->right == NULL && tree->left == NULL)
		return (1);
	if (binary_tree_is_full(tree->left) == 0
			|| binary_tree_is_full(tree->right) == 0)
		return (0);
	return (1);
}
