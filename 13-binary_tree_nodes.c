#include "binary_trees.h"

/**
 * binary_tree_nodes - returns the amounts of leaves on a given tree
 *
 * @t: tree to operate
 *
 * Return: amount of leaves
 */
size_t binary_tree_nodes(const binary_tree_t *t)
{
	if (!t)
		return (0);

	if (t->left || t->right)
		return (binary_tree_nodes(t->left) + 1 + binary_tree_nodes(t->right));
	else
		return (binary_tree_nodes(t->left) + binary_tree_nodes(t->right));
}
