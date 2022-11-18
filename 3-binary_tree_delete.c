#include "binary_trees.h"

/**
 * binary_tree_delete - a function that deletes
 * an entire binary tree
 *
 * @tree: the pointer to the root node of the binary tree
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return;
	}
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
