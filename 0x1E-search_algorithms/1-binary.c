#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
/**
 * print_array - prints an array of integers
 * @array: array to print
 * @size: size of array
 *
 * return: void
 */

void print_array(int *array, size_t size)
{
  size_t i;

  printf("Searching in array:");
  for (i = 0; i < size; i++)
    {
      printf(" %d", array[i]);
      if (i != size - 1)
	printf(",");
    }
  printf("\n");
}

/**
 * binary_search - searches for a value in a sorted array of integers using the
 * Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index where value is located, or -1 on failure
 */
int binary_search(int *array, size_t size, int value)
 {
   size_t i, mid, j;

   if (array != NULL && size > 0)
     {
       i = 0;
       j = size - 1;
       print_array(array + i, j + 1 - i);
       while (i < j)
	 {
	   mid = (i + j) / 2;
	   if (array[mid] < value)
	     i = mid + 1;
	   else if (array[mid] > value)
	     j = mid;
	   else
	     return (mid);
	   print_array(array + i, j + 1 - i);
	 }
     }
   return (-1);
 }
