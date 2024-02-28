#include <stdio.h>

void print_arguments (char **arguments_array)
{
	int i = 1;

	while(arguments_array[i] != NULL)
	{
		printf("%s ", arguments_array[i]);
		++i;
	}	
}

int main (int ac, char **av)
{
	//printf("%s, %d \n", av[1], ac);
	print_arguments(av);
	return 0;
}
