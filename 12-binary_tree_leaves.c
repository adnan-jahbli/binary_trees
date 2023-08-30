#include "binary_trees.h"

/**
 * is_leaf_node - Checks if a node is a leaf.
 *
 * @node: Pointer to the node to check.
 * Return: 1 if the node is a leaf, otherwise 0.
 */
int is_leaf_node(const binary_tree_t *node)
{
	int is_leaf = 0;

	if (node && !(node->left) && !(node->right))
		is_leaf = 1;

	return (is_leaf);
}

/**
 * binary_tree_leaves - Counts the leaves in a binary tree.
 *
 * @tree: Root of the tree.
 * Return: Number of leaves in the tree, or 0 if the tree is NULL.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (is_leaf_node(tree))
		return (1);

	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
