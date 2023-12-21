#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as left-child of another node
 * @parent: pointer to node to insert left-child in
 * @value: value to store in new node
 *
 * Return: returns pointer to created node, or NULL on fail
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
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

	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}

	parent->left = new;

	return (new);
}
