/**
 * _strcmp - function that compares two strings
 * @s1: string 1 input to compare
 * @s2: against string 2
 *
 * Return: 0 if @s1 and @s2 are equal
 *         -ve integer if @s1 is less than @s2
 *         +ve integer if @s1 is greater than @s2
*/

int _strcmp(char *s1, char *s2)
{
	int a = 0;

	while (s1[a] == s2[a] && s1[a] && s2[a])
	{
		a++;
	}

	return (s1[a] - s2[a]);
}
