#include "variadic_functions.h"

/**
 * sum_them_all - return the sumof all its pars.
 * @n: amount  of the arguments.
 *
 * Return: sum of its pars.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list v;
	unsigned int i;
	int sum = 0;

	if(n == 0)
		return (0);

	va_start(v, n);

	for(i = 0; i < n; i++)
		sum += va_arg(v. int);

	va_end(v)

	return (sum);
}
