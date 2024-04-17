#include "binary_trees.h"

/**
 * binary_tree_preorder - Runs a function on every element of a binary tree
 *
 * @tree: The tree to be traversed/ran a function on
 * @func: The function to be performed on each node
 *
 * Description:
 * [TRAVERSAL]
 * This function uses a pre-order traversal method, which means it:
 *
 * - Performs operations on the current node
 * - Recursively traverses left
 * - Recursively traverses right
 *
 * Return: NOTHING
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
	{
		return;
	}

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
