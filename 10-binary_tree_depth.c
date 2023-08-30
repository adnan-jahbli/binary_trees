#include "binary_trees.h"

/**
 * sub_func - a function that measures
 * the depth of a node in a binary tree
 * @tree: the binary tree's root
 * Return: the depth of a node in a binary tree
 */
size_t sub_func(const binary_tree_t *tree)
{
	if (!tree)
		return (-1);

	return (sub_func(tree->parent) + 1);
}

/**
 * binary_tree_depth - calls sub_func to calculate
 * and return the depth of a node in a binary tree.
 *
 * @tree: Pointer to the root node of the tree.
 *
 * Return: Depth of the tree, or 0 if tree is NULL.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (sub_func(tree));
}
