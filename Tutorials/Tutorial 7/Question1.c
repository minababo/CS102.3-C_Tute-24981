#include <stdio.h>

void calc()
{
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("\nSum: %d\n", num1 + num2);
    printf("Difference: %d\n", num1 - num2);
}

int main()
{
    calc();
}
