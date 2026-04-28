#include "binary_trees.h"

/**
 * tree_height - measures tree height
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
 * is_perfect_recursive - checks if tree is perfect recursively
 * @tree: pointer to node
 * @depth: tree depth
 * @level: current level
 *
 * Return: 1 if perfect, 0 otherwise
 */
int is_perfect_recursive(const binary_tree_t *tree, size_t depth, size_t level)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (level == depth);

	if (tree->left == NULL || tree->right == NULL)
		return (0);

	return (is_perfect_recursive(tree->left, depth, level + 1) &&
		is_perfect_recursive(tree->right, depth, level + 1));
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to root
 *
 * Return: 1 if perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (is_perfect_recursive(tree, tree_height(tree), 1));
}
