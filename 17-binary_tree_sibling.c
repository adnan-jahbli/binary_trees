#include "binary_trees.h"

/**
 * binary_tree_sibling - A function that finds
 * the sibling of a given node.
 *
 * @node: Node for which to find the sibling.
 * Return: Pointer to the sibling node.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || node->parent == NULL)
		return (NULL);

	if (node->parent->left != node)
		return (node->parent->left);

	return (node->parent->right);
}
