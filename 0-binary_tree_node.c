#include "binary_trees.h"

/**
 * binary_tree_node - Creates a new binary tree node.
 *
 * @parent_node: Pointer to the parent node.
 * @node_value: Value to be assigned to the new node.
 *
 * Return: Pointer to the newly created node, or NULL on failure.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent_node, int node_value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	new_node->parent = parent_node;
	new_node->n = node_value;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}
