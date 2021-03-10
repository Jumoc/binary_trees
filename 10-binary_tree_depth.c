#include "binary_trees.h"

/**
 * binary_tree_depth - gets the height of a binary tree
 *
 * @tree: node of the tree to get its depth
 *
 * Return: the depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	while (tree && tree->parent)
	{
		depth++;
		tree = tree->parent;
	}
	return (depth);
}
