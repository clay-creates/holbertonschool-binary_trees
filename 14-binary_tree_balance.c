#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance of
 *
 * Return: returns the balance of tree, or 0 if NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_balance(tree->left);
	right_height = binary_tree_balance(tree->right);

	if (tree->left != NULL)
	{
		left_height = left_height + 1;
	}
	else
	{
		left_height = 0;
	}

	if (tree->right != NULL)
	{
		right_height = right_height + 1;
	}
	else
	{
		right_height = 0;
	}

	if (left_height > right_height)
		return left_height - right_height;
	else
		return right_height - left_height;
}
