#include <stdio.h>
#include <stdlib.h>
/**
  *main - prints result of multiplication followed by a new line.
  *@argc: number of arguments passed.
  *@argv: array of size argc containing arguments passed.
  *
  *Return: 0 on success.
  *1 on error.
  */
int main(int argc, char *argv[])
{
	int argc1, argc2, mul;

	if (argc == 3)
	{
			argc1 = atoi(argv[1]);
			argc2 = atoi(argv[2]);

			mul = argc1 * argc2;
			
			printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
