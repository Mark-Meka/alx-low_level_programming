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
	int i;

	if (argc == 3)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}
