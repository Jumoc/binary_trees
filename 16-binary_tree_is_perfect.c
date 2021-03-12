#include "binary_trees.h"

/**
 * findADepth - finds if the left-most depth of a tree
 *
 * @tree: tree to operate
 *
 * Return: 1 if perfect, 0 otherwise
 */
int findADepth(const binary_tree_t *tree)
{
   int d = 0;
   while (tree != NULL)
   {
      d++;
      tree = tree->left;
   }
   return d;
}

/**
 * isPerfect - checks if a tree is full
 *
 * @tree: tree to operate
 * @d: depth of the tree
 * @level: counter of levels
 *
 * Return: 1 if perfect, 0 otherwise
 */
int isPerfect(const binary_tree_t *tree, int d, int level)
{
    if (tree == NULL)
        return (1);

    if (tree->left == NULL && tree->right == NULL)
        return (d == level+1);

    if (tree->left == NULL || tree->right == NULL)
        return 0;

    return isPerfect(tree->left, d, level+1) &&
           isPerfect(tree->right, d, level+1);
}

/**
 * binary_tree_is_perfect - checks if a tree is perfect
 *
 * @tree: tree to operate
 *
 * Return: 1 if perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int d = findADepth(tree);
   return isPerfect(tree, d, 0);
}
