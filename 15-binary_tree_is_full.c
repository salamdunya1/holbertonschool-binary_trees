#include "binary_trees.h"
/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if full, otherwise 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int r = 1;

	if (tree == NULL)
		return (0);
	if (r == 0)
		return (r);
	if ((!tree->left && tree->right) || (tree->left && !tree->right))
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	r = binary_tree_is_full(tree->left);
	r = binary_tree_is_full(tree->right);
	return (r);
}
