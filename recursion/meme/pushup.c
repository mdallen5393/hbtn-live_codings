#include <stdio.h>

void do_one_pushup(int n);

int main(void)
{
    do_one_pushup(1);
    return (0);
}

void do_one_pushup(int n)
{
    printf("%d pushups done\n", n);
    do_one_pushup(++n);
}
