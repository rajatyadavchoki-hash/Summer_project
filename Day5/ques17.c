#include <stdio.h>

int main()
{
    int n, sum = 1;

    scanf("%d", &n);

    for(int i = 2; i <= n / 2; i++)
        if(n % i == 0)
            sum += i;

    printf((sum == n && n != 1) ? "Perfect" : "Not Perfect");
    return 0;
}