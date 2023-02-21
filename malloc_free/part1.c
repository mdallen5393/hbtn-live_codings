#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function that mallocs an array of strings, prints it, and frees
 *
 * Return: success
 */
int main(void)
{
    int i;

    int num_strs = 5;
    int num_chars = 50;

    /* Allocate memory for the array of character pointers */
    char **array_of_strings = malloc(sizeof(char *) * num_strs);

    /* Allocate memory for each string in the array */
    for (i = 0; i < num_strs; i++)
        array_of_strings[i] = malloc(sizeof(char) * num_chars);

    /* Free the memory */
    for (i = 0; i < num_strs; i++)      /* First free each string */
        free(array_of_strings[i]);
    free(array_of_strings);             /* Then free the array of pointers */
}
