#include <stdio.h>

int main()
{

    // checking entered number is negative or positive
    int a = 10,n1,n2;
    int choosedvalue;
    if (a < 0)
    {
        printf("Entered number is positive");
    }
    else
    {
        printf("Entered number is negative");
    }

    // nested if
    printf("Hi, please select below operations.");
    printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division");
    scanf("%d", choosedvalue);
        printf("Thanl you, Enter 2 number for your result : ");
    scanf("%d%d", n1,n2);
    if (choosedvalue == 1)
    {
        /* Addition */
    }
    else if (choosedvalue == 2)
    {
        // sub
    }
    else if (choosedvalue == 3)
    {
        // multiplication
    }
    else if (choosedvalue == 4)
    {
        // division
    }
    else
    {
        // error
    }

    return 0;
}