#include "hash_tables.h"
/**
 * hash_table_set - entry point
 * @ht: hash_table_t variable
 * @key: const char variable
 * @value: const char variable
 *
 * Return: int variable
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int index;
	hash_node_t *temp, *new;

	if (ht == NULL || key[0] == '\0')
		return (0);
	index = key_index((unsigned char *)key, ht->size);

	temp = malloc(sizeof(hash_node_t));
	if (temp == NULL)
		return (0);

	new = ht->array[index];
	if (ht->array[index] != NULL && strcmp(key, (const char *)new->key) == 0)
	{
		free(new->value);
		free(temp);
		new->value = strdup(value);
		return (1);
	}
	temp->key = strdup(key);
	temp->value = strdup(value);
	temp->next = ht->array[index];
	ht->array[index] = temp;

	return (1);
}
