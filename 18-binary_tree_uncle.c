#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds a binary tree node's sibling (if it exists)
 *
 * @node: The binary tree node to be evaluated
 *
 * Return: A pointer to the sibling node, or 0 if it doesn't exist or if
 * "node" is "NULL".
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
	{
		return (NULL);
	}

	if (node->parent->left == node)
	{
		return (node->parent->right);
	}
	if (node->parent->right == node)
	{
		return (node->parent->left);
	}
	return (NULL);
}

/**
 * binary_tree_uncle - Finds a binary tree node's uncle (if it exists)
 *
 * @node: The binary tree node to be evaluated
 *
 * Description:
 * ["UNCLE-NESS"]
 *
 * A binary tree node is the "uncle" of a "node" if it is the "sibling" of
 * "node"'s "parent", hence why i just reuse the "binary_tree_sibling()"
 * function I made previously.
 *
 * Return: A pointer to the uncle node, or 0 if it doesn't exist or if
 * "node" is "NULL".
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node)
	{
		return (NULL);
	}
	return (binary_tree_sibling(node->parent));
}
