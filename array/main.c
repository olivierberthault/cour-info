#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

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
	return biggest;
}
int get_min(int* ptr, int size)
{
	int i;
	int min;
	
	i = 0;
	min = INT_MAX;

	while(i < size)
	{
		if(min > ptr[i])
		{
			min = ptr[i];
		}
		i++;
	}
	return min;
}
int main(void)
{
	int array[6] = {312,354,314,3154,-6987,514};
	int max = get_biggest(array, 6);
	int min = get_min(array, 6);
	printf("the biggest number is %d \n", max);
	printf("the minimal number is %d \n", min);

	return 0;
}
