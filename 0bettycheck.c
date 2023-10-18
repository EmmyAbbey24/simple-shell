#include <stdio.h>

/**
 * multiply_numbers - Multiplies two numbers.
 * @x: The first number.
 * @y: The second number.
 *
 * Return: The result of the multiplication.
 */
int multiply_numbers(int x, int y)
{
int result = x * y;
return (result);
}

int main(void)
{
int num1 = 5;
int num2 = 7;
int product;

product = multiply_numbers(num1, num2);

printf("The product of %d and %d is %d\n", num1, num2, product);

return (0);
}
