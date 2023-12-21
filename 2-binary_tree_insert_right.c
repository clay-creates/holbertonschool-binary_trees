#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as right-child of another node
 * @parent: pointer to node to insert right-child in
 * @value: value to store in new node
 *
 * Return: returns pointer to created node, or NULL on fail
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));

	if (new == NULL || parent == NULL)
	{
		return (NULL);
	}

	new->n = value;

	new->left = NULL;
	new->right = NULL;

	new->parent = parent;

	if (parent->right != NULL)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}

	parent->right = new;

	return (new);
}
