#include<stdio.h>
#include<string.h>
//#include<stdlib.h>
//#include<time.h>
//#include<conio.h>

int *ft_rang(int min, int max)
{
	unsigned long size;
	int* dest;

	if (min > max)
		return ((int*)0);
	size = (unsigned long)max - (unsigned long)min;
	if (!size)
		return ((int*)0);
	dest = (int*)malloc(sizeof(int) * size);
	if (!dest)
		return ((int*)0);
	while(min < max)
	{
		*dest = min;
		++dest;
		++min;
	}
	return (dest);
	
}