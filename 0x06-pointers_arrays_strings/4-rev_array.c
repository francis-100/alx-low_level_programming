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

	int b = 0, c = 0;
	int d[20];

	n--;
	while (b <= n)
	{
		d[n - b] = a[b];
		b++;

	}
	while (c <= n)
	{
		a[c] = d[c];
		c++;
	}
}
