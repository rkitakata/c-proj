#include<stdio.h>
#include<string.h>
//#include<stdlib.h>
//#include<time.h>
//#include<conio.h>

char* ft_strdup(char* src)
{
	int size;
	char* dest;
	
	size = ft_strlen(src);
	dest = (char*)malloc(sizeof(char) * (size + 1));
	if (!src)
		return(0);
	while (*src)
	{
		*dest = *src;
		++dest;
		++src;
	}
	*dest = '\0';
	return (dest);
	
}