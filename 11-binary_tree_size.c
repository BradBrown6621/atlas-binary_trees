#include "binary_trees.h"

/**
 * binary_tree_size - Finds the size of a binary tree "tree"
 *
 * @tree: The binary tree to be evaluated
 *
 * Description:
 * [SIZE]
 * The "size" of a binary tree is the total number of nodes in a given tree.
 * We only consider the node itself and all it's children when evaluating,
 * so even though "tree" could be a subtree of a bigger binary tree, we treat
 * it as its own tree in this function
 *
 * Return: The size of a tree, or 0 if the binary tree is "NULL"
 */

size_t binary_tree_size(const binary_tree_t *tree)
{

	if (!tree)
	{
		return (0);
	}

	return (
			binary_tree_size(tree->left)
			+ binary_tree_size(tree->right)
			+ 1
		);
}
