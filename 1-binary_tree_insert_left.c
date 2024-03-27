#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as a left child of another in binary tree
 * @parent: a node pointer to insert the left child
 * @value: value of the new node
 *
 * Return: on success pointer to the new node and NULL on error
 *
 * Description: if parent has a left-child, new node replace it and add it as a left-child of it self
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new_node->left = parent->left;
		parent->left->parent = new_node;
	}
	parent->left = new_node;

	return (new_node);
}
