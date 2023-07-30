#include <stdio.h>

double product(int x, float y)
{
    return x * y;
}

int main()
{
    int num1;
    float num2;

    printf("Enter an integer: ");
    scanf("%d", &num1);
    printf("Enter a floating-point value: ");
    scanf("%f", &num2);

    printf("Product: %.2lf", product(num1, num2));
}
