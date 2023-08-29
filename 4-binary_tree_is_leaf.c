#include "binary_trees.h"

/**
 * binary_tree_is_leaf - A function that checks if a node is a leaf
 *
 * @node: A pointer to the node to check
 * Return: 1 if the node is leaf, otherwise it returns 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	int leaf_node = 0;

	if (node && !(node->left) && !(node->right))
		leaf_node = 1;

	return (leaf_node);
}
