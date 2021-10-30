#include <stdio.h>

/**
 * main - prints the adress of env and environ
 
 * Return: Always 0.
 */
extern char **environ;

int main(int ac, char **av, char **env)
{
  printf("address of env: %lu\n", (unsigned long)&env);
  printf("address of environ:%lu\n", (unsigned long)&environ);
  return 0;
}
