#include <stdio.h>

int main(void)
{
    int i = 0;
    for(;i<100; ++i)
    {
        if (i % 10)
        {
        putchar(' ');
        }
    printf ("%2d", i);
    if ((i%10)==9)
    {
        putchar ('\n');
    }
    }
    return 0;
}
