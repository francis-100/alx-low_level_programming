#include "main.h"

/**
 * reverse_array - function that reverses the
 *                content of an array of integers
 * @a: pointer to int array
 * @n: number of elements to swap
 *
 * Return: Nothing
*/

void reverse_array(int *a, int n)
{
	int temp, s, e;

	s = 0;
	e = n - 1;
	
	/**
	 * set value in array a in temp
	 * then place the last array in
	 * the first array then place the
	 * value in temp to the last array
	*/
	
	while (s < e)
	{
		temp = a[s];
		a[s] = a[e];
		a[e] = temp;
		s++;
		e--;
	}
}
