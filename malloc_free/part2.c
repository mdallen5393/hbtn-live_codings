#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function that mallocs an array of strings, prints it, and frees
 *
 * Return: -1 on failure
 */
int main(void)
{
    int i;

    int num_strs = 5;
    int num_chars = 50;

    /* Allocate memory for the array of character pointers */
    char **array_of_strings = malloc(sizeof(char *) * num_strs);

    /* malloc has a chance to fail - we have to make sure it worked */
    if (!array_of_strings)
    {
        free(array_of_strings);
        return (-1);
    }

    /* Allocate memory for each string in the array */
    for (i = 0; i < num_strs; i++)
    {
        array_of_strings[i] = malloc(sizeof(char) * num_chars);

        /* again, we must make sure all of those mallocs worked */
        if (!(array_of_strings[i]))
        {
            /* free each array that succeeded */
            for (i = i - 1; i >= 0; i--)
                free(array_of_strings[i]);
            /* free the array of strings */
            free(array_of_strings);
        }
    }

    /* Free the memory */
    for (i = 0; i < num_strs; i++)      /* First free each string */
        free(array_of_strings[i]);
    free(array_of_strings);             /* Then free the array of pointers */
}
