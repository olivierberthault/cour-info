#include <stdlib.h>
#include <string.h>

char* ft_strdup(char* str)
{
	const size_t len = strlen(str);
	char* new;

	new = (char*)malloc(sizeof(char) * (len + 1));
	
	if(new == NULL)
	{
		return NULL;
	}

	strcpy(new, str);
	return new;
}
