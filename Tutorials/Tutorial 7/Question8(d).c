#include <stdio.h>

float intToFloat(int number)
{
    return number;
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Floating-point value: %f\n", intToFloat(num));
}
