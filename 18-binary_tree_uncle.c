#include "binary_trees.h"

/**
 * find_binary_tree_sibling - Finds the sibling of a node.
 *
 * @node: Node for which to find the sibling.
 * Return: Pointer to the sibling node.
 */
binary_tree_t *find_binary_tree_sibling(binary_tree_t *node)
{
	if (!node || node->parent == NULL)
		return (NULL);

	if (node->parent->left != node)
		return (node->parent->left);

	return (node->parent->right);
}

/**
 * binary_tree_uncle - Finds the uncle of a node.
 *
 * @node: Node for which to find the uncle.
 * Return: Pointer to the uncle node.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || node->parent == NULL)
		return (NULL);

	return (find_binary_tree_sibling(node->parent));
}
