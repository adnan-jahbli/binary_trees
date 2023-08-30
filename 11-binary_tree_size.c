#include "binary_trees.h"

/**
 * binary_tree_size - A function that measures the size of a binary tree
 *
 * @tree: the tree's root
 * Return: the size of the binary tree or
 * returns 0 if tree is NULL.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}
