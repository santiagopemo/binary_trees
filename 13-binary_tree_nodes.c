#include "binary_trees.h"

/**
 * binary_tree_nodes - function that counts the leaves in a binary tree
 * @tree: binary tree root
 * Return: If tree is NULL, the function must return 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t r, l;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);
	l = binary_tree_nodes(tree->left);
	r = binary_tree_nodes(tree->right);
	return (r + l + 1);
}
