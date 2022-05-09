
#include <stdio.h>

int main()
{
    int i, m, n;
    printf("\n形式1\n");
    for (i = 1; i <= 9; ++i)
    {
        for (m = 1; m <= 7 * (9 - i); ++m)
        {
            printf(" ");
        }
        for (n = 1; n <= i; ++n)
        {
            printf("%d*%d=%-2d ",i,n,i*n);
        }
        printf("\n");
    }

    printf("\n形式2\n");
    for (i = 1; i <= 9; ++i)
    {
        for (n = 1; n <= i; ++n)
        {
            printf("%d*%d=%-2d ", i, n, i * n);
        }
        printf("\n");
    }

    printf("\n形式3\n");
    for (i = 1; i <= 9; ++i)
    {
        for (n=i; n <= 9; ++n)
        {
            printf("%d*%d=%-2d ", i, n, i * n);
        }
        printf("\n");
    }

    printf("\n形式4\n");
    for (i = 1; i <= 9; ++i)
    {
        for (m = 1; m <= 7 * (i - 1); ++m)
        {
            printf(" ");
        }
        for(n = i; n <= 9; ++n)
        {
            printf("%d*%d=%-2d ", i, n, i * n);
        }
        printf("\n");
    }

    printf("\n形式5\n");
    for (i = 1; i <= 9; ++i)
    {
        for (n = 1; n <= 9; ++n)
        {
            printf("%d*%d=%-2d ", i, n, i * n);
        }
        printf("\n");
    }
}

