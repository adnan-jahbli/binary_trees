#include "binary_trees.h"

/**
 * is_node_leaf - Checks if a node is a leaf.
 *
 * @node: Pointer to the node to check.
 * Return: 1 if the node is a leaf, otherwise 0.
 */
int is_node_leaf(const binary_tree_t *node)
{
	int is_leaf = 0;

	if (node && !(node->left) && !(node->right))
		is_leaf = 1;

	return (is_leaf);
}

/**
 * is_node_parent_full - Checks if a node is a full parent.
 *
 * @node: Pointer to the node to check.
 * Return: 1 if the node is a full parent, otherwise 0.
 */
int is_node_parent_full(const binary_tree_t *node)
{
	int is_full_parent = 0;

	if (node && node->left && node->right)
		is_full_parent = 1;

	return (is_full_parent);
}

/**
 * binary_tree_is_full - Checks if a binary tree is full recursively.
 *
 * @tree: Root of the tree.
 * Return: 1 if the tree is full, 0 otherwise.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (is_node_leaf(tree))
		return (1);

	if (is_node_parent_full(tree))
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

	return (0);
}

