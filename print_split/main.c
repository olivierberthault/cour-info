#include <stdio.h>
#include <stdbool.h>
void split(char* str)
{
	int i = 0;
	bool  is_whitespace = false;

	while(str[i] != '\0')
	{
		if(str[i] == ' ')
		{
			is_whitespace = true;
		}
		else
		{
			if(is_whitespace == true)
			{
				printf("\n");
			}
			printf("%c", str[i]);
			is_whitespace = false ;
		}
		
		++i;
	}
	printf("\n");
}
int main(int ac, char** av)
{
	if(ac < 2)
	{
		printf("%s arg 1 \n", av[0]);
		return 1;
	}
	else
	{
		split(av[1]);
		return 0;
	}
}
