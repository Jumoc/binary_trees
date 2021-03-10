#include "binary_trees.h"

/**
 * binary_tree_postorder - traverse a binary tree in posorder
 *
 * @tree: tree to traverse
 * @func: function to print the node
 *
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
