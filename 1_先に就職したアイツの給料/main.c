#include <stdio.h>

int main()
{
    int n, m;

    scanf("%d %d", &n, &m);

    if (n >= m)
    {
        printf("Impossible\n");
        return 0;
    }

    int diff = 4 * n;

    for (int i = 1;; i++)
    {
        diff -= m - n;

        if (diff <= 0)
        {
            printf("%d\n", i);
            return 0;
        }
    }

    return 0;
}
