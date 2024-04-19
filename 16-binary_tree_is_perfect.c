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

/**
 * binary_tree_balance - Calculates the current balance of a binary tree
 *
 * @tree: The tree to be evaluated
 *
 * Description:
 * [BALANCE]
 * The balance factor of a tree is the height of its left and right subtrees.
 * - If the left is heavier than the right, it returns +n
 * - If the right is heavier than the left, it returns -n
 * - If both heights are the same, it returns 0
 *
 * Return: The balance of a tree.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_balance = 0;
	int right_balance = 0;

	if (!tree)
	{
		return (0);
	}

	if (tree->left)
		left_balance = binary_tree_height(tree->left) + 1;

	if (tree->right)
		right_balance = binary_tree_height(tree->right) + 1;

	return (left_balance - right_balance);
}

/**
 * binary_tree_is_full - Checks if a binary tree is considered "full"
 *
 * @tree: The tree to be evaluated.
 *
 * Description:
 * ["FULL"]
 * A binary tree is considered "full" if every node has either
 * 0 or 2 children. Because each subtree is itself a tree, any subtree in a
 * "full" tree is itself considered a "full" tree, for if any subtree is
 * itself not "full", then the whole tree is itself not "full".
 *
 * Return: 1 if the tree is "full", 0 if it is not (or if the tree is "NULL"
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
	{
		return (0);
	}

	if (!tree->left && !tree->right)
	{
		return (1);
	} else if (!tree->left || !tree->right)
	{
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

/**
 * binary_tree_is_perfect - Checks if a binary tree is considered "perfect"
 *
 * @tree: The binary tree to be evaluated
 *
 * Description:
 * ["PERFECT"]
 *
 * A binary tree is considered "perfect" if it adheres to the following
 * criteria:
 *
 * - The tree is a full tree, and
 * - The tree has a balance factor of +0
 *
 * This is why I am utilizing the "binary_tree_is_full()" function and
 * "binary_tree_balance()" function as the engines for this function.
 * I definitely COULD have written the functionality for this from scratch,
 * but i'm lazy B).
 *
 * Return: 1 if it is "perfect", 0 if not (or if "tree" is "NULL")
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
	{
		return (0);
	}

	if (binary_tree_balance(tree) != 0)
	{
		return (0);
	}

	if (binary_tree_is_full(tree))
	{
		return (1);
	}
	return (0);
}
