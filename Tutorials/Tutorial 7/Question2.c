#include <stdio.h>

void calc(int x, int y)
{
    printf("Sum: %d\n", x + y);
    printf("Difference: %d\n", x - y);
}

int main()
{
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    calc(num1, num2);
}
