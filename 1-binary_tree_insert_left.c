#include "binary_trees.h"

/**
 * binary_tree_insert_left - a function that inserts at the left node
 * @parent: the parents of the current node
 * @value: the value to be inserted
 *
 * Return: a pointer to the new node or NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = malloc(sizeof(binary_tree_t));

	if (newNode == NULL)
	{
		return (NULL);
	}
	if (parent == NULL)
	{
		return (NULL);
	}

	newNode->parent = parent;
	newNode->n = value;
	newNode->right = NULL;

	if (parent->left == NULL)
	{
		parent->left = newNode;
		newNode->left = NULL;
	}
	else
	{
		newNode->left = parent->left;
		parent->left->parent = newNode;
		parent->left = newNode;
	}
	return (newNode);
}
