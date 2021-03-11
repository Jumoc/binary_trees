#include "binary_trees.h"

/**
 * max - calcultes the max between two numbers
 *
 * @a: number a
 * @b: number b
 *
 * Return: the max
 */
int max(int a, int b)
{
	return (a >= b ? a : b);
}

/**
 * height - calcultes the height of a given tree
 *
 * @tree: tree to operate
 *
 * Return: amount of leaves
 */
int height(binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (1 + max(height(tree->left), height(tree->right)));
}

/**
 * binary_tree_balance - returns the amounts of leaves on a given tree
 *
 * @tree: tree to operate
 *
 * Return: amount of leaves
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left;
	int right;

	if (!tree)
		return (0);

	left = height(tree->left);
	right = height(tree->right);
	return (left - right);
}
