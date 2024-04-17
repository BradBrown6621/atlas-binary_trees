#include "binary_trees.h"

/**
 * binary_tree_in - Runs a function on every element of a binary tree
 *
 * @tree: The tree to be traversed/ran a function on
 * @func: The function to be performed on each node
 *
 * Description:
 * [TRAVERSAL]
 * This function uses an in-order traversal method, which means it:
 *
 * - Recursively traverses left
 * - Performs an operation on the node
 * - Recursively traverses right
 *
 * Return: NOTHING
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
	{
		return;
	}

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
