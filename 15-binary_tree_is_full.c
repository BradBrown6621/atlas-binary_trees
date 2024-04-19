#include "binary_trees.h"

/**
 * binary_tree_is_full - Check if a binary tree is considered "full"
 *
 * @tree: The tree to be evaluated
 *
 * Description:
 * ["FULL"]
 * A binary tree is considered "full" if every node has either
 * 0 or 2 children. Because each subtree is a tree, any subtree in a "full"
 * tree is itself considered a "full" tree, for if any subtree is
 * itself not "full", then the whole tree it is in is not "full".
 *
 * Return: 1 if the tree is full, 0 if it is not full or if the tree is "NULL"
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
	{
		return (0);
	}

	if (!tree->left && !tree->right) /** checking for 0 children */
	{
		return (1);
	} else if (!tree->left || !tree->right)
	{
		/**
		 * logically, if we have entered this part of the function,
		 * at least 1 child should be missing, therefore making this
		 * subtree not a "full" tree.
		 */
		return (0);
	}

	if (binary_tree_is_full(tree->left) == 0)
	{
		return (0);
	}
	if (binary_tree_is_full(tree->right) == 0)
	{
		return (0);
	}
	return (1);
}
