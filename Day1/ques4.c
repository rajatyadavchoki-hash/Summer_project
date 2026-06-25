#include <stdio.h>

int main()
{
    long long n;
    int count = 0;

    scanf("%lld", &n);

    do
    {
        count++;
        n /= 10;
    } while(n);

    printf("%d", count);
    return 0;
}