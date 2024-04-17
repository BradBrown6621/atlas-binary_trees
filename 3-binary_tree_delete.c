#include "binary_trees.h"

/**
 * binary_tree_delete - Free's the memory for a binary_tree_t
 *
 * @tree: The tree to be deleted
 *
 * Description:
 * [TRAVERSAL]
 * - This algorithm uses post-order traversal to traverse a binary tree
 *
 * Return: NOTHING.
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
	{
		return;
	}

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	tree->parent = NULL;
	tree->left = NULL;
	tree->right = NULL;

	free(tree);
}
