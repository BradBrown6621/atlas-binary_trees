#include "binary_trees.h"

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
		/** logically, if we have entered this part of the function,
		 * at least 1 child should be missing.
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
