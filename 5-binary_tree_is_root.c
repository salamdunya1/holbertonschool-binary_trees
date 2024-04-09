#include "binary_trees.h"
/**
 * binary_tree_is_root - checks if the node is root or not
 * @node: pointer to the node
 * Return: 1
 * On error, 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->parent == NULL)
		return (1);
	else
		return (0);
}
