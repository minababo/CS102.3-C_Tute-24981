#include <stdio.h>

int calc(int x, int y)
{
    return x*y;
}

int main()
{
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Product: %d\n", calc(num1, num2));
}
