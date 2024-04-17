#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node into the left of a binary tree
 *
 * @parent: The tree that we want to insert into the left of
 * @value: The value for "new" node
 *
 * Description:
 * This function uses 'binary_tree_node()' to create a new node for a binary
 * tree. Since 'binary_tree_node()' simply creates/initializes the node to
 * be inserted, we must still set the new node as the child of the "parent"
 * tree. Since "parent" might also have it's own left child, we must set
 * "parent->left" to be the child of the newly created node such that the
 * final configuration looks like this:
 *
 * (x)--.                  (x)--.
 *     (y)     ----->         (new)--.
 *                                  (y)
 *
 * Return: A pointer to the "new" node, or "NULL" if malloc fails or "parent"
 * is "NULL"
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new = NULL;

	if (!parent)
	{
		return (NULL);
	}

	new = binary_tree_node(parent, value);

	if (parent->left)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	parent->left = new;

	return (new);
}
