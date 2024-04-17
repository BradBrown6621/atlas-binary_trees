#include "binary_trees.h"

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
