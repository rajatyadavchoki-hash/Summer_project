#include <stdio.h>

int main()
{
    int start, end;

    scanf("%d%d", &start, &end);

    for(int n = start; n <= end; n++)
    {
        int prime = n > 1;

        for(int i = 2; i * i <= n; i++)
            if(n % i == 0)
                prime = 0;

        if(prime)
            printf("%d ", n);
    }

    return 0;
}