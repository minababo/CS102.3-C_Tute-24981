#include <stdio.h>

void calc(int x, int y)
{
    printf("Sum: %d\nDifference: %d\nProduct: %d\n", x+y, x-y, x*y);
}

int main()
{
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    calc(num1, num2);
}
