#include <stdio.h>
// average calculate
int main()
{
    float num1, num2, num3, average;

    printf("Enter the 3 number for calculating average: ");
    scanf("%f%f%f", &num1, &num2, &num3);
    average = (num1 + num2 + num3) / 3;
printf("Average %.2f", average);
    return 0;
}