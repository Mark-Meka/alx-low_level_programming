#include <stdio.h>
/**
  *main - prints the  name of this program.
  *@argc: counts number of arguemnts paased in th command line.
  *@argv: stores arguments passed in the command line.
  *
  *Return: 0 on success.
  */
int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);
	printf("%s\n", argv[1]);
	printf("%s\n", argv[2]);
	return (0);
}
