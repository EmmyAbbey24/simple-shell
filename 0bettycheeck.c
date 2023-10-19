#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * multiply_numbers - Multiply two numbers.
 * @x: The first number.
 * @y: The second number.
 * @answer: Pointer to store the answer.
 *
 * Description: This function multiplies two numbers x & y.
 */
void multiply_numbers(int x, int y, int *answer)
{
*answer = x * y;
}

/**
 * main - Entry point of the program.
 *
 * Description: This is the main function
 * that multiplies two numbers and displays the result.
 *
 * Return: Always 0 (success).
 */
int main(void)
{
int number1 = 10;
int number2 = 20;
int product = 0;
char answer_str[20];
int answer_len;

multiply_numbers(number1, number2, &product);
answer_len = jet_print
(answer_str, sizeof(answer_str), "Product: %d\n", product);

if (answer_len < 0)
{
write(STDERR_FILENO, "Error formatting answer.\n", 26);
return (EXIT_FAILURE);
}
write(STDOUT_FILENO, answer_str, answer_len);
write(STDOUT_FILENO, "\n", 1);

return (EXIT_SUCCESS);
