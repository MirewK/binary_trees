#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * @parent: parent pointer for the new node to create
 * @value: value of the new node
 *
 * Return: on success - a pointer to the new node and NULL on error
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}
