#include "binary_trees.h"

/**
 * binary_tree_is_root - A function that checks if a node is a root
 *
 * @node: A pointer to the node to be checked
 * Return: 1 if the node is root, otherwise it returns 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	int root_node = 0;

	if (node && !(node->parent))
		root_node = 1;

	return (root_node);
}
