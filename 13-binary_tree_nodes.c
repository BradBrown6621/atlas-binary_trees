#include "binary_trees.h"

/**
 * binary_tree_nodes - Finds the number of nodes of a binary tree "tree"
 *
 * @tree: The binary tree to be evaluated
 *
 * Return: The number of nodes of a tree, or 0 if the binary tree is "NULL"
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t isNode = 0;

	if (!tree)
	{
		return (0);
	}
	if (tree->left || tree->right)
	{
		isNode++;
	}

	return (
			binary_tree_nodes(tree->left)
			+ binary_tree_nodes(tree->right)
			+ isNode
		);
}
