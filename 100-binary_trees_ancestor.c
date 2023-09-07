#include "binary_trees.h"

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
																		 const binary_tree_t *second)
{
	const binary_tree_t *temp;

	if (!first || !second)
		return (NULL);

	while (first)
	{
		temp = second;

		while (temp)
		{
			if (temp == first)
				return ((binary_tree_t *)first);
			temp = temp->parent;
		}

		first = first->parent;
	}

	return (NULL);
}
