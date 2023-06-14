#include <stdio.h>
#include <stdlib.h>

int ifact(int n);
int rfact(int n);

int main(void)
{
    printf("%d! = %d\n", 5, ifact(5));
    printf("%d! = %d\n", 5, rfact(5));
    return (0);
}

int ifact(int n)
{
    int result = n;

    if (n == 0)
        return (1);

    for (--n; n > 0; n--)
        result *= n;

    return (result);
}

int rfact(int n)
{
    if (n == 0)
        return (1);
    return (n * rfact(n - 1));
}