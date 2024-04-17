#include "binary_trees.h"

/**
 * binary_tree_height - Finds the height of a node in a binary tree
 *
 * @tree: The tree node to be evaluated
 *
 * Description:
 * [GENERAL]
 *
 * This recursive function can find the height of any node in a tree, as
 * it treats the node inserted as its parameter as the "root" node, even
 * if this is not actually the case.
 *
 * [TRAVERSAL]
 *
 * This function uses post-order traversal (LRP)
 *
 * Return: The height of the node in the tree (or "NULL" if the node doesn't
 * exist).
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (!tree || (!tree->left && !tree->right))
	{
		return (0);
	}

	left = binary_tree_height(tree->left) + 1;
	right = binary_tree_height(tree->right) + 1;

	if (left > right)
	{
		return (left);
	}
	return (right);
}
