#include "binary_trees.h"

/**
 * binary_tree_preorder - traverse a binary tree in preorder
 *
 * @tree: tree to traverse
 * @func: function to print the node
 *
 * Return: void
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
