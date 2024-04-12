#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: height of the tree
 * On error, 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int l = 0, r = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
		l = binary_tree_height(tree->left);
	if (tree->right != NULL)
		r = binary_tree_height(tree->right);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	else if (r >= l)
		return (r + 1);
	else if (r < l)
		return (l + 1);
	return (0);
}
/**
 * binary_tree_balance -  measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: the balance of the tree
 * On error, 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int l = 0, r = 0;

	if (tree == NULL)
		return (0);
	if (tree->left)
		l = binary_tree_height(tree->left) + 1;
	if (tree->right)
		r = binary_tree_height(tree->right) + 1;
	return (l - r);
}
