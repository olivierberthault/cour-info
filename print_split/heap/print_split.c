#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

int main(int ac, char** av)
{
	if (ac < 2)
	{
		// early return
		return EXIT_FAILURE;
	}
	char** strs =  ft_split(av[1]);
	print_strs(strs)

	return EXIT_SUCCESS ;
} 
