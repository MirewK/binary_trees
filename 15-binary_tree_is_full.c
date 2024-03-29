#include "binary_trees.h"

/**
 * is_full_recursive - checks if a binary tree is fully recursive
 * @tree: root node pointer of the tree to be checked
 *
 * Return: 0 if tree is not full and 1 otherwise
 */
int is_full_recursive(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		if ((tree->left != NULL && tree->right == NULL) || 
			(tree->left == NULL && tree->right != NULL) || 
			is_full_recursive(tree->left) == 0 || 
			is_full_recursive(tree->right) == 0)
				return (0);
	}
	return (1);
}

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: root node pointer of the tree to be checked
 *
 * Return: 0 if tree is not full/NULL or 1 otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (is_full_recursive(tree));
}
