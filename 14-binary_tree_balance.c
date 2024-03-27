#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Return: height on success and 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
        if (tree)
        {
                size_t x = 0, y = 0;

                x = tree->left ? 1 + binary_tree_height(tree->left) : 0;
                y = tree->right ? 1 + binary_tree_height(tree->right) : 0;
                return ((x > y) ? x : y);
        }
        return (0);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: root node pointer of the tree to measure the balance factor
 *
 * Return: balance factor on success or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));

	return (0);
}
