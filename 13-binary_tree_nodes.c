#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: pointer to the root nofe of the tree to count nodes from
 *
 * Return: returns the node count, or 0 if NULL
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t node_count = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left != NULL || tree->right != NULL)
	{
		node_count++;
	}

	node_count += binary_tree_nodes(tree->left);
	node_count += binary_tree_nodes(tree->right);

	return (node_count);
}
