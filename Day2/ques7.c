#include <stdio.h>

int main()
{
    int n, product = 1;

    scanf("%d", &n);

    while(n)
    {
        product *= n % 10;
        n /= 10;
    }

    printf("%d", product);
    return 0;
}