#include <stdio.h>
#include <stdlib.h>

/**
* main - a program that prints all the arguments, without using ac
*/
int main(int ac, char **av)
{
  if(ac > 1)
    {
      while (*av != NULL)
	{
		printf("%s\n", *av);
		av++;
	}
    }
	return 0;
}
