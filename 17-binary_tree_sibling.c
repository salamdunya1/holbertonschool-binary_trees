#include "binary_trees.h"
/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: a pointer to the node to find the sibling
 * Return: the sibling if there is one, else NULL
 * On error, NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *l, *r;

	if (node == NULL || node->parent == NULL)
		return (NULL);
	l = node->parent->left;
	r = node->parent->right;
	if (node == l && r)
		return (r);
	else if (node == r && l)
		return (l);
	return (NULL);
}
