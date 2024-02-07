#include <stdlib.h>

int get_biggest(int* ptr, int size)
{
	int i;
	int biggest;
	
	i = 0;
	biggest = INT_MIN;

	while(i < size)
	{
		if(biggest < ptr[i])
		{
			biggest = ptr[i];
		}
		i++;
	}
	return biggest
}
int main(void)
{
	int array[6] = {312,354,314,3154,-6987,514};
	int result = get_biggest(array, 6);
	printf("%d \n", result);
	return 0;
}
