#include "binary_trees.h"

int binary_tree_balance(const binary_tree_t *tree)
{
	int balance = 0;

	if (!tree)
	{
		return (0);
	}

	if (tree->left)
	{
		balance++;
	}
	if (tree->right)
	{
		balance--;
	}

	balance = balance + binary_tree_balance(tree->left) -
		binary_tree_balance(tree->right);

	return (balance);
}
