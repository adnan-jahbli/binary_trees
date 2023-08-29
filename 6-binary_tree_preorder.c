#include "binary_trees.h"

/**
 * binary_tree_preorder - A function that goes through
 * a binary tree using pre-order traversal
 *
 * @tree: the binary tree's root
 * @func: A pointer to a function used to call for each node
 * Return: void.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	func(tree->n);

	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
