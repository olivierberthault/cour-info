#include <stdlib.h>
#include <stdio.h>

void print_strs(char** strs)
{
	size_t i = 0;

	while(strs[i] != NULL)
	{
		printf("%s \n", strs[i]);
		++i;
	}
}

