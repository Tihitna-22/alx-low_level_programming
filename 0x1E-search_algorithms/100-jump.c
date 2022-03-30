#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * jump_search - searches for a value in a sorted array of integers
 * @array: a pointer to the first element of the array to search 
 * @size: number of elements in array
 * @value: value to search for
 * Return:  first index where value is located or -1 if value is not
 */
int jump_search(int *array, size_t size, int value)
{
  size_t jump_step, i, index;

  if (array == NULL)
    return (-1);

  jump_step = sqrt(size);

  i = 0;
  while (i < size && array[i] < value)
    {
      printf("Value checked array[%d] = [%d]\n", (int)i, array[i]);
      if (array[i] == value)
	{
	  printf("Value found between indexes [%d] and [%d]\n",
		 (int)(i - jump_step), (int)i);
	  return (i);
	}
      i = i + jump_step;
    }

  
  if (i >= size || array[i] >= value)
    {
      printf("Value found between indexes [%d] and [%d]\n",
	     (int)(i - jump_step), (int)i);
      index = jump_linear_search(array, i + 1, size, jump_step, value);
      return (index);
    }
  return (-1);
}

/**
 * linear_search - searches for a value in an array of integers using the
 * @array: a pointer to the first element of the array to search in
 * @start: index of upper end of jump block + 1
 * @size: number of elements in array from breakpoint
 * @jump_size: window size when interating through array
 * @value: value to search for
 * Return:  first index where value is located or -1 if value is not present
 */


int jump_linear_search(int *array, size_t start, size_t size,
		       size_t jump_step, int value)
{
  size_t i;

  if (array == NULL)
    return (-1);

  for (i = start - jump_step - 1; i < size; i++)
    {
      printf("Value checked array[%d] = [%d]\n", (int)i, array[i]);
      if (array[i] == value)
	return (i);
    }
  return (-1);
}
