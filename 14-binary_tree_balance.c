#include "binary_trees.h"

/**
 * measure_recursive_height - Measures the height of
 * a binary tree recursively.
 *
 * @tree: Root of the tree.
 * Return: Height of the tree.
 */
size_t measure_recursive_height(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

	if (!tree)
		return (0);

	left_height = measure_recursive_height(tree->left);
	right_height = measure_recursive_height(tree->right);

	if (left_height > right_height)
		return (left_height + 1);

	return (right_height + 1);
}

/**
 * binary_tree_height - Returns the height of
 * a binary tree using recursive_height.
 *
 * @tree: Root of the tree.
 * Return: Height of the tree or 0 if the tree is NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (-1);

	return (measure_recursive_height(tree) - 1);
}

/**
 * binary_tree_balance - Returns the balance of
 * a binary tree using height difference.
 *
 * @tree: Root of the tree.
 * Return: Balance factor of the tree or 0 if the tree is NULL.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
