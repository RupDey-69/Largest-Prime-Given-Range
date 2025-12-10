#include <stdio.h>

int main()
{
    int n, maxPrime = 0;

    printf("Enter the Range 1-To-100: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        int count = 0;

        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
                count++;
        }

        if (count == 2)
            maxPrime = i;
    }
    
    printf("\nLargest Prime 1-%d is: %d\n", n, maxPrime);

    return 0;
}
