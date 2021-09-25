#include "main.h"
#include <stdlib.h>

/**
 * array_range - array that contains numbers
 * from min to max.
 *
 * @min: first number.
 * @max: last number.
 * Return: pointer to array.
 **/

int *array_range(int min, int max)
{
  int i, nb_elements, nb;
  int *p;
if (min > max)
  return (NULL);
 nb_elements = max - min + 1;
 p = malloc(sizeof(int) * nb_elements);
 if (p == NULL)
   return (NULL);
 nb = min;
 for (i = 0; i < nb_elements; i++)
   {
     p[i] = nb;
     nb++;
   }
 return (p);
}
