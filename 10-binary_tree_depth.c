#include "binary_trees.h"

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
