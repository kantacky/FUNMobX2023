#include <stdio.h>

int main()
{
    // X1人、X2人、X3人のいずれか
    int x[3];
    // N回の分身でM人を作る
    int n, m;

    scanf("%d %d %d", x, x + 1, x + 2);
    scanf("%d %d", &n, &m);

    if (x[0] < x[1])
    {
        int tmp = x[0];
        x[0] = x[1];
        x[1] = tmp;
    }

    if (x[1] < x[2])
    {
        int tmp = x[1];
        x[1] = x[2];
        x[2] = tmp;

        if (x[0] < x[1])
        {
            int tmp = x[0];
            x[0] = x[1];
            x[1] = tmp;
        }
    }

    int count = 0;

    for (int q1 = m / x[0]; q1 >= 0; q1--)
    {
        if (q1 > n)
            break;
        int r1 = m - q1 * x[0];
        for (int q2 = r1 / x[1]; q2 >= 0; q2--)
        {
            if (q1 + q2 > n)
                break;
            int r2 = r1 - q2 * x[1];
            int q3 = r2 / x[2];
            int r3 = r2 % x[2];
            if (r3 == 0 && q1 + q2 + q3 == n)
                count += 1;
        }
    }

    printf("%d\n", count);

    return 0;
}
