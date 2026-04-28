#include "binary_trees.h"

/**
 * tree_height - measures height of a binary tree
 * @tree: pointer to root
 *
 * Return: height
 */
size_t tree_height(const binary_tree_t *tree)
{
	size_t left;
	size_t right;

	if (tree == NULL)
		return (0);

	left = tree_height(tree->left);
	right = tree_height(tree->right);

	if (left > right)
		return (left + 1);

	return (right + 1);
}

/**
 * binary_tree_balance - measures balance factor
 * @tree: pointer to root
 *
 * Return: balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return ((int)tree_height(tree->left) - (int)tree_height(tree->right));
}
