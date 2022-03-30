#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * size-amount of elements the array contain
 * value - value to be search
 * Return: Always EXIT_SUCCESS
 */

int linear_search(int *array, size_t size, int value)
{
  size_t i;
  int temp;

  for (i = 0; i < size; i++)
    {
      temp = array[i];
      printf("value checked array[%ld] = [%d]\n", i, temp);
      if (temp == value)
	return i;
    }
      return -1;
}
