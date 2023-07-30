#include <stdio.h>

int quotient(int x, int y)
{
    return x/y;
}

int main()
{
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Quotient: %d\n", quotient(num1, num2));
}
