#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

char** ft_split(char* str)
{
	return ;
}

void print_strs(char** strs)
{
	size_t i = 0;

	while(strs[i] != NULL)
	{
		printf("%s \n", strs[i]);
		++i;
	}
}

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
