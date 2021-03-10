#include "binary_trees.h"

/**
 * binary_tree_node - creates a node of a binary tree
 *
 * @parent: parent of the node to add
 * @value: value of the new node
 *
 * Return: returns the created node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *n_node;

	n_node = malloc(sizeof(binary_tree_t));
	if (!n_node)
		return (NULL);

	n_node->n = value;
	n_node->left = NULL;
	n_node->right = NULL;
	n_node->parent = parent;

	return (n_node);
}
