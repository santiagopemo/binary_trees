#include "binary_trees.h"
/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: tree root
 * Return: If tree is NULL the function return 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t r, l;

	if (tree == NULL)
		return (0);
	l = binary_tree_height(tree->left);
	r = binary_tree_height(tree->right);
	if (r > l)
		return (r + 1);
	return (l + 1);
}
/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 * @tree: binary tree root
 * Return: 1 if it is perfect 0 if not
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t r, l;

	if (tree == NULL)
		return (0);
	l = binary_tree_height(tree->left);
	r = binary_tree_height(tree->right);
	if (l == r)
		return (1);
	return (0);
}
