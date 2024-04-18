#include "binary_trees.h"

/**
 * binary_tree_depth - Finds the depth of a given node ("tree")
 *
 * @tree: The node to find the depth of in its tree
 *
 * Return: The depth of the node, or 0 if "tree" is "NULL"
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	const binary_tree_t *current;
	size_t depth = 0;

	if (!tree)
	{
		return (0);
	}
	current = tree;

	while (current->parent)
	{
		current = current->parent;
		depth++;
	}
	return (depth);
}
