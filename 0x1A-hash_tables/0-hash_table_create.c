#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_create - create hash with the given size
 * @size: the size of the array
 * Return: the new hash_table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *temp = NULL;

	if (size == 0)
		return (NULL);

	temp = malloc(sizeof(hash_table_t));

	if (temp == NULL)
		return (NULL);

	temp->size = size;
	temp->array = malloc(size * sizeof(hash_node_t *));

	if (temp->array == NULL)
		return (NULL);
	memset(temp->array, 0, size * sizeof(hash_node_t *));
	return (temp);
}
