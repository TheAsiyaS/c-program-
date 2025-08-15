#include <stdio.h>
// average calculate
int main()
{
    int i, sum, flag, n;

    for (i = 0; i < 10; i++)
    {
        sum = sum + i; // here previous sum is stored |logic can use in hacker rank , series problem|
        printf("sum is : %d", &sum);
    }
    printf("final sum is : %d", &sum);

    //----even number print
    for (i = 0; i <= 50; i++)
    {
        if (i % 2 == 0)
        {
            printf("even number : %d", &i);
        }
    }
    //--prime number
    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        printf("It is a prime number");
    }
    else
    {
        printf("It is not a prime number");
    }

    return 0;
}
