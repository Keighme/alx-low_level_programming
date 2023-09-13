#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - add
 * @a: arg
 * @b: arg
 * Return: int
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtract
 * @a: arg
 * @b: arg
 * Return: int
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiply
 * @a: arg
 * @b: arg
 * Return: int
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divide
 * @a: arg
 * @b: arg
 * Return: int
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - get remainder
 * @a: arg
 * @b: arg
 * Return: int
 */
int op_mod(int a, int b)
{
	return (a % b);
}
