#include "binary_trees.h"

/**
 * sub_func - a function that measures
 * the height of a binary tree
 * @tree: the binary tree's root
 * Return: the height
 */
size_t sub_func(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

	if (!tree)
		return (0);

	left_height = sub_func(tree->left);
	right_height = sub_func(tree->right);

	return (1 + (left_height > right_height ? left_height : right_height));
}
/**
 * binary_tree_height - Measures the height of a binary tree.
 *
 * @tree: Pointer to the root node of the tree.
 *
 * Return: Height of the tree, or 0 if tree is NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (sub_func(tree) - 1);
}
