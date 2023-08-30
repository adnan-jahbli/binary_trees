#include "binary_trees.h"

/**
 * is_tree_parent - Checks if a node is a parent.
 *
 * @node: Pointer to the node to check.
 * Return: 1 if the node is a parent, otherwise 0.
 */
int is_tree_parent(const binary_tree_t *node)
{
	int is_parent = 0;

	if (node && (node->left || node->right))
		is_parent = 1;

	return (is_parent);
}

/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree.
 *
 * @tree: Root of the tree.
 * Return: Number of parent nodes in the tree, or 0 if the tree is NULL.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (is_tree_parent(tree))
		return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1);

	return (0);
}

