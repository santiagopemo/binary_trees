#include "binary_trees.h"

/**
 * binary_tree_depth - function that measures
 * the depth of a node in a binary tree
 * @tree: node of a tree
 * Return: If tree is NULL the function return 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t deep;

	if (tree == NULL)
		return (0);
	for (deep = 0; tree->parent; deep++)
		tree = tree->parent;
	return (deep);
}
