#include "binary_trees.h"

/**
 * binary_tree_leaves - Finds the number of leaves of a binary tree "tree"
 *
 * @tree: The binary tree to be evaluated
 *
 * Return: The number of leaves of a tree, or 0 if the binary tree is "NULL"
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t isLeaf = 0;

	if (!tree)
	{
		return (0);
	}
	if (!tree->left && !tree->right)
	{
		isLeaf++;
	}

	return (
			binary_tree_leaves(tree->left)
			+ binary_tree_leaves(tree->right)
			+ isLeaf
		);
}
