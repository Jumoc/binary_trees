#include "binary_trees.h"

/**
 * binary_tree_leaves - returns the amounts of leaves on a given tree
 *
 * @tree: tree to operate
 *
 * Return: amount of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
        return (0);

    if (!tree->left && !tree->right)
        return(binary_tree_leaves(tree->left) + 1 + binary_tree_leaves(tree->right));
    else
        return(binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
