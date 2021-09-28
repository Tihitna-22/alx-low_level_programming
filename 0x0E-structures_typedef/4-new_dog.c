#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - create new dog
 *@name:char
 *@age:float
 *@owner: char
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{

	char *name2;
	char *owner2;
	int n, o, i, j;
	struct dog *kiti;

        kiti = malloc(sizeof(struct dog));
	if (kiti == NULL)
		return (NULL);
	for (n = 0; *(name + n) != '\0'; n++)
		;
	for (o = 0; *(owner + o) != '\0'; o++)
		;
	name2 = malloc(n + 1);
	if (name2 != NULL)
	{
		for (i = 0; i <= n; i++)
			*(name2 + i) = *(name + i);
	} else
	{
		free(kiti);
		return (NULL);
	}
	owner2 = malloc(o + 1);
	if (owner2 != NULL)
	{
		for (j = 0; j <= o; j++)
			*(owner2 + j) = *(owner + j);
	} else
	{
		free(name2);
		free(kiti);
		return (NULL);
	}
	kiti->name = name2;
	kiti->age = age;
	kiti->owner = owner2;
	return (kiti);

}
