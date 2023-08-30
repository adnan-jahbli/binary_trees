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
 * calculate_height - Measures the height of a tree.
 *
 * @tree: Root of the tree.
 * Return: Height.
 */
int calculate_height(const binary_tree_t *tree)
{
	int left = 0;
	int right = 0;

	if (tree == NULL)
		return (-1);

	left = calculate_height(tree->left);
	right = calculate_height(tree->right);

	if (left > right)
		return (left + 1);

	return (right + 1);
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 *
 * @tree: Root of the tree.
 * Return: 1 if the tree is perfect, 0 otherwise.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree && calculate_height(tree->left) == calculate_height(tree->right))
	{
		if (calculate_height(tree->left) == -1)
			return (1);

		if (is_node_leaf(tree->left) && is_node_leaf(tree->right))
			return (1);

		if (is_node_parent_full(tree))
			return (binary_tree_is_perfect(tree->left) &&
				binary_tree_is_perfect(tree->right));
	}

	return (0);
}
