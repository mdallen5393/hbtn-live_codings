#include "main.h"
#include <stdio.h>

/**
 * main - main file
 */
int main(void)
{
    char *my_str = "hello world, these people are insane";

    printf("String length = %d\n", _strlen(my_str));
    printf("Simple string length = %d\n", simple_strlen(my_str));
    printf("Pointer string length = %d\n", pointer_len(my_str));

    return (0);
}