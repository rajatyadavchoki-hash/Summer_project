#include <stdio.h>

int main()
{
    int a, b, temp;

    scanf("%d%d", &a, &b);

    while(b)
    {
        temp = b;
        b = a % b;
        a = temp;
    }

    printf("%d", a);
    return 0;
}