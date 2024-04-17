#include "binary_trees.h"

/**
 * binary_tree_postorder - Runs a function on every element of a binary tree
 *
 * @tree: The tree to be traversed/ran a function on
 * @func: The function to be performed on each node
 *
 * Description:
 * [TRAVERSAL]
 * This function uses a post-order traversal method, which means it:
 *
 * - Recursively traverses left
 * - Recursively traverses right
 * - Performs an operation on the node
 *
 * Return: NOTHING
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
	{
		return;
	}

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
