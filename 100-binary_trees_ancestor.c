#include "binary_trees.h"

/**
 * binary_trees_ancestor - function that finds the
 * lowest common ancestor of two nodes
 * @first: first node
 * @second: second node
 * Return: pointer to the lowest common ancestor node
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
									 const binary_tree_t *second)
{
	binary_tree_t *tf, *ts;

	if (first == NULL || second == NULL)
		return (NULL);
	for (tf = (binary_tree_t *)first; tf; tf = tf->parent)
	{
		for (ts = (binary_tree_t *)second; ts; ts = ts->parent)
		{
			if (tf == ts)
				return (tf);
		}
	}
	return (NULL);
}
