#include "main.h"


int _strlen(char *str)
{
    int len = 0;

    while (str[len] != '\0')
    {
        len++;
    }
    return (len);
}

int simple_strlen(char *str)
{
    int len = 0;
    while (str[len])
        len++;
    return (len);
}

int pointer_len(char *str)
{
    int len = 0;
    while (*(str + len))
        len++;
    return (len);
}