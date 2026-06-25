#include <stdio.h>

int main()
{
    int a, b, x, y, temp;

    scanf("%d%d", &a, &b);

    x = a;
    y = b;

    while(y)
    {
        temp = y;
        y = x % y;
        x = temp;
    }

    printf("%d", (a * b) / x);
    return 0;
}