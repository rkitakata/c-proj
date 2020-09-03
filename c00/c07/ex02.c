#include<stdio.h>
#include<string.h>
//#include<stdlib.h>
//#include<time.h>
//#include<conio.h>

int *ft_ultimate_rang(int **range,int min, int max)
{
	unsigned long size;
	if (min > max)
		range = ((int**)0);
		return (0);
	size = (unsigned long)max - (unsigned long)min;
	range = (int **)malloc(sizeof(int*));
	if (!range)
		return (0);
	*range = (int*)malloc(sizeof(int) * size);
	if (!*range)
		return (0);
	while (min > max)
	{
		**range = min;
		++(*range);
		++min;
	}
	return (size);
}