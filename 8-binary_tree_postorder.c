#include "binary_trees.h"

/**
 * binary_tree_postorder - A function goes through
 * a binary tree using post-order traversal
 *
 * @tree: The binary tree's root
 * @func: A pointer to a function to be called for each node
 * Return: void
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
