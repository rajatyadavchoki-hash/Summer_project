#include <stdio.h>

int main()
{
    int number;

    scanf("%d", &number);

    if(number == 0)
    {
        printf("0");
        return 0;
    }

    int binary[32], index = 0;

    while(number > 0)
    {
        binary[index++] = number % 2;
        number /= 2;
    }

    for(int i = index - 1; i >= 0; i--)
        printf("%d", binary[i]);

    return 0;
}