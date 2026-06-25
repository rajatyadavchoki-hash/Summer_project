#include <stdio.h>

int main()
{
    long long n, largest = 1;

    scanf("%lld", &n);

    for(long long i = 2; i * i <= n; i++)
    {
        while(n % i == 0)
        {
            largest = i;
            n /= i;
        }
    }

    if(n > 1)
        largest = n;

    printf("%lld", largest);
    return 0;
}