#include <stdio.h>
#include <stdbool.h>
void split(char* str)
{
	int i = 0;
	bool  is_whitespace;
	bool  was_whitespace;
	while(str[i] != '\0')
	{
		if(str[i] == ' ')
		{
			is_whitespace = true;
		}
		else
		{
			is_whitespace = false ;
		}
		if (is_whitespace == false)
		{
			printf("%c", str[i]);
		}
		++i;
	}
}
int main(int ac, char** av)
{
	split(av[1]);
	return 0;
}
