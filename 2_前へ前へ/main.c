#include <stdio.h>
#include <stdlib.h>

#define MIN(i, j) (i < j ? i : j)

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);

    int count = 0;

    if (y < 0)
    {
        if (abs(x) > abs(y))
        {
            int tmp = y;
            y = x;
            x = y;
        }
        count += 1;
    }

    count += MIN(abs(x), abs(y));

    if (abs(x) > abs(y))
        count += 1;

    count += abs(abs(x) - abs(y));

    printf("%d\n", count);

    return 0;
}
