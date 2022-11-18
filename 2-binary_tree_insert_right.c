#include "binary_trees.h"

/**
 * binary_tree_insert_right - a function to insert to the right node
 * @parent: a pointer to the node to insert the right-child in
 * @value: is the value to store in the new node
 *
 * Return: pointer to the new node or null on failure
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (parent == NULL)
	{
		return (NULL);
	}

	newNode = malloc(sizeof(binary_tree_t));
	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->parent = parent;
	newNode->n = value;
	newNode->left = NULL;

	if (parent->right == NULL)
	{
		parent->right = newNode;
		newNode->right = NULL;
	}
	else
	{
		newNode->right = parent->right;
		parent->right->parent = newNode;
		parent->right = newNode;
	}
	return (newNode);
}
