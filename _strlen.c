/**
 * _strlen - computes the length of a string
 * @s: string which length to compute
 * Return: length of s
*/
int _strlen(char *s)
{
	int len;

	len = 0;
	while (*s)
	{
		len++;
		s++;
	}

	return (len);
}
