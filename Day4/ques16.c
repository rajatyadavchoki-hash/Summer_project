#include <stdio.h>

int main()
{
    int start, end;

    scanf("%d%d", &start, &end);

    for(int n = start; n <= end; n++)
    {
        int temp = n, sum = 0;

        while(temp)
        {
            int digit = temp % 10;
            sum += digit * digit * digit;
            temp /= 10;
        }

        if(sum == n)
            printf("%d ", n);
    }

    return 0;
}