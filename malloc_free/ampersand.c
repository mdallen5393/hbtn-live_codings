#include <stdlib.h>

/**
 * main - does main stuff like making arrays of strings
 * Return: success
 */
int main(void)
{
    int i;
    int num_strs = 42;
    int num_chars = 12;

    char **strs = malloc(sizeof(char *) * num_strs);
    if (!strs)
        return (-1);

    for (i = 0; i < num_strs; i++)
    {
        strs[i] = malloc(sizeof(char) * num_chars);
        if (!strs[i])
        {
            for (i -= 1; i >= 0; i--)
                free(strs[i]);
            free(strs);
            return (-1);
        }
    }

    /* do stuff here */

    for (i = 0; i < num_strs; i++)
        free(strs[i]);

    free(strs);
}