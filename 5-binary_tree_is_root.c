#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a binary tree node is a root node
 *
 * @node: The "node" to be checked
 *
 * Description:
 * A binary tree is considered a "root" if it not a child of
 * any "parent" node ("node->parent" is set to "NULL").
 * For example:
 *
 *      (x)--.
 *          (y)
 *
 * "(y)" is considered a child of "(x)", so it cannot be a root node. "(x)"
 * is not a child of any node, so it has no parent. This makes "(x)" a "root"
 * node.
 *
 * Return: 0 if "node" is not a "root" node, otherwise 1.
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
	{
		return (0);
	}

	if (node->parent)
	{
		return (0);
	}
	return (1);
}
