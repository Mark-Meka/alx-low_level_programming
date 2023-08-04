#include <stdio.h>
#include <stdlib.h>
/**
  *main - adds and prints sum of positive numbers
  *followed by a new line.
  *@argc: number of arguments passed.
  *@argv: pointer to array of size argc, containing
  *arguments passed.
  *
  *Return: 0 on success.
  *1 on error.
  */
int main(int argc, char *argv[])
{
	int sum, N1, N2;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	
	for (N1 = 1; N1 < argc; N1++)
	{
		for (N2 = 0; argv[N1][N2]; N2++)
		{
			if (argv[N1][N2] < '\0' || argv[N1][N2] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[N1]);
	}
	printf("%d\n", sum);
	return (0);
}
