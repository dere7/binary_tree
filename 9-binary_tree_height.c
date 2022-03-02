#include "binary_trees.h"

/**
 * max - finds maximum of two number
 * @s1: integer
 * @s2: integer
 * Return: maximum of s1 and s2
 */
int max(int s1, int s2)
{
	return (s1 > s2 ? s1 : s2);
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: a pointer to the root node of the tree
 * Return: height of tree if tree is null retrun 0;
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL || !(tree->left || tree->right)) /* if leaf node */
		return (0);
	return (max(binary_tree_height(tree->left),
		binary_tree_height(tree->right)) + 1);
}
