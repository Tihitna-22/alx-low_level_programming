#include <stdio.h>

extern char **environ;
/**
 * main - prints environment using global variable environ
 *
 * Return: Always 0.
 */
int main(void)
{
    unsigned int i;

    i = 0;
    while (environ[i] != NULL)
    {
        printf("%s\n", environ[i]);
        i++;
    }
    return (0);
}
