#include "binary_trees.h"


/**
 * binary_tree_balance - returns the amounts of leaves on a given tree
 *
 * @tree: tree to operate
 *
 * Return: amount of leaves
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int height_l;
	int height_r;

	if (!tree)
		return (0);

	height_l = tree->left ? 1 + binary_tree_balance(tree->left) : 0;
	height_r = tree->right ? 1 + binary_tree_balance(tree->right) : 0;
	return (height_l - height_r);
}
