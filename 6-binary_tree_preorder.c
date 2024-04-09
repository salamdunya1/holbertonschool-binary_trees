#include "binary_trees.h"
/**
 * binary_tree_preorder - prints the tree nodes by using preorder traversal
 * @tree: the pointer to the tree node
 * @func: function pointer to the print function
 * Return: nothing
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL || *func != NULL)
	{
		(*func)(tree->n);
		if (tree->left != NULL)
			binary_tree_preorder(tree->left, &print_num);
		if (tree->right != NULL)
			binary_tree_preorder(tree->right, &print_num);
	}
}
