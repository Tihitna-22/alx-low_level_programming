#include "hash_tables.h"

/**
 * key_index - gives index of a key
 * @key: is a key
 * @size: size of the array of the hash table
 * Return: index at which the key stored in the array of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
return (hash_djb2(key) % size);
}
