 #include <stdio.h>
 /*
         Size of a char: 1 byte(s)
         Size of an int: 4 byte(s)
         Size of a long int: 4 byte(s)
         Size of a long long int: 8 byte(s)
	 Size of a float: 4 byte(s)
 */ 
 int main()
{       
         printf("Size of a char: %zu byte(s)",sizeof(char));
	 printf("Size of an int: %zu byte(s)",sizeof(int));
	 printf("Size of a long int: %zu byte(s)",sizeof(long int));
	 printf("Size of a long long int: %zu byte(s)",sizeof(long long int));
	 printf("Size of a float: %zu byte(s)",sizeof(float));
	 return (0);
}
