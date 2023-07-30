#include <stdio.h>

void sum()
{
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Sum: %d\n\n", num1 + num2);
}

int main()
{
    sum();
    sum();
    sum();
}
