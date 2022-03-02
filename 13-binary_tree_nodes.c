#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child
 * @tree: a pointer to the root node of the tree
 * Return: nodes of tree. if tree is null retrun 0;
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL || !(tree->left || tree->right))
		return (0);
	return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1);
}
