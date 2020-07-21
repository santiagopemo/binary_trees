#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: tree root
 * Return: If tree is NULL the function return 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t r, l;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);
	l = binary_tree_height(tree->left);
	r = binary_tree_height(tree->right);
	if (r > l)
		return (r + 1);
	return (l + 1);
}
