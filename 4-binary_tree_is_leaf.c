#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if "node" is a leaf of a binary tree.
 *
 * @node: The binary tree to be checked.
 *
 * Description:
 * A binary tree is considered a "leaf" if it has 0 children.
 *
 * Return: 0 if not a leaf, otherwise 1.
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
	{
		return (0);
	}
	if (node->left || node->right)
	{
		return (0);
	}
	return (1);
}
